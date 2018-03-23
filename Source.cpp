#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void shakeup(vector<int> &mas) {
	int randomIndex;
	int kol=rand() % (15 - 5 + 1) + 5;
	//cout << "kol" << kol << endl;
	int temp;

	for (int i = 0; i < kol - 1; i++) {
		randomIndex = rand() % (mas.size() - 2);
		temp = mas[randomIndex];
		mas[randomIndex]=mas[randomIndex+1];
		mas[randomIndex + 1] = temp;
	}

}

void menu(vector<int> &mas) {
	int choise;
	while (1) {
		cout << endl<<"Action\n"
			<< "(1)Show\n"
			<< "(2)shakeup\n" << endl;

		cin >> choise;
		switch (choise) {
		case 1: {
			for (int i = 0; i < mas.size(); i++) {
				cout << mas[i] << endl;
			}
			break;
		}
		case 2: {
			shakeup(mas);
			break;
		}
		case 7: {
	
			exit(0);
		}
		default: {
			cout << "incorrect expression\n"
				<< "try again\n";
		}

		}
	}
}

int main() {
	int size=5;
	int m1 = 0, m2 = 15;
	/*cout << "enter vector's size" << endl;
	cin >> size;*/
	srand(time(0));

	vector<int> mas;
																								//а-лев b-пра
																								//rand() % (b - a + 1) + a;
	for (int i = 0; i < size; i++) {
		int num = rand() % (m2 - m1 + 1) + m1;
		mas.push_back(num);
	}
	menu(mas);


	system("pause");
	return 0;
}