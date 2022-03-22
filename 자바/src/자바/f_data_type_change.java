package 자바;

public class f_data_type_change {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// 작은 것에서 큰 것
		int intnum=102;
		double doublenum=intnum;
		System.out.println("정수형 "+intnum+" 실수형 "+doublenum);
		
		// 큰 것에서 작은 것
		doublenum=102.59; // 정수로 표현 불가능하도록
		// intnum=doublenum; // 에러 발생
		intnum=(int)doublenum; // 강제변환
		System.out.println("정수형 "+intnum+" 실수형 "+doublenum);
		
		// C언어와 대체적으로 비슷한 느낌
	}

}
