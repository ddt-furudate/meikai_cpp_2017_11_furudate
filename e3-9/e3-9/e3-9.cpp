// e3-9.cpp : Defines the entry point for the console application.
//



/*
演習3-9
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
正の整数値を0までカウントダウンする処理をfor文で実現せよ
*/

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;//入力値
	//値を入力してもらう
	cout << "正の整数値を入力してください。";
	cin >> n;
	//カウントダウン処理
	for (int i = 0; i <= n; --n)
	{
		cout << n << "\n";
	}
	
	
	
	
	
	
	
	
	return 0;
}

