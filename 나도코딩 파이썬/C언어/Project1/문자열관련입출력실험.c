
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void practice_strio()
{
    return 0;
    char cc = 'c';
    char c[6] = "abcde"; //�ι��� ����
    char nullless_c[5] = "abcde";
    printf("%d %c\n", 1, cc); // �ѱ����̹Ƿ� �� ��� ��!
    //printf("%s\n", cc); //�����߻�? ��¾ȵ� (�������� �ؿ��͵� ����� �ȵǰ� ��.
    printf("%d %d\n", 2, cc); // c�� �ƽ�Ű �ڵ尪 99 ��µ�
    printf("%d %c\n", 3, c); // �� ���� a�� ��µ� ������ ���������� ���� ���� @�� ��µ�
    printf("%d %s\n", 4, c); // ����� �� ��� ��!
    printf("%d %d\n", 5, c); // �����Ⱚ? ��ġ��? 14416448��� ���� ��� ��. 
    printf("%d %c\n", 6, nullless_c); // ������ �𸣰����� 0�� ��µ�
    printf("%d %s\n", 7, nullless_c); // abcde����������?bcde �̷� ���� ���� �Ƹ� �ι��ڰ� ����X���ε�
    printf("%d %d\n", 8, nullless_c); // 5�� ����ϰ� 14416432 �̷� ���� ����, �޸� �ּҰ� �ƴұ� ����.

    return 0;
}
