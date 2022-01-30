#include <stdio.h>
#include <string.h>

//STUDENT ����ü ����
typedef struct student
{
    char name[20];
    char ID[20];
    int semester;
    char class_name[20];
} STUDENT;

void print_student_list(STUDENT* arr,int size);
void find_student(STUDENT* arr, int size);
void print_presentation_list(STUDENT* arr, int size);

int main()
{
    STUDENT students[] = { {"Minsu", "2021001", 2, "class1"}, {"Ayoung", "2021015", 2, "class2"}, {"Jihoon", "2018016", 8, "class5"}, {"Minsu", "2020013", 4, "class5"}, {"Sojung", "2021033", 2, "class3"}, {"Eunmi", "2019010", 3, "class4"}, {"Eunmi", "2018022", 5, "class1"}, {"Heejoon", "2018001", 7, "class4"} };

    const int size = sizeof(students) / sizeof(STUDENT);

    print_student_list(students,size);
    find_student(students,size);
    print_presentation_list(students,size);

    return 0;
}


void print_presentation_list(STUDENT* arr, int size)
{
    int sum = 0;
    int space[1000] = { 0, };
    while (1)
    {
        int opt; //�ɼǼ���
        int num; //�л���ȣ
        int index = -10;

        printf("��ǥ����Ʈ�� �߰��Ϸ��� 1��, �����Ϸ��� 2��, �����Ϸ��� 3���� �������� : ");
        scanf("%d", &opt);

        if (opt == 1)
        {
            printf("��ǥ����Ʈ�� �߰��� �л� ��ȣ�� �Է��ϼ��� : ");
            scanf("%d", &num);
            // �Է¹��� ���ڰ� �迭�� ����Ǿ� �ִ��� Ȯ��
            for (int i = 0; i < size; i++) //�ߺ��л� Ȯ���ϴ°Ŵϱ� space������ ���빰�� ������
            {
                if (space[i] == num)
                    index = i;
            }
            if (num > size) {
                printf("�߸��� ��ȣ�Դϴ�.\n");
                continue;
            }
            if (index != -10)
                printf("�̹� ��ǥ����Ʈ�� �ִ� �л��Դϴ�.\n");

            //�߰��ϴ� �ڵ� ����
            else {
                space[sum] = num;
                sum = sum + 1;
                printf("<< ��ǥ����Ʈ >>\n");

                for (int i = 0; i < sum; i++) {
                    printf("%d�� : %s %s %d %s\n", i + 1, arr[space[i] - 1].name, arr[space[i] - 1].ID, arr[space[i] - 1].semester, arr[space[i] - 1].class_name);
                }
                printf("�� ��ǥ�� �� : %d\n", sum);
            }
            printf("\n");
        }

        //�����ϴ� �ڵ� ����
        else if (opt == 2)
        {
            printf("��ǥ����Ʈ���� ������ �л� ��ȣ�� �Է��ϼ��� : ");
            scanf("%d", &num);
            // �Է¹��� ���ڰ� �迭�� ����Ǿ� �ִ��� Ȯ��
            for (int i = 1; i <= sum; i++) //������ �л���ȣ�ϱ� space�� Ʋ�� ������
            {
                if (num == i)
                    index = i;
            }
            if (index == -10)
                printf("������ �л��� �����ϴ�.\n");
            else {
                //�迭���� �������� �̵���Ű��
                for (int i = num - 1; i < 4; i++)
                {
                    space[i] = space[i + 1];
                }
                sum = sum - 1;
                printf("<< ��ǥ����Ʈ >>\n");

                for (int i = 0; i < sum; i++) {
                    printf("%d�� : %s %s %d %s\n", i + 1, arr[space[i] - 1].name, arr[space[i] - 1].ID, arr[space[i] - 1].semester, arr[space[i] - 1].class_name);
                }
                printf("�� ��ǥ�� �� : %d\n", sum);
            }
            printf("\n");
        }

        else if (opt == 3)
            break;

        if (sum == 5)
            break;
    } //while�� ��
}


void find_student(STUDENT* arr,const int size)
{
    char str[20];
    int space[size] = { 0, };

    while (1)
    {
        int cnt = 0;
        int idx = 0;
        printf("ã������ �л��� �̸� �Ǵ� ���������� �Է��ϼ��� : ");
        scanf("%s", str);
        if (strcmp(str, "exit") == 0)
            break;

        for (int i = 0; i < size; i++)
        {
            if (strcmp(arr[i].name, str) == 0 || strcmp(arr[i].class_name, str) == 0)
            {
                cnt = cnt + 1;
                space[idx++] = i;
            }
        }

        if (cnt >= 2)
        {
            for (int i = 0; i < cnt; i++)
            {
                printf("%s %s %d %s\n", arr[space[i]].name, arr[space[i]].ID, arr[space[i]].semester, arr[space[i]].class_name);
            }
        }
        else if (cnt == 1)
        {
            printf("%s %s %d %s\n", arr[space[0]].name, arr[space[0]].ID, arr[space[0]].semester, arr[space[0]].class_name);
        }
        else if (cnt == 0)
        {
            printf("�ش� �л� ������ ã�� �� �����ϴ�.\n");
        }
        printf("\n");
    } //while�� ��
}

void print_student_list(STUDENT* arr,int size) //������ �Լ����ڿ��� students �� �ϸ��
{
    STUDENT temp;
    int i, j;
    for (i = 0; i < size; i++)
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j].semester > arr[j + 1].semester)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    printf("��ȣ    �̸�         �й�       �б�   ��������\n");
    for (int i = 0; i < size; i++)
    {
        printf("%3d�� :  %-10s %-6s %10d %16s\n", i + 1, arr[i].name, arr[i].ID, arr[i].semester, arr[i].class_name);
    }
}