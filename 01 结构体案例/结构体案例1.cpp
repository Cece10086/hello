#include<iostream>
using namespace std;
#include<string>

void allocate(struct Teacher teacher[] , int len);
void printInfo(struct Teacher teacher[], int len);

struct Student {
	string name;
	int score;
};

struct Teacher {
	string name;
	struct Student student[5];
};

int main() {

	struct Teacher teacher[3];
	int len = sizeof(teacher) / sizeof(teacher[0]);

	allocate(teacher , len);
	printInfo(teacher, len);

	system("pause");
	return 0;
}

void allocate(struct Teacher teacher[] ,int len) {

	for (int i = 0; i < len; i++) {
		cout << "�������" << i + 1 << "����ʦ��������" << endl;
		cin >> teacher[i].name;

		for (int j = 0; j < 5; j++) {
			cout << "������" << teacher[i].name << "��ʦ�ĵ�" << j + 1 << "��ѧ���������ͳɼ���" << endl;
			cin >> teacher[i].student[j].name;
			cin >> teacher[i].student[j].score;
		}

	}
}

void printInfo(struct Teacher teacher[], int len) {
	for (int i = 0; i < 3; i++) {
		cout << "��ʦ������" << teacher[i].name << endl;
		cout << "����ѧ�������" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "������" << teacher[i].student[j].name << "\t������" << teacher[i].student[j].score << endl;
		}
	}
}