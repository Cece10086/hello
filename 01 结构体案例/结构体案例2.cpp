#include<iostream>
#include<string>
using namespace std;


struct Honor {
	string name;
	int age;
	char sex;
};
int main() {

	struct Honor honor[5] = {
		{"����",23,'��'},
		{"����",22,'��'},
		{"�ŷ�",20,'��'},
		{"����",21,'��'},
		{"����",19,'Ů'}

	};


	for (int i = 0; i < 5 - 1; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (honor[j].age > honor[j+1].age) {

				struct Honor temp = honor[j];
				honor[j] = honor[j + 1];
				honor[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << honor[i].name << "\t" << honor[i].age << "\t" << honor[i].sex << endl;
	}

	system("pause");
	return 0;
}