package 자바;

public class c_variable {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num1;
		num1=30;
		int num2=40;
		System.out.println(num1+num2);
		float num3=3;
		// float num4=3.2; // 자바에서의 float에 값을 저장할 때에는 뒤에 f를 붙여주어야 한다.
		System.out.println(num3);
		float num4=3.2f;
		System.out.println(num4);
		double num5=0.32;
		System.out.println(num5);
		boolean T=true;
		System.out.println(T); // 불리언도 예상대로 잘 나온다.
		char s='A';
		System.out.println(s); // char은 문자값을 갖는다
		String s2="HELLO WORLD"; // 어째선지 맨 앞을 대문자로 해주지 않으면 오류가 난다. 문자열은 String
		System.out.println(s2);
		
		/* int intnum=100000000000; // C언어처럼 int값의 범위가 정해져있다.
		System.out.println(intnum); */
		
		long longnum=100000000000L; // 저장할때 L을 붙여주어야 한다. int보다 범위가 크다.
		System.out.println(longnum);
		
		// 자바는 파이썬 만큼 말도 안되는 수들의 연산이 가능하지 않다.
		
		System.out.println(0x12); // 16진수 출력도 잘 된다. C언어와 비슷한 것들은 모두 활용가능한 것 같다.
		
	}

}
