#include <iostream>
#include <vector>
#include <ctime>

using namespace std;


void menu() {


}

int main() {
	int size=5;
	/*cout << "enter vector's size" << endl;
	cin >> size;*/
	srand(time(NULL));

	vector<int> mas;
	for (int i = 0; i < size; i++) {
		int val = rand();
		v.push_back(val % 20 - 10);
	}



	system("pause");
	return 0;
}