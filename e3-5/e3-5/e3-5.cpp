// e3-5.cpp : Defines the entry point for the console application.
//


/*
演習3-5
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
読み込んだ値が1未満であれば改行文字を出力しないように作成せよ。
*/

#include "stdafx.h"
#include<iostream>

using namespace std;


int main()
{
	int n;//入力値を保持する変数
	//表示する'*'の数を入力してもらう。
	cout << "何個'*'を表示しますか？";
	cin >> n;
	
	//繰り返し回数下限値設定
	int i = 0;

	//'*'を繰り返し表示
	while (i < n) {
		cout << '*';
		i++;
	}
	//1以上であれば改行処理、1未満であればなにもしない。
	if(n>=1)
	cout << "\n";
	
	
	//return 0;
}

