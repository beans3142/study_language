package 자바;

public class h_if {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// 기본적인 활용
		
		int a=5;
		int b=3;
		
		//if a==b // C언어처럼 if (조건) {  } 과 같이 작성된다. ()없이 안된다.
		
		if (a>b) {
			System.out.println("a>b");
		}
		else if (a==b)
		{
			System.out.println("a==b");
		}
		else
		{
			System.out.println("a<b");
		}
		
		/*
		while (a<b)
		{
			b--;
		}
		else
		{
			
		}
		*/ // 파이선처럼 while (불만족) 시 else문으로 넘어가는 것은 안된다.
		
		// 여러모로 C언어와 비슷한 것 같다. 
		
		System.out.println(a>b ? a : b); // 삼항 연산자도 잘 된다 !
	}

}
