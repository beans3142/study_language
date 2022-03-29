package 자바.r_access_modifier;

public class accessobj_main extends accessobj{

	public static void main(String[] args) {
		accessobj_main inherits=new accessobj_main();
		System.out.println(inherits.a);
		System.out.println(inherits.b);
		//System.out.println(inherits.c); // 에러 발생
		System.out.println(inherits.d);
		
		// public > protected > default > private 순으로
	}

}
