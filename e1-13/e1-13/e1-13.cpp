// e1-13.cpp : Defines the entry point for the console application.
//

/*
演習1-13
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
1桁の正の整数値、1桁の負の整数値、2桁の正の整数値をランダム表示させよ。
*/

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	//乱数生成のためのシード設定。
	srand(time(NULL));
	//乱数による初期値設定
	int	lucky = rand();
	//1桁の正の整数値の表示
	cout << "1桁の正の整数値" << lucky % 10 << "\n";
	//1桁の負の整数値の表示
	cout << "1桁の負の整数値" << -(lucky % 10) << "\n";
	//2桁の正の整数値の表示
	cout << "2桁の正の整数値" << (lucky % 10) * 10 << "\n";

    //return 0;
}

