#include <stdio.h>
#include <string.h>

typedef struct STUDENT
{
    char name[100];
    int ID, semester;
    char classname[100];
} student;

int find_student(student *stu,int max_len)
{
    while (1)
    {
        // �̸��� ���� ������� �������� �迭�� �迭�� ä������ ��ġ�� ǥ���� ���� idx
        student sames[50];
        int idx = 0;

        // �Է¹��� ����
        char getinfo[100];

        // �Է� �ޱ�
        printf("ã������ �л��� �̸� �Ǵ� ���������� �Է��ϼ��� : ");
        scanf("%s", getinfo);

        // �Է��� exit��� ����
        if (!strcmp(getinfo, "exit")) return;

        // �Է°� classname, �Է°� name�� ���ϰ� �� �� �ϳ��� ���ٸ� sames�� ä���ֱ�
        for (int i = 0; i < max_len; i++)
        {
            if (strcmp((*(stu + i)).name, getinfo) == 0 || strcmp((*(stu + i)).classname, getinfo) == 0)
            {
                sames[idx++] = *(stu + i);
            }
        }

        // sames�� �ƹ��͵� ä������ ���� ���, �ش� �̸� Ȥ�� class�� ��� ����� ���� ���
        if (idx == 0) printf("�ش� �л� ������ ã�� �� �����ϴ�.\n");

        // ����
        for (int i = idx-1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (sames[j].semester > sames[j+1].semester)
                {
                    student tmp;
                    tmp = sames[j];
                    sames[j] = sames[j + 1];
                    sames[j + 1]=tmp;
                }
            }
        }

        // ���
        for (int i = 0; i < idx; i++)
        {
            printf("%s\t%d\t%d\t%s\n", sames[i].name, sames[i].ID, sames[i].semester, sames[i].classname);
        }
        printf("\n"); // ���ô�� ���� ��������� �� �� ���Ƽ� ����.
    }
}

int main()
{
    // ������Ʈ �����ִ´�� �ʱ�ȭ
    student s[] = { { "Minsu",2021001,2,"class1"} ,{"Ayoung", 2021015, 2 ,"class2"},{"Jihoon",2018016,8 ,"class5"},{"Minsu",2020013, 4,"class5"},{"Sojung", 2021033, 2 ,"class3"},{"Eunmi", 2019010, 3, "class4"},{"Eunmi", 2018022, 5, "class1"},{"Heejoon", 2018001, 7, "class4"} };
    find_student(s,sizeof(s)/sizeof(student));
}