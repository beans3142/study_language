package 자바.q_inheritance;

public class bus extends car // extends 부모클래스 -> 부모클래스가 가지고 있는 것을 상속받음.
{
	public static void main(String[] args)
	{
		bus b = new bus();
		b.id=3928;
		b.type="전기버스";
		b.run();
		System.out.println("현재 차량번호 : "+b.id+"\n현재 차량타입 : "+b.type);
		b.run();
	}
}
