package 자바.m_variable_scope;

public class scope {
	int x=22; // 여기서 (메인 함수 바깥에서) 선언한 변수는 메인함수 내부에서 사용 불가능하다.
	static int y=15;
	
	public void scopetest(String[] args)
	{
		System.out.println(x);
		
	}
	
	int joongboktest(int x) {
		x=5;
		return x;
	}
	
	static void statictest(String[] args)
	{
		y=2333; // y는 static한 값이므로 이 method 바깥의 y값을 바꿀 수 있음 -> 이 값을 사용하는 다른 method들에게도 영향을 끼침
		//System.out.println(x); // static한 필드라서 사용 불가능
		System.out.println(y); // static한 값이라 사용가능
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=3;
		x=232;
		System.out.println(x); // static한 method는 객체 생성없이도 사용가능함. 이전에 선언해놓은 x는 static한 값이 아니기 때문에 사용이 불가능하다.
		System.out.println(y); // y는 static하기 때문에 사용가능하다
		scope Scope = new scope();
		System.out.println(Scope.x); // 이런 식으로 활용 가능 static한 값을 가져 옴
		System.out.println(Scope.joongboktest(2)); // 해당 함수 내의 x와 실행한 함수 내의 x 그리고 4번 줄에 선언한 x는 모두 다름
		int x1=Scope.x;
		x1=39; // 가져와서 바꾼다
		System.out.println(Scope.x+" Scope.x의 값 "+x1+" Scope.x의 값을 저장하고 바꾼 x1의 값"); // 별개의 값이다
		Scope.statictest(args); // statictest함수는 static한 필드이므로 static y가 정상적으로 출력
		Scope.scopetest(args); // main은 static하지만 scopetest는 static하지 않으므로 22가 정상적으로 출력
		System.out.println(y); // y값이 바뀜
		scope Scope2 = new scope(); // 새로운 객체 생성
		Scope2.x=329; // 새로운 객체의 x값 변경
		System.out.println(Scope.x); // 둘이 다름
		System.out.println(Scope2.x);
		
		Scope2.y=32; // 새로운 객체의 static 값인 y변경
		System.out.println(Scope.y); // 모두 변경됨 c언어의 static과 비슷하다 생각하면 될듯.
		System.out.println(Scope2.y);
	}
	
}
