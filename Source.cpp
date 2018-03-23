#include <iostream>
#include <vector>
#include <ctime>
#include<cmath>

using namespace std;


void Show(vector<int> &mas) {
	for (int i = 0; i < mas.size(); i++) {
		cout << mas[i] << endl;
	}
}
float AverageValue(vector<int> &mas) {
	int count=0;
	for (int i = 0; i < mas.size(); i++) {
		count = count + mas[i];
	}
	float aver = count/mas.size();
	return aver;
}
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

 void Multi(vector<int> &mas, vector<int> &copymas, vector<int> &result) {
	for (int i = 0; i < mas.size(); i++) {
		result.push_back(mas[i]*copymas[i]);
	}
}

 void Square(vector<int> &mas) {
	 for (int i = 0; i < mas.size(); i++) {
		 mas[i] =pow(mas[i], 2);
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

	cout << endl << "makeCopy" << endl;
	vector<int> copymas(mas);
	cout << endl << "copymas:" << endl;
	Show(copymas);
	cout << endl << "Shake copymas:" << endl;
	shakeup(copymas);
	Show(copymas);
	cout << endl << "average value" << endl;
	cout << AverageValue(copymas);
	cout << endl << "Multi" << endl;
	vector<int> result;
	Multi(mas, copymas, result);
	Show(result);
	cout << endl << "Squares" << endl;
	Square(result);
	Show(result);
	system("pause");
	return 0;
}