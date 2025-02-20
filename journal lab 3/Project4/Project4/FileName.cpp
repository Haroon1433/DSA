#include<iostream>
#include<iomanip>
using namespace std;
//int power(int x, int n) {
//	if (n == 0)
//		return 1;
//	else
//		return power(x, n - 1) * x;
//}
//int main() {
//	cout << setw(5) << "n" << setw(15) << "2^n" << endl;
//	cout << "--------------------" << endl;
//	int const base = 2;
//	for (int n = 0; n <= 20; n++) {
//		cout << n << ","<< power(base, n) << endl;
//	}
//}
//int ackermann(int x,int y) {
//	if (x == 0)
//		return y + 1;
//	else if (x > 0 && y == 0)
//		return ackermann(x - 1, 1);
//	else if (x > 0 && y > 0)
//		return ackermann(x - 1, ackermann(x, y - 1)
//
//}
//int main() {
//	cout << ackermann(3, 4) << endl;
//}
//void print(int n) {
//	if(n==0)
//	cout << "0" << endl; 
//	else {
//		cout << n << endl;
//		print(n - 1);
//	}
//
//}
//int main() {
//	int n = 20;
//	print(n);
//}
//int cbc(int n, int k) {
//	if (n == k)
//		return 1;
//	else if (k == 0)
//		return 1;
//	else if (n > 1 && k > 0)
//		return cbc(n - 1, k - 1) + cbc(n - 1, k);
//}
//int main() {
//	cout << cbc(5,4) << endl;
//}
