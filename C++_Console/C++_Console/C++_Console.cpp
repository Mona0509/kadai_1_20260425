// C++_Console.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	// 答えを固定(動作確認用)
	//int answer = 5;

	// コンピュータの時間(を表す値)を変数に代入する
	int t = (int)time(nullptr);
	// tを10で割って、その余りを変数answerに代入する
	int answer = t % 10;
	int rank = 0;
	while (rank != 2)
	{
		// キーボードで押した数を変数inputに代入する
		int input;
		scanf_s("%d", &input);
		// answerとinputの差を計算
		int num = answer - input;
		// answerとinputの数値が一致している時だけ「一致!」と表示する
		if (answer == input)
		{
			printf("\n一致!\n");
			rank = 2;
		}
		// 入力と答えの大小の差を確認
		else if (answer > input)
		{
			printf("\n小さいかも\n");
		}
		else if (answer < input)
		{
			printf("\n大きいかも\n");
		}
		// 入力と答えの差が-3以上3以下いないならば
		if (num > -3 && num < 3 && num != 0)
		{
			printf("惜しい!\n");
			rank = 1;
		}
		switch (rank)
		{
		case 2:
			printf("ランク:S\n");
			printf("\n「ゲームクリア」\n");
			break;
		case 1:
			printf("ランク:A\n");
			break;
		case 0:
			printf("ランク:B\n");
			break;
		}
		if (rank != 2) 
		{
			printf("\n「リトライ」\n");
		}
	}
}