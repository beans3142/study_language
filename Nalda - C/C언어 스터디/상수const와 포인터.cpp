#include <stdio.h>

int main()
{
	int n = 10;

	const int *ptr1=&n;
	int *const ptr2 = &n;
	const int* const ptr3 = &n;

	// 초기 상태 출력
	printf("각 포인터들의 표시값 %d %d %d\n각 포인터들의 주소값 %p %p %p\n", *ptr1, *ptr2, *ptr3, ptr1, ptr2, ptr3);
	
	// ptr1값에 +연산
	printf("포인터 주소에 +1시켜준 값들 : %p %p %p\n", ptr1 + 1, ptr2 + 1, ptr3 + 1);
	
	// n값을 변환
	n = 15;
	printf("각 포인터들의 표시값 %d %d %d\n각 포인터들의 주소값 %p %p %p\n", *ptr1, *ptr2, *ptr3, ptr1, ptr2, ptr3);

	// ptr1,2,3 을 가지고 하는 연산
	// const(상수)의 특징을 잘 파악하면 됨
	// ptr1의 경우 (1)은 안되지만 (2)는 됨
	// ptr2의 경우 (1)은 되지만 (2)는 안됨
	// ptr3의 경우 (1)과 (2) 모두 안됨

	// ptr1을 통해 값을 변경
	// 
	//ptr1 = 20; // (1)
	ptr1 += 10; // (2)
	// 에러 발생 수정할수 없는 값
	printf("각 포인터들의 표시값 %d %d %d\n각 포인터들의 주소값 %p %p %p\n", *ptr1, *ptr2, *ptr3, ptr1, ptr2, ptr3);

	// ptr2를 통해 값을 변경
	*ptr2 = 10; // (1)
	// ptr2+=10; // (2)
	printf("각 포인터들의 표시값 %d %d %d\n각 포인터들의 주소값 %p %p %p\n", *ptr1, *ptr2, *ptr3, ptr1, ptr2, ptr3);

	//*ptr3 = 10; // (2)
	//*ptr3 += 10; // (1)
	printf("각 포인터들의 표시값 %d %d %d\n각 포인터들의 주소값 %p %p %p\n", *ptr1, *ptr2, *ptr3, ptr1, ptr2, ptr3);

	// 따지고 보면 const 와 * 를 잘 보면 어떤게 어떻게 저장되고 어떤 특성을 가지는지 유추가 가능함.
}