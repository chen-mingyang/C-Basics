#include <stdio.h>
//*��������
//int insertSort(int s[], int n)    /* �Զ��庯�� insertSort()*/
//{
//    /** �ȽϹ���*/
//    /**ԭʼ 10 9 8 7 6 5 4 3 2 1*/
//    /**��һ�� 9 10 8 7 6 5 4 3 2 1*/
//    /**�ڶ��� 9 8 10 7 6 5 4 3 2 1*/ /** 8 9 10 7 6 5 4 3 2 1*/
//    /** .....�Դ�����*/
//
//    int i,j,key;
//    for(i=1;i<n;i++)    //�����±��1��ʼ��key�������ڣ�������ֵ����
//    {
//        key=s[i];    //���������ֵkey
//        j=i-1;    //ȷ��Ҫ������ڱȽϵ�Ԫ���±�
//        while( j>=0 && s[j]>key )
//        {
//            s[j+1]=s[j];    //��������
//            j--;    //�±��������һ��δ�Ƚϵ�����ֱ���ȽϽ���
//        }
//        s[j+1]=key;    //��ȷ�����±�λ�ò���key
//    }
//    return 0;
//}

int insertSort2(int arr[],int n){
    int i,j,key;
    for (i = 1; i <n ; ++i) {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    return 0;
}

int main()
{
    int a[10],i;    //�������鼰����Ϊ��ľ��˦

    printf("������10�����ݣ�\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);    //���մӼ��������10�����ݵ�����a��

    insertSort2(a,10);    //�����Զ��庯�� insort()

    printf("ֱ�Ӳ�������\n");
    for(i=0;i<10;i++)
        printf("%5d",a[i]); //���������������

    return 0;
}

