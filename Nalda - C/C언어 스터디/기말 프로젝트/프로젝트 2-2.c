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
        // 이름이 같은 사람들을 저장해줄 배열과 배열을 채워넣을 위치를 표시할 변수 idx
        student sames[50];
        int idx = 0;

        // 입력받을 변수
        char getinfo[100];

        // 입력 받기
        printf("찾으려는 학생의 이름 또는 수강과목을 입력하세요 : ");
        scanf("%s", getinfo);

        // 입력이 exit라면 종료
        if (!strcmp(getinfo, "exit")) return;

        // 입력과 classname, 입력과 name을 비교하고 둘 중 하나라도 같다면 sames에 채워넣기
        for (int i = 0; i < max_len; i++)
        {
            if (strcmp((*(stu + i)).name, getinfo) == 0 || strcmp((*(stu + i)).classname, getinfo) == 0)
            {
                sames[idx++] = *(stu + i);
            }
        }

        // sames에 아무것도 채워지지 않은 경우, 해당 이름 혹은 class를 듣는 사람이 없는 경우
        if (idx == 0) printf("해당 학생 정보를 찾을 수 없습니다.\n");

        // 정렬
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

        // 출력
        for (int i = 0; i < idx; i++)
        {
            printf("%s\t%d\t%d\t%s\n", sames[i].name, sames[i].ID, sames[i].semester, sames[i].classname);
        }
        printf("\n"); // 예시대로 한줄 개행해줘야 할 것 같아서 개행.
    }
}

int main()
{
    // 프로젝트 적혀있는대로 초기화
    student s[] = { { "Minsu",2021001,2,"class1"} ,{"Ayoung", 2021015, 2 ,"class2"},{"Jihoon",2018016,8 ,"class5"},{"Minsu",2020013, 4,"class5"},{"Sojung", 2021033, 2 ,"class3"},{"Eunmi", 2019010, 3, "class4"},{"Eunmi", 2018022, 5, "class1"},{"Heejoon", 2018001, 7, "class4"} };
    find_student(s,sizeof(s)/sizeof(student));
}