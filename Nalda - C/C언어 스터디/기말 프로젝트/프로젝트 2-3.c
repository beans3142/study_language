#include <stdio.h>
#include <string.h>

typedef struct STUDENT
{
    char name[100];
    int ID, semester;
    char classname[100];
} student;

int print_presentation_list(student* stu, int max_len)
{
    // ���� �� ����� Q1�� �ڵ带 ������ ��

    // ����
    for (int i = max_len - 1; i > 0; i--)
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
    printf("��ȣ\t�̸�\t\t�й�\t\t�б�\t\t��������\n");
    for (int i = 0; i < max_len; i++)
    {
        printf("%d�� :\t%s\t\t%d\t\t%d\t\t%s\n", i + 1, (*(stu+i)).name, (*(stu+i)).ID, (*(stu+i)).semester, (*(stu+i)).classname);
    }
    printf("\n");

    // ��ǥ�� ����� ä���� �迭, ä���� ��ġ�� ����� ǥ���� cnt, �湮ó���� ����� �迭 used ����;
    student present[50];
    int cnt = 0;
    int used[51] = { 0, };
    int rev[51] = { 0, };

    while (cnt<5)
    {
        // �Է¹ޱ�
        int choice,no;
        printf("��ǥ����Ʈ�� �߰��Ϸ��� 1��, �����Ϸ��� 2��, �����Ϸ��� 3���� �������� : ");
        scanf("%d", &choice);

        // ��ǥ����Ʈ�� �л� �߰�
        if (choice == 1)
        {
            printf("��ǥ����Ʈ�� �߰��� �л� ��ȣ�� �Է��ϼ��� : ");
            scanf("%d", &no);
            if (used[no] == 1)
            {
                printf("�̹� ��ǥ����Ʈ�� �ִ� �л��Դϴ�.\n");
            }
            else if (0<no && no<=max_len)
            {
                used[no] = 1;
                rev[cnt] = no;
                present[cnt++] = *(stu + no - 1);

                // ��º�
                printf("<< ��ǥ����Ʈ >>\n");
                for (int i = 0; i < cnt; i++)
                {
                    printf("  %d�� : %s\t\t%d\t\t%d\t\t%s\n", i + 1, present[i].name, present[i].ID, present[i].semester, present[i].classname);
                }
                printf("�� ��ǥ�� �� : %d\n", cnt);
            }
            else
            {
                printf("�߸��� ��ȣ�Դϴ�.\n");
            }
            
        }
        else if (choice == 2)
        {
            printf("��ǥ����Ʈ���� ������ �л� ��ȣ�� �Է��ϼ��� : ");
            scanf("%d", &no);
            if (cnt<no || no<1)
            {
                printf("������ �л��� �����ϴ�.\n");
            }
            else if (0 < no && no <= max_len)
            {
                // ��ǥ�� �Ұ����� ������ �л��� �ٽ� ��ǥ ������ ���·� �ٲ���
                used[rev[no - 1]] = 0;
                for (int i = no - 1; i < cnt-1; i++)
                {
                    // ��ĭ�� �����
                    student tmp;
                    tmp = present[i];
                    present[i] = present[i + 1];
                    present[i+1]= tmp;

                    // ������ �л��� ��ȣ�� �����س��� �迭�� ��ĭ�� �մ����
                    int tmp2;
                    tmp2 = rev[i];
                    rev[i]=rev[i+1];
                    rev[i + 1] = tmp2;
                }
                // 1�� �پ����Ƿ�
                cnt--;

                // ��º� 
                printf("<< ��ǥ����Ʈ >>\n");
                for (int i = 0; i < cnt; i++)
                {
                    printf("  %d�� : %s\t\t%d\t\t%d\t\t%s\n", i + 1, present[i].name, present[i].ID, present[i].semester, present[i].classname);
                }
                printf("�� ��ǥ�� �� : %d\n", cnt);
            }
        }
        else if (choice == 3)
        {
            return;
        }
 
        printf("\n"); //���ÿ��� ���� ���ִ� �� ���Ƽ�
    }
}

int main()
{
    // ������Ʈ �����ִ´�� �ʱ�ȭ
    student s[] = { { "Minsu",2021001,2,"class1"} ,{"Ayoung", 2021015, 2 ,"class2"},{"Jihoon",2018016,8 ,"class5"},{"Minsu",2020013, 4,"class5"},{"Sojung", 2021033, 2 ,"class3"},{"Eunmi", 2019010, 3, "class4"},{"Eunmi", 2018022, 5, "class1"},{"Heejoon", 2018001, 7, "class4"} };
    
    // Q1���� ��� �ڵ� ����
    print_presentation_list(s, sizeof(s) / sizeof(student));
}