// e1-12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;



int main()
{
	double low;//底辺
	double high;//高さ
	//入力の案内
	cout << "三角形の面積を求めます。\n";
	//底辺入力の案内
	cout << "底辺：";
	//lowの値設定
	cin  >> low;
	//入力の案内
	cout << "高さ：";
	//highの値設定
	cin  >> high;
	//三角形の面積表示
	cout << "面積は" << (low + high) / 2 << "です。\n";

//    return 0;
}

