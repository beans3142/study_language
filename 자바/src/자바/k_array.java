package �ڹ�;

public class k_array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = new int[10]; // 
		/*
		 * int[] <- ��Ʈ�� �迭 ���� 
		 * array <- �迭�� 
		 * = <- ����,����
		 * new <- �޸� �Ҵ�, �ν��Ͻ� ����, ������ ������ �Ѵٰ� �Ѵ�. �ڹٿ��� �ϳ� �߿��غ��̴� �༮�̴�.
		 * int[����] <- �迭�� ũ�� (����)
		 */
		
		// �迭 ���� �κп����� C�� ���̰� �ϳ� �����ߴ�.
		
		for(int i = 0; i<10; i++)
		{
			System.out.println(i+"��° �ε������� : "+array[i]); // �⺻������ 0�� ���ִ�.
		}
		
		int[] array2 = new int[] {1,2,3,4,5,6}; // ���� �̷��� �ִ´�!
		
		for(int i=0;i<6;i++)
		{
			System.out.println(array2[i]);
		}
		
		int[] array3 = {1,2,3}; // ? �̰͵� �ȴ� !
		System.out.println(array3[2]);
		
		// �迭 Ȱ��
		
		System.out.println(array.length); // �迭�� ũ��
		
		int[][] array_2d = new int[3][]; // �̷������� �����Ѵ�.
		
		/*
		int[][] array_2d = new int[3][2] {{1,2},{3,4},{5,6}};
		int[][] array_2d = new int[3][2] {{1,2,3},{4,5,6}};
		*/ //�̰� �� �ȵɱ�..
		
		int[][] array_2d_2={{1,2},{3,4},{5,6}};
		
	}

}
