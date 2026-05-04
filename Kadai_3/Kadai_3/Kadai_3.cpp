// Kadai_3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <iostream>
int main()
{
	// 開始値と終了値の箱を用意
	int start = 0;
	int finish = 0;
	// 開始値を入力
	printf("開始値を入力してください。\n");
	std::cin >> start;
	// 終了値を入力
	printf("終了値を入力してください。\n");
	std::cin >> finish;
	// 開始値が終了値よりも大きい場合エラー文表示
	if (start > finish) 
	{
		printf(":エラー発生\n");
		printf("開始値が終了値を上回っています。\n");
		return 0;
	}
	if (start >= 1 && start <= 1000 && finish >= 1 && finish <= 1000) 
	{
		// 開始値から終了値にかけて順に表示
		for (int i = 0; i < finish + 1; i++) 
		{
			// 3の倍数かつ5の倍数になったら「FizzBuzz」と表示
			if (start % 3 == 0 && start % 5 == 0) 
			{
				printf("FizzBuzz\n");
			}
			// 3の倍数になったら「Fizz」と表示
			else if (start % 3 == 0) 
			{
				printf("Fizz\n");
			}
			// 5の倍数になったら「Buzz」と表示
			else if (start % 5 == 0) 
			{
				printf("Buzz\n");
			}
			// それ以外はそのまま表示S
			else 
			{
				printf("%d\n", start);
			}
			start++;
		}
	}
	// 入力内容が範囲外の場合エラー文表示
	else 
	{
		printf(":エラー発生\n");
		printf("範囲外の入力を検知しました。\n");
		return 0;
	}
	return 0;
}