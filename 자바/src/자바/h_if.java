package �ڹ�;

public class h_if {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// �⺻���� Ȱ��
		
		int a=5;
		int b=3;
		
		//if a==b // C���ó�� if (����) {  } �� ���� �ۼ��ȴ�. ()���� �ȵȴ�.
		
		if (a>b) {
			System.out.println("a>b");
		}
		else if (a==b)
		{
			System.out.println("a==b");
		}
		else
		{
			System.out.println("a<b");
		}
		
		/*
		while (a<b)
		{
			b--;
		}
		else
		{
			
		}
		*/ // ���̼�ó�� while (�Ҹ���) �� else������ �Ѿ�� ���� �ȵȴ�.
		
		// ������� C���� ����� �� ����. 
		
		System.out.println(a>b ? a : b); // ���� �����ڵ� �� �ȴ� !
	}

}
