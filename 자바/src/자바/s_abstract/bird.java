package s_abstract;

public abstract class bird {
	public abstract void sing();
	public void fly()
	{
		System.out.println("퍼덕 퍼덕");
	}
	// 메쏘드가 하나라도 추상메쏘드라면 클래스도 추상클래스가 됨.
	// 추상클래스라고 모두 추상메쏘드만 쓸 수 있는 것은 아님.
}
