// d3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char arr[100];
	int index = 0;
	printf("�����ַ�����ϵͳ\n");

	while(1){

		int code;

		printf("1---������д�\n");
		printf("2---ɾ�����һ�����д�\n");
		printf("3---��ʾȫ�����д�\n");
		printf("4---�滻���������е����д�\n");//�����е������ַ�ȫ���滻Ϊ*
		printf("5---�˳�ϵͳ\n");

		printf("��������Ӧ���ܵı��\n");

		scanf("%d",&code);

		if(code == 1){
			char a;
			char x;
			printf("������Ҫ��ӵ������ַ���\n");
			scanf("%c",&a);//��ȡ��һ������Ļس��ַ�
			scanf("%c",&a);//��ȡ����������ַ�
			
			arr[index] = a;
			index++;

			printf("��ӳɹ�������س�����\n");
			scanf("%c",&x);
			scanf("%c",&x);
		}

		if(code == 2){
			char x;
			printf("ɾ�����һ�����д�\n");

			index--;//�߼�ɾ����������ʵɾ��

			printf("ɾ���ɹ�������س�����\n");
			scanf("%c",&x);
			scanf("%c",&x);

		}

		if(code == 3){
			char x;
			int i = 0;
			printf("����������д�:\n");
			for(;i<index;i++){
				printf("%c\n",arr[i]);
			}

			printf("����س�����\n");
			scanf("%c",&x);
			scanf("%c",&x);

		}

		if(code == 4){
			char x;
			int i = 0;


			char str[200];//����һ���ַ����飬�������û�������ַ�������
			printf("������һ�����֣�Ӣ�ģ�:\n");

			scanf("%s",str);

			//��str�ַ������е�ÿһ��Ԫ�أ���arr�����е�ÿһ��Ԫ�ؽ��жԱȣ�
			//�����ͬ���Ͱѵ�ǰ��arr�����жԱȵ�str�ַ������е�ֵ�޸�Ϊ*

			
			for(;str[i]!='\0';i++){
				if(i%2 == 0){
					str[i] = '*';
				}
			}

			printf("%s\n",str);

			printf("����س�����\n");
			scanf("%c",&x);
			scanf("%c",&x);




		}

	}





	return 0;
}

