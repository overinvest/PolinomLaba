#include "MyForm.h"
#include "Polinom.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PolinomForm::MyForm form;
	Application::Run(% form);

	return 0;
}



int maxDegree{};
int countVar{};

Polinom polOne(maxDegree, countVar);
Polinom polTwo(maxDegree, countVar);
Polinom polRes(maxDegree, countVar);




void MarshalString(String^ s, std::string& str) 
{
	using namespace Runtime::InteropServices;

	const char* cStr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();

	str = cStr;

	Marshal::FreeHGlobal(IntPtr((void*)cStr));
}



System::Void PolinomForm::MyForm::checkNumericMaxDegreeAndCountVar()
{
	maxDegree = Convert::ToInt32(numericUpDownMaxDegree->Value);
	countVar = Convert::ToInt32(numericUpDownCountVar->Value);


	if (maxDegree == 0 || countVar == 0)
	{
		buttonReset->Enabled = false;
	}
	else
	{
		if (countVar == 0) return;

		polOne.setDegreeAndCountVar(maxDegree, countVar);
		polTwo.setDegreeAndCountVar(maxDegree, countVar);
		polRes.setDegreeAndCountVar(maxDegree, countVar);

		panel1->Visible = true;
		buttonReset->Enabled = true;
		this->ClientSize = System::Drawing::Size(400 + 426, 79 + 279);
	}
}
System::Void PolinomForm::MyForm::numericUpDownMaxDegree_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkNumericMaxDegreeAndCountVar();
}
System::Void PolinomForm::MyForm::numericUpDownCountVar_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	checkNumericMaxDegreeAndCountVar();
}



System::Void PolinomForm::MyForm::buttonReset_Click(System::Object^ sender, System::EventArgs^ e)
{
	maxDegree = countVar = 0;

	numericUpDownMaxDegree->Value = 0;
	numericUpDownCountVar->Value = 0;
	panel1->Visible = false;
	this->ClientSize = System::Drawing::Size(400, 79);

	clearPolAll();	
}



System::Void PolinomForm::MyForm::buttonClearPolinomOne_Click(System::Object^ sender, System::EventArgs^ e)
{
	clearPolOne();
}
System::Void PolinomForm::MyForm::buttonClearPolinomTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
	clearPolTwo();
}
System::Void PolinomForm::MyForm::buttonClearAllPolinoms_Click(System::Object^ sender, System::EventArgs^ e)
{
	clearPolAll();
}



System::Void PolinomForm::MyForm::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{

	try
	{
		updPolOne();
		updPolTwo();
	}
	catch (...)
	{
		MessageBox::Show("Неверный ввод.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	polRes = polOne + polTwo;
	textBoxPolinomResult->Text = gcnew String(polRes.getPolinom().c_str());
}
System::Void PolinomForm::MyForm::buttonDiff_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		updPolOne();
		updPolTwo();
	}
	catch (...)
	{
		MessageBox::Show("Неверный ввод.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	polRes = polOne - polTwo;
	textBoxPolinomResult->Text = gcnew String(polRes.getPolinom().c_str());
}
System::Void PolinomForm::MyForm::buttonMult_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		updPolOne();
		updPolTwo();
	}
	catch (...)
	{
		MessageBox::Show("Неверный ввод.", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	polRes = polOne * polTwo;
	textBoxPolinomResult->Text = gcnew String(polRes.getPolinom().c_str());
}



System::Void PolinomForm::MyForm::buttonSwapPolinoms_Click(System::Object^ sender, System::EventArgs^ e)
{
	Polinom copyPolOne(polOne);
	polOne = polTwo;
	polTwo = copyPolOne;

	String^ copyTextBoxPolOne = textBoxPolinomOne->Text;
	textBoxPolinomOne->Text = textBoxPolinomTwo->Text;
	textBoxPolinomTwo->Text = copyTextBoxPolOne;
}



System::Void PolinomForm::MyForm::clearPolOne()
{
	polOne.clearValues();
	textBoxPolinomOne->Clear();
}
System::Void PolinomForm::MyForm::clearPolTwo()
{
	polTwo.clearValues();
	textBoxPolinomTwo->Clear();
}
System::Void PolinomForm::MyForm::clearPolRes()
{
	polRes.clearValues();
	textBoxPolinomResult->Clear();
}
System::Void PolinomForm::MyForm::clearPolAll()
{
	clearPolOne();
	clearPolTwo();
	clearPolRes();
}



System::Void PolinomForm::MyForm::updPolOne()
{
	std::string strPol{};
	MarshalString(textBoxPolinomOne->Text, strPol);

	polOne = Polinom(strPol, maxDegree, countVar);
	std::string testStr = polOne.getPolinom();
	textBoxPolinomOne->Text = gcnew String(testStr.c_str());
}

System::Void PolinomForm::MyForm::updPolTwo()
{
	std::string strPol{};
	MarshalString(textBoxPolinomTwo->Text, strPol);

	polTwo = Polinom(strPol, maxDegree, countVar);
	std::string testStr = polTwo.getPolinom();
	textBoxPolinomTwo->Text = gcnew String(testStr.c_str());
}
