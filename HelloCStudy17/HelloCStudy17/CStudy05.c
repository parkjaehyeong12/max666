#include<stdio.h>
#include"Mystructs.h"
int main()
{
	if (0)
	{
		//�л� 1�� ������(����) - 1
		KBStudent k1 = { 100,90,"�̵���" };

		//�л� 1�� ������(����) - 2
		KBStudent k2 = { .cScore = 100, .javaScore = 100, .name = "������������" };

		//�л� 1�� ������(����) - 3
		KBStudent k3;
		k3.cScore = 100;
		k3.javaScore = 0;
		strcpy(k3.name, "�赿��");

		//�л� 1�� ������(�Է�)
		KBStudent k4;
		scanf_s("%d %d", &k4.cScore, &k4.javaScore);
		rewind(stdin);

		gets(k4.name);
		printf("%d %d %s", k4.cScore, k4.javaScore, k4.name);
		//�ִ� �ּұ��ϴ� �͵� �־
		//�迭�� �ؾ� �Ѵ�.
	}

	KBStudent students[5];

	int cSum = 0;
	int javaSum = 0;
	double cAvg, javaAvg;
	int maxC = 0;
	int maxjava = 0;
	double avg_max = 0;
	double avg_min = 0;
	int index_max = 0; //1�� �ε��� ���
	int index_max_C = 0; //1�� �ε���(c)
	int index_max_Java = 0; //1�� �ε���(java)

	for (int i = 0; i < 5; i++)
	{
		rewind(stdin);
		printf("\n�̸��� ������? ");
		gets(students[i].name);
		printf("C���� �ڹ� ������? ");
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
	}

	for (int i = 0; i < 5; i++)
	{
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("\nc,java ������ ���� %d %d\n", cSum, javaSum);
	printf("c,java ������ ��� %f %f\n", cSum / 5.0, javaSum / 5.0);

	maxC = students[0].cScore;
	maxjava = students[0].javaScore;
	avg_max = (students[0].cScore+ students[0].javaScore)/2.0;

	for (int i = 0; i < 5; i++)
	{
		if (maxC < students[i].cScore)
		{
			maxC = students[i].cScore;
			index_max_C = i;
		 }
		if (maxjava < students[i].javaScore)
		{
			maxjava = students[i].javaScore;
			index_max_Java = i;
		}
		if (avg_max < (students[i].cScore + students[i].javaScore) / 2.0)
		{
			avg_max = (students[i].cScore + students[i].javaScore) / 2.0;
			index_max = i;
		}
	}
	printf("C 1�� : %s\n", students[index_max_C].name);
	printf("Java 1�� : %s\n", students[index_max_Java].name);
	printf("��� 1�� : %s\n", students[index_max].name);






	return 0;
}