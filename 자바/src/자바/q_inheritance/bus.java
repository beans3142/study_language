package �ڹ�.q_inheritance;

public class bus extends car // extends �θ�Ŭ���� -> �θ�Ŭ������ ������ �ִ� ���� ��ӹ���.
{
	public static void main(String[] args)
	{
		bus b = new bus();
		b.id=3928;
		b.type="�������";
		b.run();
		System.out.println("���� ������ȣ : "+b.id+"\n���� ����Ÿ�� : "+b.type);
		b.run();
	}
}
