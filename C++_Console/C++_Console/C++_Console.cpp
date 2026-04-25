// C++_Console.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	// 答えを固定(動作確認用)
	//int answer = 5;

	// 次はこれ
	// コンピュータの時間(を表す値)を変数に代入する
	int t = (int)time(nullptr);
	// tを10で割って、その余りを変数answerに代入する
	int answer = t % 10;

		// キーボードで押した数を変数inputに代入する
		int input;
		scanf_s("%d", &input);
		// answerとinputの差を計算
		int num = answer - input;
		int rank = 0;
		// answerとinputの数値が一致している時だけ「一致!」と表示する
		if (answer == input)
		{
			printf("一致!\n");
			rank = 2;
		}
		else if (answer > input) 
		{
			printf("小さい!\n");
		}
		else if (answer < input) 
		{
			printf("大きい!\n");
		}
		if (num > -3 && num < 3 && num != 0)
		{
			printf("惜しい!\n");
			rank = 1;
		}
		switch (rank)
		{
		case 2:
			printf("ランクS\n");
			break;
		case 1:
			printf("ランクA\n");
			break;
		case 0:
			printf("ランクB\n");
			break;
		}
		return 0;
}