package 자바;

public class e_constant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 상수상수 정상 수
		// const int constint = 5; // C언어처럼 선언해 보았는데 안된다.
		// const constint=15;
		final int constant = 10; // 자바에서는 final을 앞에 붙여 상수를 만든다.
		System.out.println(constant);
		
		/*
		constant=15;
		System.out.println(constant);
		*/ //당연하게도 상수의 값을 변경하려 하면 에러가 발생한다.
		
		
	}

}
