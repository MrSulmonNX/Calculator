#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int data1, data2, data3, data4, data5, sum;
	
	{	
		printf("このソフトウェアは平均値を計算するソフトウェアです。\n");/* ソフト案内 */

		/* 無限繰り返し */
		for (;;) {

			do {

				printf("5つの数字をコンマで区切って順番に入力してください。\n(スペースで区切ったり、５つの数値を間違って入力すると不具合が出ます. 0 ～2147483647 の範囲で入力してください.小数は「絶対に」入力しないでください。)", INT_MAX);/* 第一案内部分 */
				scanf("%d , %d , %d , %d , %d", &data1, &data2, &data3, &data4, &data5); /* 入力部分 */

			} while ((data1 < 0) || (data2 < 0) || (data3 < 0) || (data4 < 0) || (data5 < 0));/* 数字条件(すべて0以上) */

			sum = (data1 + data2 + data3 + data4 + data5) / 5;/* 計算部分 */
			
			printf("平均値は %d です。\n", sum);/* 計算結果表示部分 */
			printf("\n");
		}
		return 0;
	}
}