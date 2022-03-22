package 자바;

public class k_array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = new int[10]; // 
		/*
		 * int[] <- 인트형 배열 선언 
		 * array <- 배열명 
		 * = <- 대입,저장
		 * new <- 메모리 할당, 인스턴스 생성, 참조값 리턴을 한다고 한다. 자바에서 꽤나 중요해보이는 녀석이다.
		 * int[숫자] <- 배열의 크기 (고정)
		 */
		
		// 배열 선언 부분에서는 C와 차이가 꽤나 존재했다.
		
		for(int i = 0; i<10; i++)
		{
			System.out.println(i+"번째 인덱스에는 : "+array[i]); // 기본값으로 0이 들어가있다.
		}
		
		int[] array2 = new int[] {1,2,3,4,5,6}; // 값은 이렇게 넣는다!
		
		for(int i=0;i<6;i++)
		{
			System.out.println(array2[i]);
		}
		
		int[] array3 = {1,2,3}; // ? 이것도 된다 !
		System.out.println(array3[2]);
		
		// 배열 활용
		
		System.out.println(array.length); // 배열의 크기
		
		int[][] array_2d = new int[3][]; // 이런식으로 선언한다.
		
		/*
		int[][] array_2d = new int[3][2] {{1,2},{3,4},{5,6}};
		int[][] array_2d = new int[3][2] {{1,2,3},{4,5,6}};
		*/ //이건 왜 안될까..
		
		int[][] array_2d_2={{1,2},{3,4},{5,6}};
		
	}

}
