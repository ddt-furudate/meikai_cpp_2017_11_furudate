// e3-13.cpp : Defines the entry point for the console application.
//



/*
演習3-13
作成日：2017/11/10
作成者：古舘尚大
【問題概要】
身長と体重の対応表を表示するプログラムの作成。
表示する身長の範囲(開始値、終了値、増分)は、整数値として読み込むこと。
*/


#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int start,		//身長表示範囲開始地点
		end,		//身長表示範囲終了地点
		volume;		//身長表示増分


	cout << "身長の範囲を入力してください。\n";

	//表示範囲開始地点の入力
	cout << "最低何センチから";
	cin >> start;
	//表示範囲終了地点の入力
	cout << "最高何センチまで";
	cin >> end;
	//増分の入力
	cout << "何センチごとに表示しますか？";
	cin >> volume;

	cout << "身長　体重\n";
	//startからendまでvolume分カウントアップして繰り返す
	for (start; start <= end; start+=volume)
	{
		//startの身長から表示をしていき、標準体重を求め、表示していく
		cout << start << "  " << (start - 100)*0.9 << "\n";
	}



    //return 0;
}

