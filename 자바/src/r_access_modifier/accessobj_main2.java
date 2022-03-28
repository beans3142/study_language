package r_access_modifier;

import r_access_modifier.accessobj;

public class accessobj_main2 {
	public void main(String[] args)
	{
		accessobj inherits=new accessobj();
		System.out.println(inherits.a);
		System.out.println(inherits.b);
		//System.out.println(inherits.c); // 에러 발생
		System.out.println(inherits.d);
	}
}
