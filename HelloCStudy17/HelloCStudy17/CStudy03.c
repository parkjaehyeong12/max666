#include<stdio.h>
#include"Mystructs.h" //����ü ����
void printAnimal(Animal ani) //���ο� �ڷ�������, ���� ���� �� «��
{
	printf("������ : %s\n",ani.name);
	printf("������ : %s\n",ani.species);
	printf("�����ڵ� : %s\n",ani.code);

}
Food FoodTruck() // ����ü�� ��ȯ�Ѵٴ� ��
{
	Food f; //����ü Food�� ��ȯ�ϴ� �Լ� �ȿ��� ����üFood ���¸� ���
	//���� f�� �����Ѵ�. ������� �ȿ� �����Ƿ� �Ӽ��鵵 �̿밡������
	printf("������ ������? ");
	scanf_s("%d", &f.price);
	printf("���ĸ�? ");
	rewind(stdin);
	gets(f.name);
	return f;
}


int main()
{
	Animal a1 = { "���丮", "��Ʈ����", "0001" };
	Animal a2 = { .name = "���丮",.species = "��", "0002" };
	Animal a3;
	strcpy(a3.name, "��ī��");
	strcpy(a3.species, "��");
	strcpy(a3.code, "025");
	Animal a4;
	gets(a4.name);
	gets(a4.species);
	gets(a4.code);

	printf("%s %s %s\n", a1.name, a1.species, a1.code);
	printf("%s %s %s\n", a2.name, a2.species, a2.code);
	printf("%s %s %s\n", a3.name, a3.species, a3.code);
	printf("%s %s %s\n", a4.name, a4.species, a4.code);

	Food f1 = { 5500,"�н�" };
	Food f2 = { .price = 700000,.name = "�Ͻ�" };
	Food f3;
	f3.price = 500000;
	strcpy(f3.name, "�ѽ�");
	Food f4;
	scanf_s("%d", &f4.price);
	rewind(stdin);
	gets(f4.name);

	printf("%s %d\n", f1.name, f1.price);
	printf("%s %d\n", f2.name, f2.price);
	printf("%s %d\n", f3.name, f3.price);
	printf("%s %d\n", f4.name, f4.price);

	printAnimal(a1);
	printAnimal(a2);
	printAnimal(a3);

	printf("���� �� ���ϴ� ");
	Food myfood = FoodTruck();
	printf("%s %d\n", myfood.name, myfood.price);

	return 0;
}