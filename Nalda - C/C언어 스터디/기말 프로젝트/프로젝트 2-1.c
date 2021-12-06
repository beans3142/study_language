#include <stdio.h>

typedef struct STUDENT
{
    char name[100];
    int ID, semester;
    char classname[100];
} student;

int print_student_list(student* stu,int max_len)
{
    printf("��ȣ\t�̸�\t�й�\t�б�\t��������\n");

    // ����
    for (int i = max_len-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((*(stu + j)).semester > (*(stu + j + 1)).semester)
            {
                student tmp;
                tmp = *(stu + j);
                *(stu + j) = *(stu + j + 1);
                *(stu + j + 1) = tmp;
            }
        }
    }

    // ���
    for (int i = 0;i<max_len; i++)
    {
        printf("%d�� :\t%s\t%d\t%d\t%s\n",i+1, (*stu).name, (*stu).ID, (*stu).semester, (*stu).classname);
        stu++;
    }
}

int main()
{
    // ������Ʈ �����ִ´�� �ʱ�ȭ
    student s[] = { { "Minsu",2021001,2,"class1"} ,{"Ayoung", 2021015, 2 ,"class2"},{"Jihoon",2018016,8 ,"class5"},{"Minsu",2020013, 4,"class5"},{"Sojung", 2021033, 2 ,"class3"},{"Eunmi", 2019010, 3, "class4"},{"Eunmi", 2018022, 5, "class1"},{"Heejoon", 2018001, 7, "class4"} };
    print_student_list(s, sizeof(s) / sizeof(student));
}