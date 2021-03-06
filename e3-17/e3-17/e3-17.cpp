// e3-17.cpp : Defines the entry point for the console application.
//



/*
演習3-17
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
List3-1を「月の読み込みの際に1～12以外の値が入力された場合は再入力させる」ようなプログラムに変更せよ。
do文中にdo文が入る二重ループとなる。
*/

#include "stdafx.h"
#include<string>
#include<iostream>

using namespace std;

int main()
{
	string retry;	//リトライ情報を保持する変数
	int month;		//入力された月の情報
	do{
		do {
			//月の入力を受け付ける
			cout << "季節を求めます。\n何月ですか？";
			cin >> month;
			//春かどうかの判断
			if (month >= 3 && month <= 5)
				cout << "それは春です。\n";
			//夏かどうかの判断
			else if (month >= 6 && month <= 8)
				cout << "それは夏です。\n";
			//秋かどうかの判断
			else if (month >= 9 && month <= 11)
				cout << "それは秋です。\n";
			//冬かどうかの判断
			else if (month == 12 || month == 1 || month == 2)
				cout << "それは冬です。\n";
		//入力された値が1～12に相当しない場合、もう一度入力させる
		} while (month <= 0 || month > 12);
	
		//月の確認をもう一度するか尋ねる
		cout << "もう一度？　はい→Y/いいえ→N：";
		cin >> retry;
	//Yはもう一度入力から繰り返し、Nなら終了
	} while (retry == "Y" || retry == "y");






    //return 0;
}

