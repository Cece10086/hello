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
		cout << "请输入第" << i + 1 << "个老师的姓名：" << endl;
		cin >> teacher[i].name;

		for (int j = 0; j < 5; j++) {
			cout << "请输入" << teacher[i].name << "老师的第" << j + 1 << "个学生的姓名和成绩：" << endl;
			cin >> teacher[i].student[j].name;
			cin >> teacher[i].student[j].score;
		}

	}
}

void printInfo(struct Teacher teacher[], int len) {
	for (int i = 0; i < 3; i++) {
		cout << "老师姓名：" << teacher[i].name << endl;
		cout << "所带学生情况：" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "姓名：" << teacher[i].student[j].name << "\t分数：" << teacher[i].student[j].score << endl;
		}
	}
}