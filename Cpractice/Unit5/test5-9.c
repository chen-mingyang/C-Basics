//�ж�һ�����Ƿ�Ϊ���� 
#include<stdio.h>
#include<math.h>
int main(){
//	int n,i;
//	printf("please enter a integer number,n=?");
//	scanf("%d",&n);
//	for(i=2;i<=n-1;i++){
//		if(n%i==0) break;
//	}
//	    if(i<n) printf("%d is not\n",n);
//		else printf("%d is a\n",n);
//        return 0;	
        
    //�����Ż� �ж�������ֻ���ж��Ƿ�2-����n֮��������� 
        	int n,i,k;
	printf("please enter a integer number,n=?");
	scanf("%d",&n);
	k=sqrt(n);  //�������K��ֵ 
	for(i=2;i<=k;i++){
		if(n%i==0) break;
	}
	    if(i<k) printf("%d is not\n",n);
		else printf("%d is a\n",n);
        return 0;	
} 
