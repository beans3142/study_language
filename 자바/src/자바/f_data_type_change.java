package �ڹ�;

public class f_data_type_change {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// ���� �Ϳ��� ū ��
		int intnum=102;
		double doublenum=intnum;
		System.out.println("������ "+intnum+" �Ǽ��� "+doublenum);
		
		// ū �Ϳ��� ���� ��
		doublenum=102.59; // ������ ǥ�� �Ұ����ϵ���
		// intnum=doublenum; // ���� �߻�
		intnum=(int)doublenum; // ������ȯ
		System.out.println("������ "+intnum+" �Ǽ��� "+doublenum);
		
		// C���� ��ü������ ����� ����
	}

}
