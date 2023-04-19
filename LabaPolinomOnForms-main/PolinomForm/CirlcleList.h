#include "Monom.h"

class CircleList
{
private:
	Monom* head;

public:
	CircleList() : head{ new Monom() } {}
	CircleList(Monom _monom) : CircleList() { AddMonom(_monom); }
	CircleList(const CircleList& other)
	{
		if (other.head == (other.head->getNext()))
		{
			head = new Monom;
		}
		else
		{
			head = new Monom(other.head->getCoef(), other.head->getFold());

			Monom* currentOther = other.head->getNext();
			Monom* currentNew = head;

			while (currentOther != other.head)
			{
				Monom* newMonom = new Monom(currentOther->getCoef(), currentOther->getFold());
				currentNew->setNext(newMonom);
				currentNew = newMonom;
				currentOther = currentOther->getNext();
			}

			currentNew->setNext(head);
		}
	}

	~CircleList()
	{
		Monom* current = head->getNext();

		while (current != head)
		{
			head->setNext(current->getNext());
			current->setNext(nullptr);
			delete current;
			current = head->getNext();
		}

		delete head;
	}

	void AddMonom(Monom other)
	{
		Monom* current = head->getNext();
		Monom* previous = head;

		while ((current->getFold()) > (other.getFold()))
		{
			previous = current;
			current = current->getNext();
		}

		if ((current->getFold()) < (other.getFold()))
		{
			Monom* newMonom = new Monom(other.getCoef(), other.getFold());

			newMonom->setNext(previous->getNext());
			previous->setNext(newMonom);
		}
		else
		{
			if (current->getCoef() + other.getCoef() != 0)
			{
				current->setCoef(current->getCoef() + other.getCoef());
			}
			else
			{
				Monom* temp = current;
				previous->setNext(current->getNext());
				delete temp;
			}
		}
	}

	std::string CircleListToString(int maxpw, int count)
	{
		std::string str = "";

		if (head == head->getNext())
		{
			str = "0";
		}

		Monom* current = head->getNext();


		if (current != head)
		{
			str += current->MonomToString(maxpw, count);
			current = current->getNext();
		}

		while (current != head)
		{
			if (current->getCoef() > 0) str += " + ";
			str += current->MonomToString(maxpw, count);

			current = current->getNext();
		}




		/*while (current != head)
		{
			std::string s;
			if (current->getCoef() > 0)
			{
				s = current->ToString(maxpw, count);
			}
			else if (current->getCoef() < 0)
			{
				s = "(" + current->ToString(maxpw, count) + ")";
			}

			if (s[0] != '0')
			{
				str = str + " " + "+" + " " + s;
			}
			else
			{
				str = str;
			}

			current = current->getNext();
		}*/

		return str;
	}

	CircleList& operator=(const CircleList& other)
	{
		Monom* current = head;

		while (current != nullptr && (current->getNext()) != head)
		{
			Monom* temp = current;
			current = current->getNext();
			delete temp;
		}

		if (current != nullptr)
		{
			delete current;
		}

		head = nullptr;

		if (other.head != nullptr)
		{
			head = new Monom(other.head->getCoef(), other.head->getFold());

			Monom* currentOther = other.head->getNext();
			Monom* currentNew = head;

			while (currentOther != other.head)
			{
				Monom* newMonom = new Monom(currentOther->getCoef(), currentOther->getFold());
				currentNew->setNext(newMonom);
				currentNew = newMonom;
				currentOther = currentOther->getNext();
			}

			currentNew->setNext(head);
		}

		return *this;
	}
	CircleList operator+(const CircleList& other)
	{
		CircleList result(*this);

		Monom* current = other.head->getNext();

		while (current != other.head)
		{
			Monom temp(current->getCoef(), current->getFold());
			result.AddMonom(temp);
			current = current->getNext();
		}

		return result;
	}
	CircleList operator-(const CircleList& other)
	{
		CircleList result(*this);

		Monom* current = other.head->getNext();

		while (current != other.head)
		{
			Monom temp((-(current->getCoef())), current->getFold());
			result.AddMonom(temp);
			current = current->getNext();
		}

		return result;
	}
	CircleList operator*(int k)
	{
		CircleList result;
		if (k != 0)
		{
			Monom* current = head->getNext();

			while (current != head)
			{
				Monom temp(((current->getCoef()) * k), current->getFold());
				result.AddMonom(temp);
				current = current->getNext();
			}
		}

		return result;
	}
	CircleList MultList(const CircleList& other, int maxPr, int count)
	{
		CircleList result;

		Monom* currentOne = head->getNext();

		while (currentOne != head)
		{
			Monom* currentTwo = other.head->getNext();

			while (currentTwo != other.head)
			{
				Monom newMonom((*currentOne).Mult(*currentTwo, maxPr, count));
				result.AddMonom(newMonom);
				currentTwo = currentTwo->getNext();
			}
			currentOne = currentOne->getNext();
		}

		return result;
	}
};