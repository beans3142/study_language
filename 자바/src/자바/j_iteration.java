package �ڹ�;

public class j_iteration {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for(int i = 0;i<15;i++)
		{
			System.out.println(i);
		}
		// C�� �Ȱ���.
		
		int idx=0;
		while (idx<15)
		{
			System.out.println(idx++);
		}
		// �̰͵� �Ȱ���.
		
		idx=15;
		do {
			System.out.println(idx);
			idx++;
		} while (idx<30);
		
		// �Ȱ���.
		
		// for each ���� ���̽��� for [���� ������] in [���� �ڷ���]�� ����� Ȱ��
		
		int[] arr = {1,2,3,4,5,6,7};
		for (int i:arr)
		{
			System.out.println(i);
		}
	}

}
