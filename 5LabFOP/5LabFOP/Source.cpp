#include<iostream>
#include<string>
#include <stdlib.h>

const int  N = 10; // <-- Менять размеры структур здесь
const int N1 = 6;
const int N2 = 4;

using namespace std;

//1. Описать структуру с именем Student, содержащую следующие
//поля : name, group, ses(успеваемость - массив из 5 элементов).Ввести с
//клавиатуры данные в массив stud1, состоящий из 10 структур типа student.
//Записи упорядочить по алфавиту.Вывести на экран фамилии и номера групп
//для всех студентов, имеющих оценки 4 и 5, если таких нет, то вывести
//соответствующее сообщение.

struct STUDENT
{
	char name[30];
	string group;
	int ses[5];
	STUDENT() {
		cout << "Введите имя студента: "; cin >> name;
		cout << "Введите группу: "; cin >> group;
		cout << "Введите оценки: ";
		for (int i = 0; i < 5; i++)
			cin >> ses[i];

	}
};
int cmp(const void* p1, const void* p2)
{
	return strcmp(((STUDENT*)p1)->name, ((STUDENT*)p2)->name);
}
void out_stud(STUDENT *stud1) {

	int f = 1;
	for (int i = 0; i < N; i++)
	{
		int j = 0;
		if (stud1[i].ses[0] >= 4 && stud1[i].ses[1] >= 4 && stud1[i].ses[2] >= 4 && stud1[i].ses[3] >= 4 && stud1[i].ses[4]) {
			cout << "Студент: " << stud1[i].name << "(Группа: " << stud1[i].group <<")"<< endl;
			f = 0;
		}
	}
	if (f) {
		cout << "Нет студентов которые сдали " << endl;
	}
}
//2. Описать структуру с именем Train, содержащую следующие поля :
//nazn(название пункта назначения), num(номер поезда), time(время
//отправления).Ввести с клавиатуры данные в массив rasp, состоящий из 6
//структур типа Train.Записи упорядочить по номерам поездов.Вывести на
//экран информацию о поезде, номер которого введен с клавиатуры, если такого
//поезда нет, то вывести соответствующее сообщение.
struct Train
{
	string nazn;
	int num;
	string time;
	Train() {
		cout << "Введите пункт назначения: "; cin >> nazn;
		cout << "Введите номер поезда: "; cin >> num;
		cout << "Введите время отправления: "; cin >> time;
		system("cls");
	}
};
void out_rasp(Train *rasp) {
	int n = 0;
	cout << "Введите номер поезда который хотите вывести: "; cin >> n;
	for (int i = 0; i < N; i++)
	{
		if (n == rasp[i].num) {
			cout << "Пункт назначения: " << rasp[i].nazn << endl;
			cout << "Номер поезда: " << rasp[i].num << endl;
			cout << "Время отправления: " << rasp[i].time << endl;
			cout << endl;
		}
	}
}
//3. Описать структуру с именем worker, содержащую следующие поля
//name, pos(должность), year(год поступления на работу).Ввести с клавиатуры
//данные в массив tabl, состоящий из 10 структур типа worker.Записи
//упорядочить по дате поступления на работу.Вывести на экран фамилии
//работников, чей стаж работы превышает значение, введенное с клавиатуры
//если таких нет, то вывести соответствующее сообщение.
struct WORKER
{
	string name;
	string pos;
	int year;
	
	WORKER() {
		cout << "Введите ФИО: "; cin >> name;
		cout << "Введите должность: "; cin >> pos;
		cout << "Введите год поступления: "; cin >> year;
	}

};
void sort_worker(WORKER *tab1) {
	for (int i = 0; i < N2; i++)
	{
		for (int j = 0; j < N2; j++)
		{
			if (tab1[j].year > tab1[j + 1].year) {
				swap(tab1[j], tab1[j + 1]);
			}
		}
	}
}
void out_worker(WORKER *tab1) {
	int n = 0;
	cout << "Введите год стажа для вывода сотрудников с этим стажем: "; cin >> n;
	for (int i = 0; i < N2; i++)
	{
		int stazh = 2020 - tab1[i].year;
		if (stazh >= n) {
			cout << "Имя: " << tab1[i].name << endl;
			cout << "Должность: " << tab1[i].pos << endl;
			cout << "Год поступления: " << tab1[i].year << endl;
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	//ПЕРВОЕ ЗАДАНИЕ
	/*STUDENT stud1[N];
	qsort(stud1, N, sizeof(STUDENT), cmp);
	out_stud(stud1);*/

	//ВТОРОЕ ЗАДАНИЕ
	/*Train rasp[N1];
	out_rasp(rasp);*/
	//ТРЕТЬЕ ЗАДАНИЕ

	/*WORKER tab1[N2];
	sort_worker(tab1);
	out_worker(tab1);*/

	system("pause");
	return 0;
}