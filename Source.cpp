#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include<cmath>
#include <numeric>
#include <functional>
#include <cstdlib> 


using namespace std;



void show(vector<int> &mas) {
	cout << endl;
	vector<int>::iterator iter;// creating int iterator
	iter = mas.begin();
	while (iter!=mas.end()) {
		cout << *iter << " | ";
		iter++;
	}
	cout << endl;
}


float AverageValue(vector<int> &mas) {
	int sum = accumulate(mas.begin(), mas.end(), 0);
	float aver = (sum / mas.size());
	return aver;
}

//frequently call (make inline)
 inline int random() { 
	 {/*int m1 = 0, m2 = 15;
	int num;
	num = rand() % (m2 - m1 + 1) + m1;
	return num;*/}
	return (rand() % 14);
}


 void Mysqr(vector<int> &mas, vector<int> &copymas) {
 
	

 }
int main() {
	srand(time(0)); //place important
	size_t kol = 10;
	vector<int> mas(kol);
	generate(mas.begin(), mas.end(), random);
	cout << endl << "   MAS    " << endl;

	show(mas);
	cout<< endl << "Creating copy of mas    COPYMAS:  "<<endl;
	
	vector<int> copymas(mas);
	show(copymas);
	cout << endl << "shake it: " << endl;

	random_shuffle(copymas.begin(), copymas.end());
	show(copymas);

	cout << endl << "Count average" << endl;
	cout << AverageValue(copymas);
	cout << endl << "Multiply vectors  (MAS)*(COPYMAS) : " << endl;
	vector<int> result(kol);
	transform(mas.begin(), mas.end(), copymas.begin(), result.begin(),
		multiplies <int>());
	show(result);
	cout << endl << "Sqr result : " << endl;
	transform(result.begin(), result.end(), result.begin(),result.begin(),
		multiplies <int>());
	show(result);

	system("pause");
	return 0;
}


