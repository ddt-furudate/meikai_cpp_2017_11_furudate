// e3-10.cpp : Defines the entry point for the console application.
//

/*
演習3-10
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
0から正の整数値までカウントアップする処理を作成せよ。
*/

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int input;//入力値
	//値を入力してもらう
	cout << "正の整数値を入力してください。";
	cin >> input;

	//カウントアップ処理
	for (int i = 0; i <= input; ++i)
	{
		//表示処理
		cout << i << "\n";
	}


	//return 0;
}

