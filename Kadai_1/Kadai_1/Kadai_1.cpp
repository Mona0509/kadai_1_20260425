// Kadai_1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <cstdlib>
int main()
{
	// 答えを収納する箱を生成
	int answer[5];
	// 平均と合計のチェック
	float total = 0.0f;
	// ランダムな0から100の数字を5つ生成する
	for (int i = 0; i < 5; i++)
	{
		int random = rand() % 101;
		// 配列にランダムに生成した数字を収納する
		answer[i] = random;
		total += (float)answer[i];
		//printf("%d\n", answer[i]);
	}
	// 合計と平均を割り出す
	float average = total / 5;
	// 合計と平均を小数点第1位まで表示する
	printf("合計点%.1f点\n", total);
	printf("平均点%.1f点\n", average);
	// 平均点が60以上かつ40点未満の数字が一つもない場合「合格」と表示する
	bool totCheck = false;
	bool aveCheck = false;
	for (int a = 0; a < 5; a++)
	{
		if (answer[a] <= 40)
		{
			// 40点未満あり
			totCheck = true;
			break;
		}
	}
	if (average < 60)
	{
		// 60点以下あり
		aveCheck = true;
	}
	// 上記以外の場合「不合格」と表示する
	// 不合格の場合その理由も合わせて表示する
	if(!totCheck && !aveCheck)
	{
		printf("合格!\n");
	}
	else if (!totCheck && aveCheck) 
	{
		// 60点以下あり
		printf("不合格\n");
		printf("理由　平均点が60点以下だったため。\n");
	}
	else if (totCheck && !aveCheck) 
	{
		// 40点未満あり
		printf("不合格\n");
		printf("理由　40点未満の教科があったため。\n");
	}
	else if (totCheck && aveCheck) 
	{
		// 40点未満かつ60点以下あり
		printf("不合格\n");
		printf("理由　平均点が60点以下かつ40点未満の教科があったため。\n");
	}
	return 0;
}
