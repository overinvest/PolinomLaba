#pragma once

namespace PolinomForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMaxDegree;
	protected:

	protected:


	private: System::Windows::Forms::Label^ labelMaxDegree;
	private: System::Windows::Forms::Label^ labelCountVar;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCountVar;
	private: System::Windows::Forms::Button^ buttonReset;









































	private: System::Windows::Forms::Button^ buttonAdd;

	private: System::Windows::Forms::Button^ buttonDiff;

	private: System::Windows::Forms::Button^ buttonMult;

	private: System::Windows::Forms::Button^ buttonSwapPolinoms;
	private: System::Windows::Forms::Label^ labelPolinomOne;
	private: System::Windows::Forms::TextBox^ textBoxPolinomOne;
	private: System::Windows::Forms::Label^ labelPolinomTwo;
	private: System::Windows::Forms::TextBox^ textBoxPolinomTwo;
	private: System::Windows::Forms::Label^ labelPolinomResult;
	private: System::Windows::Forms::TextBox^ textBoxPolinomResult;
	private: System::Windows::Forms::Button^ buttonClearPolinomOne;
	private: System::Windows::Forms::Button^ buttonClearPolinomTwo;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;










	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDownMaxDegree = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelMaxDegree = (gcnew System::Windows::Forms::Label());
			this->labelCountVar = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCountVar = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonSwapPolinoms = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDiff = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->labelPolinomOne = (gcnew System::Windows::Forms::Label());
			this->textBoxPolinomOne = (gcnew System::Windows::Forms::TextBox());
			this->labelPolinomTwo = (gcnew System::Windows::Forms::Label());
			this->textBoxPolinomTwo = (gcnew System::Windows::Forms::TextBox());
			this->labelPolinomResult = (gcnew System::Windows::Forms::Label());
			this->textBoxPolinomResult = (gcnew System::Windows::Forms::TextBox());
			this->buttonClearPolinomOne = (gcnew System::Windows::Forms::Button());
			this->buttonClearPolinomTwo = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxDegree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCountVar))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDownMaxDegree
			// 
			this->numericUpDownMaxDegree->BackColor = System::Drawing::Color::Silver;
			this->numericUpDownMaxDegree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDownMaxDegree->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numericUpDownMaxDegree->Location = System::Drawing::Point(142, 11);
			this->numericUpDownMaxDegree->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownMaxDegree->Name = L"numericUpDownMaxDegree";
			this->numericUpDownMaxDegree->Size = System::Drawing::Size(127, 21);
			this->numericUpDownMaxDegree->TabIndex = 2;
			this->numericUpDownMaxDegree->TabStop = false;
			this->numericUpDownMaxDegree->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownMaxDegree->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownMaxDegree_ValueChanged);
			// 
			// labelMaxDegree
			// 
			this->labelMaxDegree->AutoSize = true;
			this->labelMaxDegree->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelMaxDegree->Location = System::Drawing::Point(29, 11);
			this->labelMaxDegree->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMaxDegree->Name = L"labelMaxDegree";
			this->labelMaxDegree->Size = System::Drawing::Size(109, 22);
			this->labelMaxDegree->TabIndex = 3;
			this->labelMaxDegree->Text = L"Max power";
			// 
			// labelCountVar
			// 
			this->labelCountVar->AutoSize = true;
			this->labelCountVar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCountVar->Location = System::Drawing::Point(74, 41);
			this->labelCountVar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCountVar->Name = L"labelCountVar";
			this->labelCountVar->Size = System::Drawing::Size(64, 22);
			this->labelCountVar->TabIndex = 5;
			this->labelCountVar->Text = L"Count";
			// 
			// numericUpDownCountVar
			// 
			this->numericUpDownCountVar->BackColor = System::Drawing::Color::Silver;
			this->numericUpDownCountVar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDownCountVar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->numericUpDownCountVar->Location = System::Drawing::Point(142, 41);
			this->numericUpDownCountVar->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownCountVar->Name = L"numericUpDownCountVar";
			this->numericUpDownCountVar->Size = System::Drawing::Size(127, 21);
			this->numericUpDownCountVar->TabIndex = 4;
			this->numericUpDownCountVar->TabStop = false;
			this->numericUpDownCountVar->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownCountVar->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownCountVar_ValueChanged);
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::LightGray;
			this->buttonReset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonReset->Enabled = false;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReset->Location = System::Drawing::Point(285, 11);
			this->buttonReset->Margin = System::Windows::Forms::Padding(2);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(86, 51);
			this->buttonReset->TabIndex = 9;
			this->buttonReset->TabStop = false;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonSwapPolinoms
			// 
			this->buttonSwapPolinoms->BackColor = System::Drawing::Color::LightGray;
			this->buttonSwapPolinoms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSwapPolinoms->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonSwapPolinoms->Location = System::Drawing::Point(668, 161);
			this->buttonSwapPolinoms->Margin = System::Windows::Forms::Padding(2);
			this->buttonSwapPolinoms->Name = L"buttonSwapPolinoms";
			this->buttonSwapPolinoms->Size = System::Drawing::Size(124, 46);
			this->buttonSwapPolinoms->TabIndex = 12;
			this->buttonSwapPolinoms->TabStop = false;
			this->buttonSwapPolinoms->Text = L"Swap";
			this->buttonSwapPolinoms->UseVisualStyleBackColor = false;
			this->buttonSwapPolinoms->Click += gcnew System::EventHandler(this, &MyForm::buttonSwapPolinoms_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::LightGray;
			this->buttonAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->Location = System::Drawing::Point(668, 113);
			this->buttonAdd->Margin = System::Windows::Forms::Padding(2);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(39, 44);
			this->buttonAdd->TabIndex = 11;
			this->buttonAdd->TabStop = false;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDiff
			// 
			this->buttonDiff->BackColor = System::Drawing::Color::LightGray;
			this->buttonDiff->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDiff->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiff->Location = System::Drawing::Point(711, 113);
			this->buttonDiff->Margin = System::Windows::Forms::Padding(2);
			this->buttonDiff->Name = L"buttonDiff";
			this->buttonDiff->Size = System::Drawing::Size(39, 44);
			this->buttonDiff->TabIndex = 10;
			this->buttonDiff->TabStop = false;
			this->buttonDiff->Text = L"-";
			this->buttonDiff->UseVisualStyleBackColor = false;
			this->buttonDiff->Click += gcnew System::EventHandler(this, &MyForm::buttonDiff_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->BackColor = System::Drawing::Color::LightGray;
			this->buttonMult->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMult->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMult->Location = System::Drawing::Point(754, 113);
			this->buttonMult->Margin = System::Windows::Forms::Padding(2);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(38, 44);
			this->buttonMult->TabIndex = 9;
			this->buttonMult->TabStop = false;
			this->buttonMult->Text = L"*";
			this->buttonMult->UseVisualStyleBackColor = false;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::buttonMult_Click);
			// 
			// labelPolinomOne
			// 
			this->labelPolinomOne->AutoSize = true;
			this->labelPolinomOne->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPolinomOne->Location = System::Drawing::Point(12, 21);
			this->labelPolinomOne->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPolinomOne->Name = L"labelPolinomOne";
			this->labelPolinomOne->Size = System::Drawing::Size(99, 22);
			this->labelPolinomOne->TabIndex = 0;
			this->labelPolinomOne->Text = L"Polinom 1";
			// 
			// textBoxPolinomOne
			// 
			this->textBoxPolinomOne->BackColor = System::Drawing::Color::Silver;
			this->textBoxPolinomOne->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPolinomOne->Location = System::Drawing::Point(16, 44);
			this->textBoxPolinomOne->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPolinomOne->Name = L"textBoxPolinomOne";
			this->textBoxPolinomOne->Size = System::Drawing::Size(469, 25);
			this->textBoxPolinomOne->TabIndex = 1;
			// 
			// labelPolinomTwo
			// 
			this->labelPolinomTwo->AutoSize = true;
			this->labelPolinomTwo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPolinomTwo->Location = System::Drawing::Point(12, 83);
			this->labelPolinomTwo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPolinomTwo->Name = L"labelPolinomTwo";
			this->labelPolinomTwo->Size = System::Drawing::Size(99, 22);
			this->labelPolinomTwo->TabIndex = 2;
			this->labelPolinomTwo->Text = L"Polinom 2";
			// 
			// textBoxPolinomTwo
			// 
			this->textBoxPolinomTwo->BackColor = System::Drawing::Color::Silver;
			this->textBoxPolinomTwo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPolinomTwo->Location = System::Drawing::Point(16, 106);
			this->textBoxPolinomTwo->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPolinomTwo->Name = L"textBoxPolinomTwo";
			this->textBoxPolinomTwo->Size = System::Drawing::Size(469, 25);
			this->textBoxPolinomTwo->TabIndex = 3;
			// 
			// labelPolinomResult
			// 
			this->labelPolinomResult->AutoSize = true;
			this->labelPolinomResult->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPolinomResult->Location = System::Drawing::Point(12, 141);
			this->labelPolinomResult->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPolinomResult->Name = L"labelPolinomResult";
			this->labelPolinomResult->Size = System::Drawing::Size(68, 22);
			this->labelPolinomResult->TabIndex = 4;
			this->labelPolinomResult->Text = L"Result";
			// 
			// textBoxPolinomResult
			// 
			this->textBoxPolinomResult->BackColor = System::Drawing::Color::Silver;
			this->textBoxPolinomResult->Cursor = System::Windows::Forms::Cursors::No;
			this->textBoxPolinomResult->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPolinomResult->Location = System::Drawing::Point(16, 167);
			this->textBoxPolinomResult->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPolinomResult->Name = L"textBoxPolinomResult";
			this->textBoxPolinomResult->ReadOnly = true;
			this->textBoxPolinomResult->Size = System::Drawing::Size(469, 25);
			this->textBoxPolinomResult->TabIndex = 5;
			this->textBoxPolinomResult->TabStop = false;
			// 
			// buttonClearPolinomOne
			// 
			this->buttonClearPolinomOne->BackColor = System::Drawing::Color::LightGray;
			this->buttonClearPolinomOne->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClearPolinomOne->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonClearPolinomOne->Location = System::Drawing::Point(505, 42);
			this->buttonClearPolinomOne->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearPolinomOne->Name = L"buttonClearPolinomOne";
			this->buttonClearPolinomOne->Size = System::Drawing::Size(71, 27);
			this->buttonClearPolinomOne->TabIndex = 6;
			this->buttonClearPolinomOne->TabStop = false;
			this->buttonClearPolinomOne->Text = L"Clear";
			this->buttonClearPolinomOne->UseVisualStyleBackColor = false;
			this->buttonClearPolinomOne->Click += gcnew System::EventHandler(this, &MyForm::buttonClearPolinomOne_Click);
			// 
			// buttonClearPolinomTwo
			// 
			this->buttonClearPolinomTwo->BackColor = System::Drawing::Color::LightGray;
			this->buttonClearPolinomTwo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClearPolinomTwo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonClearPolinomTwo->Location = System::Drawing::Point(505, 105);
			this->buttonClearPolinomTwo->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearPolinomTwo->Name = L"buttonClearPolinomTwo";
			this->buttonClearPolinomTwo->Size = System::Drawing::Size(71, 26);
			this->buttonClearPolinomTwo->TabIndex = 7;
			this->buttonClearPolinomTwo->TabStop = false;
			this->buttonClearPolinomTwo->Text = L"Clear";
			this->buttonClearPolinomTwo->UseVisualStyleBackColor = false;
			this->buttonClearPolinomTwo->Click += gcnew System::EventHandler(this, &MyForm::buttonClearPolinomTwo_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->buttonClearPolinomTwo);
			this->panel1->Controls->Add(this->buttonClearPolinomOne);
			this->panel1->Controls->Add(this->textBoxPolinomOne);
			this->panel1->Controls->Add(this->textBoxPolinomResult);
			this->panel1->Controls->Add(this->labelPolinomResult);
			this->panel1->Controls->Add(this->textBoxPolinomTwo);
			this->panel1->Controls->Add(this->labelPolinomTwo);
			this->panel1->Controls->Add(this->labelPolinomOne);
			this->panel1->Location = System::Drawing::Point(31, 90);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(594, 237);
			this->panel1->TabIndex = 13;
			this->panel1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(665, 90);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Operations";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(400, 79);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonSwapPolinoms);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelCountVar);
			this->Controls->Add(this->buttonDiff);
			this->Controls->Add(this->numericUpDownCountVar);
			this->Controls->Add(this->labelMaxDegree);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->numericUpDownMaxDegree);
			this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Polinom";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxDegree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCountVar))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void checkNumericMaxDegreeAndCountVar();
private: System::Void numericUpDownMaxDegree_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownCountVar_ValueChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonClearPolinomOne_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClearPolinomTwo_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClearAllPolinoms_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDiff_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMult_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonSwapPolinoms_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void clearPolOne();
private: System::Void clearPolTwo();
private: System::Void clearPolRes();
private: System::Void clearPolAll();

private: System::Void updPolOne();
private: System::Void updPolTwo();

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
