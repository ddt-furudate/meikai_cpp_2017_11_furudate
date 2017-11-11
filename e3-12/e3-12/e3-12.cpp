// e3-12.cpp : Defines the entry point for the console application.
//

/*
演習3-11
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
前問のプログラムを書き換えて、式として表示するようにせよ。
*/

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int input,	//入力値
		output = 0;	//出力値

	//nを指定してもらう。
	cout << "1からnまでの和を求めるので、nを指定してください。　";
	cin >> input;

	//1からカウントアップしていく度に、総和の計算も行う。
	for (int i = 1; i <= input; ++i)
	{
	//最後の計算かどうかの判定		
		if (i != input)
			cout << i << "+";
	//最後の計算の場合、演算子の表示をやめる
		else
			cout << i ;
	//総和の計算
		output += i;
	}
	//総和の表示。
	cout << "=" << output << "\n";

	//return 0;
}
