#include <stdio.h>
#include <string.h>

//STUDENT 구조체 정의
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
        int opt; //옵션선택
        int num; //학생번호
        int index = -10;

        printf("발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요 : ");
        scanf("%d", &opt);

        if (opt == 1)
        {
            printf("발표리스트에 추가할 학생 번호를 입력하세요 : ");
            scanf("%d", &num);
            // 입력받은 숫자가 배열에 저장되어 있는지 확인
            for (int i = 0; i < size; i++) //중복학생 확인하는거니깐 space원소의 내용물을 봐야함
            {
                if (space[i] == num)
                    index = i;
            }
            if (num > size) {
                printf("잘못된 번호입니다.\n");
                continue;
            }
            if (index != -10)
                printf("이미 발표리스트에 있는 학생입니다.\n");

            //추가하는 코드 구현
            else {
                space[sum] = num;
                sum = sum + 1;
                printf("<< 발표리스트 >>\n");

                for (int i = 0; i < sum; i++) {
                    printf("%d번 : %s %s %d %s\n", i + 1, arr[space[i] - 1].name, arr[space[i] - 1].ID, arr[space[i] - 1].semester, arr[space[i] - 1].class_name);
                }
                printf("총 발표명 수 : %d\n", sum);
            }
            printf("\n");
        }

        //삭제하는 코드 구현
        else if (opt == 2)
        {
            printf("발표리스트에서 삭제할 학생 번호를 입력하세요 : ");
            scanf("%d", &num);
            // 입력받은 숫자가 배열에 저장되어 있는지 확인
            for (int i = 1; i <= sum; i++) //삭제할 학생번호니깐 space의 틀을 봐야함
            {
                if (num == i)
                    index = i;
            }
            if (index == -10)
                printf("삭제할 학생이 없습니다.\n");
            else {
                //배열원소 왼쪽으로 이동시키기
                for (int i = num - 1; i < 4; i++)
                {
                    space[i] = space[i + 1];
                }
                sum = sum - 1;
                printf("<< 발표리스트 >>\n");

                for (int i = 0; i < sum; i++) {
                    printf("%d번 : %s %s %d %s\n", i + 1, arr[space[i] - 1].name, arr[space[i] - 1].ID, arr[space[i] - 1].semester, arr[space[i] - 1].class_name);
                }
                printf("총 발표명 수 : %d\n", sum);
            }
            printf("\n");
        }

        else if (opt == 3)
            break;

        if (sum == 5)
            break;
    } //while문 끝
}


void find_student(STUDENT* arr,const int size)
{
    char str[20];
    int space[size] = { 0, };

    while (1)
    {
        int cnt = 0;
        int idx = 0;
        printf("찾으려는 학생의 이름 또는 수강과목을 입력하세요 : ");
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
            printf("해당 학생 정보를 찾을 수 없습니다.\n");
        }
        printf("\n");
    } //while문 끝
}

void print_student_list(STUDENT* arr,int size) //실제로 함수인자에는 students 로 하면됨
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
    printf("번호    이름         학번       학기   수강과목\n");
    for (int i = 0; i < size; i++)
    {
        printf("%3d번 :  %-10s %-6s %10d %16s\n", i + 1, arr[i].name, arr[i].ID, arr[i].semester, arr[i].class_name);
    }
}