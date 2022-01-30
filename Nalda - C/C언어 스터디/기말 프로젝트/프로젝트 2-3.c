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
    // 정렬 및 출력은 Q1의 코드를 가져다 씀

    // 정렬
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

    // 출력
    printf("번호\t이름\t\t학번\t\t학기\t\t수강과목\n");
    for (int i = 0; i < max_len; i++)
    {
        printf("%d번 :\t%s\t\t%d\t\t%d\t\t%s\n", i + 1, (*(stu+i)).name, (*(stu+i)).ID, (*(stu+i)).semester, (*(stu+i)).classname);
    }
    printf("\n");

    // 발표할 사람을 채워줄 배열, 채워줄 위치와 명수를 표현할 cnt, 방문처리에 사용할 배열 used 선언;
    student present[50];
    int cnt = 0;
    int used[51] = { 0, };
    int rev[51] = { 0, };

    while (cnt<5)
    {
        // 입력받기
        int choice,no;
        printf("발표리스트에 추가하려면 1번, 삭제하려면 2번, 종료하려면 3번을 누르세요 : ");
        scanf("%d", &choice);

        // 발표리스트에 학생 추가
        if (choice == 1)
        {
            printf("발표리스트에 추가할 학생 번호를 입력하세요 : ");
            scanf("%d", &no);
            if (used[no] == 1)
            {
                printf("이미 발표리스트에 있는 학생입니다.\n");
            }
            else if (0<no && no<=max_len)
            {
                used[no] = 1;
                rev[cnt] = no;
                present[cnt++] = *(stu + no - 1);

                // 출력부
                printf("<< 발표리스트 >>\n");
                for (int i = 0; i < cnt; i++)
                {
                    printf("  %d번 : %s\t\t%d\t\t%d\t\t%s\n", i + 1, present[i].name, present[i].ID, present[i].semester, present[i].classname);
                }
                printf("총 발표명 수 : %d\n", cnt);
            }
            else
            {
                printf("잘못된 번호입니다.\n");
            }
            
        }
        else if (choice == 2)
        {
            printf("발표리스트에서 삭제할 학생 번호를 입력하세요 : ");
            scanf("%d", &no);
            if (cnt<no || no<1)
            {
                printf("삭제할 학생이 없습니다.\n");
            }
            else if (0 < no && no <= max_len)
            {
                // 발표가 불가능한 상태인 학생을 다시 발표 가능한 상태로 바꿔줌
                used[rev[no - 1]] = 0;
                for (int i = no - 1; i < cnt-1; i++)
                {
                    // 한칸씩 당겨줌
                    student tmp;
                    tmp = present[i];
                    present[i] = present[i + 1];
                    present[i+1]= tmp;

                    // 원래의 학생의 번호를 저장해놓은 배열도 한칸씩 앞당겨줌
                    int tmp2;
                    tmp2 = rev[i];
                    rev[i]=rev[i+1];
                    rev[i + 1] = tmp2;
                }
                // 1명 줄었으므로
                cnt--;

                // 출력부 
                printf("<< 발표리스트 >>\n");
                for (int i = 0; i < cnt; i++)
                {
                    printf("  %d번 : %s\t\t%d\t\t%d\t\t%s\n", i + 1, present[i].name, present[i].ID, present[i].semester, present[i].classname);
                }
                printf("총 발표명 수 : %d\n", cnt);
            }
        }
        else if (choice == 3)
        {
            return;
        }
 
        printf("\n"); //예시에서 개행 해주는 것 같아서
    }
}

int main()
{
    // 프로젝트 적혀있는대로 초기화
    student s[] = { { "Minsu",2021001,2,"class1"} ,{"Ayoung", 2021015, 2 ,"class2"},{"Jihoon",2018016,8 ,"class5"},{"Minsu",2020013, 4,"class5"},{"Sojung", 2021033, 2 ,"class3"},{"Eunmi", 2019010, 3, "class4"},{"Eunmi", 2018022, 5, "class1"},{"Heejoon", 2018001, 7, "class4"} };
    
    // Q1에서 썼던 코드 재사용
    print_presentation_list(s, sizeof(s) / sizeof(student));
}