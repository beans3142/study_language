package �ڹ�.m_variable_scope;

public class scope {
	int x=22; // ���⼭ (���� �Լ� �ٱ�����) ������ ������ �����Լ� ���ο��� ��� �Ұ����ϴ�.
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
		y=2333; // y�� static�� ���̹Ƿ� �� method �ٱ��� y���� �ٲ� �� ���� -> �� ���� ����ϴ� �ٸ� method�鿡�Ե� ������ ��ħ
		//System.out.println(x); // static�� �ʵ�� ��� �Ұ���
		System.out.println(y); // static�� ���̶� ��밡��
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=3;
		x=232;
		System.out.println(x); // static�� method�� ��ü �������̵� ��밡����. ������ �����س��� x�� static�� ���� �ƴϱ� ������ ����� �Ұ����ϴ�.
		System.out.println(y); // y�� static�ϱ� ������ ��밡���ϴ�
		scope Scope = new scope();
		System.out.println(Scope.x); // �̷� ������ Ȱ�� ���� static�� ���� ���� ��
		System.out.println(Scope.joongboktest(2)); // �ش� �Լ� ���� x�� ������ �Լ� ���� x �׸��� 4�� �ٿ� ������ x�� ��� �ٸ�
		int x1=Scope.x;
		x1=39; // �����ͼ� �ٲ۴�
		System.out.println(Scope.x+" Scope.x�� �� "+x1+" Scope.x�� ���� �����ϰ� �ٲ� x1�� ��"); // ������ ���̴�
		Scope.statictest(args); // statictest�Լ��� static�� �ʵ��̹Ƿ� static y�� ���������� ���
		Scope.scopetest(args); // main�� static������ scopetest�� static���� �����Ƿ� 22�� ���������� ���
		System.out.println(y); // y���� �ٲ�
		scope Scope2 = new scope(); // ���ο� ��ü ����
		Scope2.x=329; // ���ο� ��ü�� x�� ����
		System.out.println(Scope.x); // ���� �ٸ�
		System.out.println(Scope2.x);
		
		Scope2.y=32; // ���ο� ��ü�� static ���� y����
		System.out.println(Scope.y); // ��� ����� c����� static�� ����ϴ� �����ϸ� �ɵ�.
		System.out.println(Scope2.y);
	}
	
}
