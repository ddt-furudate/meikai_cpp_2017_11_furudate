// e1-6.cpp : Defines the entry point for the console application.
//



/*
演習1-6
作成日：2017/11/14
作成者：古舘尚大
【問題概要】
List1-7を小数を扱えるように変更せよ。
*/


#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	//int型ではなくdouble型で宣言することで小数が扱える
	double x;//入力変数x
	double y;//入力変数y
	x = 1.5;//xの初期値設定
	y = 6.3;//yの初期値設定
	//xの値表示
	cout << "xの値は" << x << "です。\n";
	//yの値表示
	cout << "yの値は" << y << "です。\n";
	//合計値の表示
	cout << "合計は" << x + y << "です。\n";
	//平均値の表示
	cout << "平均値は" << (x + y) / 2 << "です。\n";

	
	//    return 0;
}


