#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int data1, data2, data3, data4, data5, sum;
	
	{	
		printf("���̃\�t�g�E�F�A�͕��ϒl���v�Z����\�t�g�E�F�A�ł��B\n");/* �\�t�g�ē� */

		/* �����J��Ԃ� */
		for (;;) {

			do {

				printf("5�̐������R���}�ŋ�؂��ď��Ԃɓ��͂��Ă��������B\n(�X�y�[�X�ŋ�؂�����A�T�̐��l���Ԉ���ē��͂���ƕs����o�܂�. 0 �`2147483647 �͈̔͂œ��͂��Ă�������.�����́u��΂Ɂv���͂��Ȃ��ł��������B)", INT_MAX);/* ���ē����� */
				scanf("%d , %d , %d , %d , %d", &data1, &data2, &data3, &data4, &data5); /* ���͕��� */

			} while ((data1 < 0) || (data2 < 0) || (data3 < 0) || (data4 < 0) || (data5 < 0));/* ��������(���ׂ�0�ȏ�) */

			sum = (data1 + data2 + data3 + data4 + data5) / 5;/* �v�Z���� */
			
			printf("���ϒl�� %d �ł��B\n", sum);/* �v�Z���ʕ\������ */
			printf("\n");
		}
		return 0;
	}
}