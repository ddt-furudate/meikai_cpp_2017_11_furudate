// e1-9.cpp : Defines the entry point for the console application.
//


/*
演習1-9
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
入力した値をそのまま表示せよ。
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	//演習1-9
	int	x;//入力変数
	//入力を促す文章の表示
	cout << "整数値の入力：";
	//xへ値を代入
	cin	 >> x;
	//入力された値を表示
	cout << x << "と入力されました。\n";
//    return 0;
}

