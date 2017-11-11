// e3-14.cpp : Defines the entry point for the console application.
//


/*
演習3-14
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
演習3-8を書き換えて、記号を5個表示するごとに改行するように作成せよ。
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;//入力値

	//文字の表示を指定する
	cout << "何個*を表示しますか。：";
	cin >> n;

	//指定個数の文字を表示
	//記号表示回数の判定を正しく行うため始めと終わりを1ずつずらす
	for (int i = 1; i < n+1; i++)
	{
		//記号の印字
		cout << '*';
		
		//記号表示回数の判定
		//5回記号を表示したら改行を入れる
		if (i%5 == 0)
			cout << '\n';
	}
	//処理終了後の改行
	cout << '\n';


	//return 0;
}

