// WhileStudy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int giaiptbac1() {
	float a, b;
	cout << "Giai Phuong Trinh Bac 1 ax + b = 0"<< "\n";
	cout << "Nhap so a" << "\n";
	cin >>  a;
	cout << "Nhap so b" << "\n";
	cin >> b;
	cout << "Dap an la:" << "\n";
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh co vo so nghiem" << "\n";
		}
		else {
			cout << "Phuong trinh vo nghiem" << "\n";
		}
		else {



	}
	}
}
int main(){
	int i = 0;
	while (true) {
		system("cls");
		cout << "UNG DUNG GIAI PHUONG TRINH" << "\n";
		cout << "1.Giai Phuong Trinh Bac 1" << "\n";
		cout << "2.Giai Phuong Trinh Bac 2" << "\n";
		cout << "3.Tinh dien tich va chu vi hinh chu nhat" << "\n";
		cout << "4.Tinh dien tich va chu vi hinh tron" << "\n";
		cout << "0 de thoat chuong trinh" << "\n";
		
		int luachon;
		cout << "Hay nhap lua chon:";
		cin >> luachon;
		if (luachon == 0)
			break;
		if (luachon == 1) {
			cout << "Giai Phuong Trinh Bac 1" << giaiptbac1();
			return giaiptbac1;
		}
			
		
	}

	
		


	
         

	

	
}


