//�ýṹ������ͽṹ�������ָ����Ϊ��������
//��n���ṹ��������ں�ѧ��ѧ�š�������3�ſεĳɼ���Ҫ�����ƽ���ɼ���ߵ�ѧ����Ϣ
#include<stdio.h>
#define N 3  //�����ַ�����
struct Student{ //�����ṹ������struct Student
    int num;
    char name[20];
    float score[3];
    float aver;
};

int main(){
    void input(struct Student stu[]); //���뺯������
    struct Student max(struct Student stu[]); //���ֵ��������
    void print(struct Student stu); //�����������
    struct Student stu[N],*p=stu; //����ṹ�������ָ��
    input (p); //����input����
    print(max(p));//����print����,��max�����ķ���ֵstruct Student������Ϊʵ��
    return 0;
}

void input(struct Student stu[]){ //����input����
    int i;
    printf("�������ѧ������Ϣ��ѧ�š����������ſγɼ�:\n");
    for(i=0;i<N;i++){
        //��������
        scanf("%d %s %f %f %f",&stu[i].num,
              stu[i].name,&stu[i].score[0],
              &stu[i].score[1],&stu[i].score[2]);
        //��ƽ���ɼ�
        stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
    }
}

struct Student max(struct Student stu[]){ //����max����
    int i,m=0; //��m��ųɼ���ߵ�ѧ���������е����
    for(i=0;i<N;i++)
        if (stu[i].aver>stu[m].aver) m=i; //�ҳ�ƽ���ɼ���ߵ�ѧ���������е����
    return stu[m]; //���ذ���������Ϣ�Ľṹ��Ԫ��
}

void print(struct Student stud){ //����print����
    printf("\n�ɼ���ߵ�ѧ���ǣ�\n");
    printf("ѧ�ţ�%d\n ������%s\n ���ſγɼ���%5.1f %5.1f %5.1f\n ƽ���ɼ���%6.2f\n",
           stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}