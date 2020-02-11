#include<iostream>
#include<string>
#include <stdlib.h>

const int  N = 10; // <-- ������ ������� �������� �����
const int N1 = 6;
const int N2 = 4;

using namespace std;

//1. ������� ��������� � ������ Student, ���������� ���������
//���� : name, group, ses(������������ - ������ �� 5 ���������).������ �
//���������� ������ � ������ stud1, ��������� �� 10 �������� ���� student.
//������ ����������� �� ��������.������� �� ����� ������� � ������ �����
//��� ���� ���������, ������� ������ 4 � 5, ���� ����� ���, �� �������
//��������������� ���������.

struct STUDENT
{
	char name[30];
	string group;
	int ses[5];
	STUDENT() {
		cout << "������� ��� ��������: "; cin >> name;
		cout << "������� ������: "; cin >> group;
		cout << "������� ������: ";
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
			cout << "�������: " << stud1[i].name << "(������: " << stud1[i].group <<")"<< endl;
			f = 0;
		}
	}
	if (f) {
		cout << "��� ��������� ������� ����� " << endl;
	}
}
//2. ������� ��������� � ������ Train, ���������� ��������� ���� :
//nazn(�������� ������ ����������), num(����� ������), time(�����
//�����������).������ � ���������� ������ � ������ rasp, ��������� �� 6
//�������� ���� Train.������ ����������� �� ������� �������.������� ��
//����� ���������� � ������, ����� �������� ������ � ����������, ���� ������
//������ ���, �� ������� ��������������� ���������.
struct Train
{
	string nazn;
	int num;
	string time;
	Train() {
		cout << "������� ����� ����������: "; cin >> nazn;
		cout << "������� ����� ������: "; cin >> num;
		cout << "������� ����� �����������: "; cin >> time;
		system("cls");
	}
};
void out_rasp(Train *rasp) {
	int n = 0;
	cout << "������� ����� ������ ������� ������ �������: "; cin >> n;
	for (int i = 0; i < N; i++)
	{
		if (n == rasp[i].num) {
			cout << "����� ����������: " << rasp[i].nazn << endl;
			cout << "����� ������: " << rasp[i].num << endl;
			cout << "����� �����������: " << rasp[i].time << endl;
			cout << endl;
		}
	}
}
//3. ������� ��������� � ������ worker, ���������� ��������� ����
//name, pos(���������), year(��� ����������� �� ������).������ � ����������
//������ � ������ tabl, ��������� �� 10 �������� ���� worker.������
//����������� �� ���� ����������� �� ������.������� �� ����� �������
//����������, ��� ���� ������ ��������� ��������, ��������� � ����������
//���� ����� ���, �� ������� ��������������� ���������.
struct WORKER
{
	string name;
	string pos;
	int year;
	
	WORKER() {
		cout << "������� ���: "; cin >> name;
		cout << "������� ���������: "; cin >> pos;
		cout << "������� ��� �����������: "; cin >> year;
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
	cout << "������� ��� ����� ��� ������ ����������� � ���� ������: "; cin >> n;
	for (int i = 0; i < N2; i++)
	{
		int stazh = 2020 - tab1[i].year;
		if (stazh >= n) {
			cout << "���: " << tab1[i].name << endl;
			cout << "���������: " << tab1[i].pos << endl;
			cout << "��� �����������: " << tab1[i].year << endl;
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	//������ �������
	/*STUDENT stud1[N];
	qsort(stud1, N, sizeof(STUDENT), cmp);
	out_stud(stud1);*/

	//������ �������
	/*Train rasp[N1];
	out_rasp(rasp);*/
	//������ �������

	/*WORKER tab1[N2];
	sort_worker(tab1);
	out_worker(tab1);*/

	system("pause");
	return 0;
}