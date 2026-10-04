#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T square(T value) {
	return value * value;
}

template <typename T>
vector<T> square(vector<T> vec) {
	for(int &element : vec) {
		element = element * element; 
	}
	return vec;
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: ";
	int num;
	cin >> num;
	cout << "Квадрат числа: " << square(num) << endl;
	cout << "Введите элементы вектора (через пробел, для завершения введите -1): ";
	vector<int> vec;
	int val;
	while (cin >> val && val != -1) {
		vec.push_back(val);
	}
	vector<int> squared_vec = square(vec);
	cout << "Квадраты элементов вектора: ";
	for (int v : squared_vec) {
		cout << v << " ";
	}
	cout << endl;
	return 0;
}
