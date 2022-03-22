package 자바;

public class j_iteration {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for(int i = 0;i<15;i++)
		{
			System.out.println(i);
		}
		// C랑 똑같다.
		
		int idx=0;
		while (idx<15)
		{
			System.out.println(idx++);
		}
		// 이것도 똑같다.
		
		idx=15;
		do {
			System.out.println(idx);
			idx++;
		} while (idx<30);
		
		// 똑같다.
		
		// for each 구문 파이썬의 for [받을 변수명] in [연속 자료형]과 비슷한 활용
		
		int[] arr = {1,2,3,4,5,6,7};
		for (int i:arr)
		{
			System.out.println(i);
		}
	}

}
