package 자바;

public class d_println {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("단순한"+"더하기");
		/* System.out.println("문자열 곱하기" * 3); */ // 파이썬처럼 문자열에 곱셈기호를 붙이는 것은 안되는 것 같다.
		/* System.out.println("쉼","표"); */ //파이썬 과는 다른것 같다.
		System.out.println("50과"+50+"은 같다."); // 다른 자료형끼리는 +로 결합하는 듯 하다.
		System.out.println("한 글자 치고~\t1탭 만큼 띄우고~\n엔터 한번 치고 한 글자 지우고\b"); // 다른 언어에서 사용 가능한 것들도 다 잘 돌아간다.
		System.out.println(52+4.2+1e4+"문자열"+true); // C언어 처럼 %d 이런식으로 정해서 출력하는게 아니라 ()안에 여러 자료형들이 들어가도 잘 출력된다!
		System.out.println("가나다라마바"+'사'+"아자차카타파하"); // C언어처럼 ' '와 " "의 역할이 다르다.
		System.out.println("\b"); // println은 아마 파이썬의 print와 비슷한 것 같다. 맨 뒤에 자동으로 개행이 일어난다. 자동개행을 없에는 방법또한 존재할 것이다.
	}

}
