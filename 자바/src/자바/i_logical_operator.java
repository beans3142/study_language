package 자바;

public class i_logical_operator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		boolean t=true;
		boolean f=false;
		System.out.println(t&&t);
		System.out.println(t&&f);
		System.out.println(f&&f);
		System.out.println(t||t);
		System.out.println(t||f);
		System.out.println(f||f);
		System.out.println(t^t);
		System.out.println(t^f);
		System.out.println(f^f);
		System.out.println(!t);
		System.out.println(!f);
		
		// C랑 똑같다.
	}

}
