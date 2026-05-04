// Kadai_2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <iostream>
int main()
{
	int oneNum;			// 一回目の数字入力
	int twoNum;			// 二回目の数字入力
	char numCom;        // 演算子入力
	char check;         // 続行入力確認
	// 整数を2つ入力
	// 演算子の入力
	while (true)
	{
		printf("一つ目の数字を入力してください\n");
		std::cin >> oneNum;	// 一回目
		printf("二つ目の数字を入力してください\n");
		std::cin >> twoNum;	// 一回目
		printf("二つの数字を計算する演算子を入力してください\n");
		std::cin >> numCom; // 演算子
		// 演算内容を選択

		switch (numCom)		// 計算出力を表示
		{
			case '+':
				printf("計算結果%dになりました\n",oneNum + twoNum);
				break;
			case '-':
				printf("計算結果%dになりました\n",oneNum - twoNum);
				break;
			case '*':
				printf("計算結果%dになりました\n",oneNum * twoNum);
				break;
			case '/':
				printf("計算結果%dになりました\n",oneNum / twoNum);
				break;
			default:
				printf(":エラー発生\n");
				printf("未知の演算子が入力されました。\n");				// 道の演算子が入力された場合エラーメッセージ表示
				break;
		}
		// 「/（割り算）」の場合0除算をチェックし、エラーメッセージ表示
		if (numCom == '/') 
		{
			if (oneNum == 0 || twoNum == 0) 
			{
				printf(":エラー発生\n");
				printf("0除算が検出されました。\n");
			}
		}
		// 計算終了後続けて計算するか確認
		// 「y」で計算続行、それ以外の入力で終了

		printf("続けて計算しますか？\n");
		printf("続行する場合、Yを押してください。\n");
		std::cin >> check;
		if (check != 'y' && check != 'F') 
		{
			break;
		}
	}
	
	
	
}

