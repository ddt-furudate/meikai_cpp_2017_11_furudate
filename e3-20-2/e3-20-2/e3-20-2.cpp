// e3-20-2.cpp : Defines the entry point for the console application.
//



/*
演習3-20-2
作成日：2017/11/11
作成者：古舘尚大
【問題概要】
左下が直角の直角三角形を表示するプログラムを直角が左上、右上、右下の直角三角形表示せよ。
右上直角三角形作成
*/

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int	n;//サイズ指定入力変数

	//サイズ指定の文言表示
	cout << "右上直角三角形を表示します。\n";
	//サイズ指定の文言表示
	cout << "段数は\n";
	//サイズ指定、値読み込み
	cin >> n;


	//右上直角作成処理
	//縦方向にサイズ分繰り返す
	for (int i = 1; i <= n; i++)
	{
		//横方向にサイズ分繰り返す
		for (int front_space = 1; front_space <= i; front_space++)
			//空白を表示する
			cout << " ";

		//横方向にサイズ分繰り返す
		for (int j = n; j >= i; j--)
			//記号を表示する
			cout << "*";
		//横方向の処理が終わったら改行
		cout << "\n";

	}

	

	
	//    return 0;
}

