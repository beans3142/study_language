package 자바.o_constructor;

public class car_class {
	String name;
	int number;
	
	public car_class(String name)
	{
		this.name=name;
	}
	
	public car_class()
	{
		this.name="이름도 모르는 똥차";
	}
	
	public void changecarname(String name)
	{
		this.name=name;
	}
	
	public void changecarname()
	{
		this.name="이름도 모르는 똥차";
	}
	
	public void changecarname(String name,int repeat)
	{
		String newcarname="";
		for(int i = 0; i<repeat;i++)
		{
			newcarname+=name;
		}
		this.name=newcarname;
	}
	
	// 와 ! 메쏘드 명이 같아도 매개변수의 개수가 다르면 다른것으로 취급된다..! 매우 유용하게 쓸 수 있을듯.
	
	public int getcarnumber()
	{
		return number;
	}
}