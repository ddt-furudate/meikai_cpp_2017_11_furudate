// e2-1.cpp : Defines the entry point for the console application.
//

/*
演習2-1
作成日：2017/11/15
作成者：古舘尚大
【問題概要】
入力値の絶対値を求めよ。
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x;//入力値
	//入力案内
	cout << "数値を入力してください。";
	//xに値を設定
	cin >> x;
	//負数かどうかの判定
	if (x > 0)
	{
		//正の値を表示
		cout << x << "\n";
	}
	else
	{
		//負の値を表示
		cout << -x << "\n";
	}

    //return 0;
}

