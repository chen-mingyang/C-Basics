//ѧ����ͳ���������˾�����
#include<stdio.h>
#define SUM 100000   //��const���峣���� ��const float pi=3.1415926    ��#define������ų��� 
int main(){
	float amount,aver,total;
	int i;
	for(i=1,total=0;i<=1000;i++){
		printf("please enter amount:");
		scanf("%f",&amount);
		total=total+amount;
		if(total>SUM){
			break;
		}
	}
	aver=total/i;
	printf("num=%d\n aver=%10.2f\n",i,aver);
	return 0;
} 
