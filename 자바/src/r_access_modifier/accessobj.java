package r_access_modifier;

public class accessobj {
	public int a = 3; // 어떤 클래스든 접근할 수 있다는 의미
	protected int b = 5; // 자기 자신, 자기 자신과 같은 패키지, 혹은 자신에게 상속받은 다른 자식 클래스에서는 접근할 수 있다는 것을 의미
	private int c=7; // 자기 자신만 접근 할 수 있다는 의미
	int d=9;
}
