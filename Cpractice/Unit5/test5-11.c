//��������  ����-����-ԭ�� 
#include<stdio.h>
int main(){
//	char c;
//	c=getchar();
//	while(c!='\n'){  //����һ���ַ��������ĸ�����ж� 
//		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
//			if(c>='W'&&c<='Z'||c>='w'&&c<='z') c=c-22;
//			else c=c+4;
//		}
//		printf("%c",c);   //������ܺõ���ĸ 
//		c=getchar();  //�Ѽ��ܺõ���ĸ�����뵽�µ��ַ��� 
//	}
//	printf("\n");
//	return 0;

//�����Ż�
 	char c;

	while((c=getchar())!='\n'){  //����һ���ַ��������ĸ�����ж� 
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			c=c+4;
			if(c>='Z'&&c<='Z'+4||c>'z') 
			c=c-26;
	
		}
		printf("%c",c);   //������ܺõ���ĸ 
	
	}
	printf("\n");
	return 0;
}
