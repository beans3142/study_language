
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void practice_strio()
{
    return 0;
    char cc = 'c';
    char c[6] = "abcde"; //널문자 포함
    char nullless_c[5] = "abcde";
    printf("%d %c\n", 1, cc); // 한글자이므로 잘 출력 됨!
    //printf("%s\n", cc); //에러발생? 출력안됨 (에러난듯 밑에것도 출력이 안되게 됨.
    printf("%d %d\n", 2, cc); // c의 아스키 코드값 99 출력됨
    printf("%d %c\n", 3, c); // 맨 앞의 a가 출력될 것으로 예상했으나 전혀 엄한 @가 출력됨
    printf("%d %s\n", 4, c); // 제대로 잘 출력 됨!
    printf("%d %d\n", 5, c); // 쓰레기값? 위치값? 14416448라는 값이 출력 됨. 
    printf("%d %c\n", 6, nullless_c); // 이유는 모르겠으나 0이 출력됨
    printf("%d %s\n", 7, nullless_c); // abcde儆儆儆儆儆?bcde 이런 값이 나옴 아마 널문자가 포함X라서인듯
    printf("%d %d\n", 8, nullless_c); // 5와 비슷하게 14416432 이런 값이 나옴, 메모리 주소가 아닐까 싶음.

    return 0;
}
