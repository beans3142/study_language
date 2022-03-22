package 자바;

public class g_arithmetic_operator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a=10;
		int b=5;
		System.out.println(a+b);
		System.out.println(a-b);
		System.out.println(a*b);
		System.out.println(a/b);
		System.out.println(a%b);
		
		System.out.println((double)a/b);
		System.out.println(a/(double)b); // 형변환 순서 상관없이 같은 값이 출력된다.
		
		System.out.println(a+" <-a "+ (a++) +" <-a++ "+ (++a) +" <-++(a++) "); // 이거 매우 편해서 개인적으로 좋아한다. b
		
		// 기본적인 다른 연산자들도 c언어와 동일했다.
	}

}
