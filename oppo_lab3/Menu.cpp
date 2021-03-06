#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DBG_NEW new( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define newDBG_NEW

#include "pch.h"
#include "Structure.h"
#include "Parse.h"

using namespace std;

void MenuCout() {
	system("cls");

	cout << "\tM E N U\n" << endl;
	cout << "1. Загрузить с файла" << endl;
	cout << "2. Вывести на экран" << endl;
	cout << "3. Отсортировать" << endl;
	cout << "4. Удалить тип" << endl;
	cout << "0. Выход" << endl;
}

void MenuDelete() {
	system("cls");

	cout << "Какой тип удалить?" << endl;
	cout << "1. Самолет" << endl;
	cout << "2. Поезд" << endl;
	cout << "3. Машина" << endl;
}

void Delete(string& WichType) {
	MenuDelete();

	int k;
	cin >> k;

	switch (k) {
	case 1:
		WichType = "air";
		break;
	case 2:
		WichType = "train";
		break;
	case 3:
		WichType = "car";
		break;
	default:
		cout << "Ошибка" << endl;
		break;
	}

	system("pause");
}

void MenuItems(int& MenuPoint, bool& MenuExit, Container& container) {
	string WichType;
	switch (MenuPoint) {
	case 1:
		system("cls");
		Parsing(container);
		cout << "Done!" << endl;
		system("pause");
		break;
	case 2:
		system("cls");
		container.View();
		system("pause");
		break;
	case 3:
		system("cls");
		container.Sort();
		cout << "Done!" << endl;
		system("pause");
		break;
	case 4:
		system("cls");
		Delete(WichType);
		container.DeleteType(WichType);
		cout << "Done!" << endl;
		system("pause");
		break;
	default:
		system("cls");
		cout << "Некорректный пункт" << endl;
		system("pause");
		break;
	case 0:
		MenuExit = true;
	}
}

void run() {
	setlocale(LC_ALL, "rus");
	int MenuPoint = NULL;
	bool MenuExit = false;
	Container container;

	do {
		MenuCout();
		cin >> MenuPoint;
		MenuItems(MenuPoint, MenuExit, container);
	} while (!MenuExit);
}

int main() {
	run();
	_CrtDumpMemoryLeaks();
	return 0;
}