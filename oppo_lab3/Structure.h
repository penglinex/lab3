#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

class Transport {
	virtual void Say() {
		cout << "Virtual" << endl;
	}
public:
	int Speed;
	int DistanceBetween;
	string AddressCompany, Brand, type;
};

class Air : public Transport {
public:
	int RangeOfFlight, LiftOfFlight;

	Air() {
		type = "air";
	}

	void Display() {
		cout << "�������" << "\n\t��������� ������: " << this->RangeOfFlight << "\n\t����������������: " << this->LiftOfFlight
			<< "\n\t��������: " << this->Speed << "\n\t���������� ����� �������� ����������� � ����������: " << this->DistanceBetween
			<< "\n\t����� ��������: " << this->AddressCompany << "\n\t�����: " << this->Brand << endl;
	}
};

class Train : public Transport {
public:
	int AmountOfTransporation;

	Train() {
		type = "train";
	}

	void Display() {
		cout << "�����" << "\n\t���������� �������: " << this->AmountOfTransporation << "\n\t��������: " << this->Speed
			<< "\n\t���������� ����� �������� ����������� � ����������: " << this->DistanceBetween
			<< "\n\t����� ��������: " << this->AddressCompany << "\n\t�����: " << this->Brand << endl;
	}
};

class Car : public Transport {
public:
	string BodyType;

	Car() {
		type = "car";
	}

	void Display() {
		cout << "������" << "\n\t�����: " << this->BodyType <<"\n\t��������: " << this->Speed
			<< "\n\t���������� ����� �������� ����������� � ����������: " << this->DistanceBetween
			<< "\n\t����� ��������: " << this->AddressCompany << "\n\t�����: " << this->Brand << endl;
	}
};

class Container {
public:
	vector<Transport*> Trans;

	void View() {
		int position = 0;
		for (Transport* data : this->Trans) {
			position++;
			if (dynamic_cast<Air*>(data)) {
				cout << position << ")";
				((Air*)data)->Display();
			}
			else if (dynamic_cast<Train*>(data)) {
				cout << position << ")";
				((Train*)data)->Display();
			}
			else if (dynamic_cast<Car*>(data)) {
				cout << position << ")";
				((Car*)data)->Display();
			}
		}
		cout << endl << "���������� ���������: " << position << endl;
	}

	void Sort() {
		int j;
		for (int i = 0; i < this->Trans.size(); i++) {
			j = i;
			for (int k = i; k < this->Trans.size(); k++) {
				int power1 = this->Trans[k]->Speed;
				int power2 = this->Trans[j]->Speed;
				if (power2 > power1)
					j = k;
			}
			swap(this->Trans[i], this->Trans[j]);
		}
	}

	void DeleteType(string type) {
		for (int i = 0; i < Trans.size(); i++) {
			if (Trans[i]->type == type) {
				Trans.erase(Trans.begin() + i);
				i--;
			}
		}
	}

	~Container() {
		for (Transport* var : this->Trans) {
			delete var;
		}
	}
};