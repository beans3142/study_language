package �ڹ�.o_constructor;

public class car_class {
	String name;
	int number;
	
	public car_class(String name)
	{
		this.name=name;
	}
	
	public car_class()
	{
		this.name="�̸��� �𸣴� ����";
	}
	
	public void changecarname(String name)
	{
		this.name=name;
	}
	
	public void changecarname()
	{
		this.name="�̸��� �𸣴� ����";
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
	
	// �� ! �޽�� ���� ���Ƶ� �Ű������� ������ �ٸ��� �ٸ������� ��޵ȴ�..! �ſ� �����ϰ� �� �� ������.
	
	public int getcarnumber()
	{
		return number;
	}
}