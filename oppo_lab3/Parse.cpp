#include "pch.h"
#include "Structure.h"
#include "Parse.h"

using namespace std;

bool CorrectDataAir(string buff) {
	if (buff[0] == ' ') {
		buff.erase(0, 1);
	}
	else {
		return false;
	}

	if (buff[0] == ' ') {
		return false;
	}

	int i = 0;
	while (buff[i] != ' ') {
		if (buff[i] >= '0' && buff[i] <= '9')
			i++;
		else return false;
	}
	i++;

	if (buff[i] != ' ') {
		while (buff[i] != ' ') {
			if (buff[i] >= '0' && buff[i] <= '9')
				i++;
			else return false;
		}
	}
	i++;

	if (buff[i] != ' ') {
		while (buff[i] != ' ') {
			if (buff[i] >= '0' && buff[i] <= '9')
				i++;
			else return false;
		}
	}
	i++;

	if (buff[i] != ' ') {
		while (buff[i] != ' ') {
			if (buff[i] >= '0' && buff[i] <= '9')
				i++;
			else return false;
		}
	}
	i++;

	int pos;
	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i + 1);
			if (pos > 0 && buff[pos + 1] == ' ') {
				i++;
				while (i < pos - 1) {
					if (buff[i] >= 'A' && buff[i] <= 'z' || buff[i] == ' ')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != ' ') {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	} else return false;
	i++;
	
	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i);
			if (pos > 0 && buff[pos + 1] == ' ') {
				while (i < pos) {
					if (buff[i] >= 'A' && buff[i] <= 'z')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != buff[buff.size() - 1]) {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	}
	else return false;
	return true;
}

bool CorrectDataTrain(string buff) {
	if (buff[0] == ' ') {
		buff.erase(0, 1);
	}
	else {
		return false;
	}

	if (buff[0] == ' ') {
		return false;
	}

	int i = 0;
	while (buff[i] != ' ') {
		if (buff[i] >= '0' && buff[i] <= '9')
			i++;
		else return false;
	}
	i++;

	if (buff[i] != ' ') {
		while (buff[i] != ' ') {
			if (buff[i] >= '0' && buff[i] <= '9')
				i++;
			else return false;
		}
	}
	i++;

	if (buff[i] != ' ') {
		while (buff[i] != ' ') {
			if (buff[i] >= '0' && buff[i] <= '9')
				i++;
			else return false;
		}
	}
	i++;

	int pos;
	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i + 1);
			if (pos > 0 && buff[pos + 1] == ' ') {
				i++;
				while (i < pos - 1) {
					if (buff[i] >= 'A' && buff[i] <= 'z' || buff[i] == ' ')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != ' ') {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	}
	else return false;
	i++;

	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i);
			if (pos > 0 && buff[pos + 1] == ' ') {
				while (i < pos) {
					if (buff[i] >= 'A' && buff[i] <= 'z')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != buff[buff.size() - 1]) {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	}
	else return false;
	return true;
}

bool CorrectDataCar(string buff) {
	if (buff[0] == ' ') {
		buff.erase(0, 1);
	}
	else {
		return false;
	}

	if (buff[0] == ' ') {
		return false;
	}

	int i = 0;
	int pos;
	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i + 1);
			if (pos > 0 && buff[pos + 1] == ' ') {
				i++;
				while (i < pos - 1) {
					if (buff[i] >= 'A' && buff[i] <= 'z' || buff[i] == ' ')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != ' ') {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	}
	else return false;
	i++;

	while (buff[i] != ' ') {
		if (buff[i] >= '0' && buff[i] <= '9')
			i++;
		else return false;
	}
	i++;

	if (buff[i] != ' ') {
		while (buff[i] != ' ') {
			if (buff[i] >= '0' && buff[i] <= '9')
				i++;
			else return false;
		}
	}
	i++;

	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i + 1);
			if (pos > 0 && buff[pos + 1] == ' ') {
				i++;
				while (i < pos - 1) {
					if (buff[i] >= 'A' && buff[i] <= 'z' || buff[i] == ' ')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != ' ') {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	}
	else return false;
	i++;

	if (buff[i] != ' ') {
		if (buff[i] == '\"') {
			pos = buff.find('\"', i);
			if (pos > 0 && buff[pos + 1] == ' ') {
				while (i < pos) {
					if (buff[i] >= 'A' && buff[i] <= 'z')
						i++;
					else return false;
				}
			}
			else return false;
		}
		else
			while (buff[i] != buff[buff.size() - 1]) {
				if (buff[i] >= 'A' && buff[i] <= 'z')
					i++;
				else return false;
			}
	}
	else return false;
	return true;
}

void ParseAir(string buf, Air& Airplot) {
	string buffer;
	int i;

	int space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	Airplot.RangeOfFlight = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();
	
	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	Airplot.LiftOfFlight = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	Airplot.Speed = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	Airplot.DistanceBetween = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	i = 0;
	if (buf[i] == '\"') {
		space = buf.find('\"', i + 1);
		space++;
	} else {
		space = buf.find(' ');
	}

	for (i = 0; i < space; i++)
		buffer += buf[i];
	Airplot.AddressCompany = buffer;
	buf.erase(0, i + 1);

	Airplot.Brand = buf;
}

void ParseTrain(string buf, Train& TrainBuff) {
	string buffer;
	int i;

	int space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	TrainBuff.AmountOfTransporation = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	TrainBuff.Speed = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	TrainBuff.DistanceBetween = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	i = 0;
	if (buf[i] == '\"') {
		space = buf.find('\"', i + 1);
		space++;
	}
	else {
		space = buf.find(' ');
	}

	for (i = 0; i < space; i++)
		buffer += buf[i];
	TrainBuff.AddressCompany = buffer;
	buf.erase(0, i + 1);

	TrainBuff.Brand = buf;
}

void ParseCar(string buf, Car& CarBuff) {
	string buffer;
	int i;

	int space = buf.find(' ');
	i = 0;
	if (buf[i] == '\"') {
		space = buf.find('\"', i + 1);
		space++;
	}
	else {
		space = buf.find(' ');
	}

	for (i = 0; i < space; i++)
		buffer += buf[i];
	CarBuff.BodyType = buffer;
	buf.erase(0, i + 1);
	buffer.clear();

	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	CarBuff.Speed = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	space = buf.find(' ');
	for (i = 0; i < space; i++) {
		buffer += buf[i];
	}
	CarBuff.DistanceBetween = stoi(buffer);
	buf.erase(0, i + 1);
	buffer.clear();

	i = 0;
	if (buf[i] == '\"') {
		space = buf.find('\"', i + 1);
		space++;
	}
	else {
		space = buf.find(' ');
	}

	for (i = 0; i < space; i++)
		buffer += buf[i];
	CarBuff.AddressCompany = buffer;
	buf.erase(0, i + 1);

	CarBuff.Brand = buf;
}

void Parsing(Container& container) {
	int RangeOfFlight, LiftOfFlight, AmountOfTransporation,
		Speed, DistanceBetween, LineNumber = 0;
	bool error;
	string Buff, AddressCompany, Brand;
	ifstream file("Transports.txt");
	
	if (!file) {
		cout << "Файла не найден!";
	}
	else {
		while (!file.eof()) {
 			LineNumber++;
			error = false;
			file >> Buff;
			transform(Buff.begin(), Buff.end(), Buff.begin(), tolower);
			if (Buff == "air:") {
				getline(file, Buff);
				if (CorrectDataAir(Buff)) {
					Air * Airplot = new Air();
					Buff.erase(0, 1);
					ParseAir(Buff, *Airplot);
					container.Trans.push_back(Airplot);
				}
				else {
					error = true;
				}
			}
			
			if (Buff == "train:") {
				getline(file, Buff);
				if (CorrectDataTrain(Buff)) {
					Train* TrainBuff = new Train();
					Buff.erase(0, 1);
					ParseTrain(Buff, *TrainBuff);
					container.Trans.push_back(TrainBuff);
				}
				else {
					error = true;
				}
			}
			
			if (Buff == "car:") {
				getline(file, Buff);
				if (CorrectDataCar(Buff)) {
					Car* CarBuff = new Car();
					Buff.erase(0, 1);
					ParseCar(Buff, *CarBuff);
					container.Trans.push_back(CarBuff);
				}
				else {
					error = true;
				}
			}

			if (error) {
				cout << "Ошибка в строке " << LineNumber << endl;
			}
		}
		file.close();
	}
}