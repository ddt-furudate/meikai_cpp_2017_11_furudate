// e3-8.cpp : Defines the entry point for the console application.
//


/*
演習3-8
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
入力された整数が1未満であれば改行文字を出力しないようにプログラムせよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	//文字の表示を指定する
	cout << "何個*を表示しますか。：";
	cin >> n;

	//指定個数の文字を表示
	for (int i = 0; i < n; i++) 
		cout << '*';
	//1以上の改行する。1未満は改行しない
	if(n>=1)
	cout << '\n';
	

    //return 0;
}

