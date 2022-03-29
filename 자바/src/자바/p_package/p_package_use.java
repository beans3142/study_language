package 자바.p_package;

import 자바.p_package.hello;
// 파이썬과 비슷하게 사용 가능 *을 붙여 모두 가져오는것 똑같음

public class p_package_use {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		hello h = new hello();
		// 직접 import 혹은 ctrl+shift+O
		hello.main(args);
		// p_package라는 패키지를 가져와서 hello class안에 main 메쏘드를 실행하였다.
		자바.p_package.hello.main(args);
		// import 없이는 이렇게 사용 가능 당연하지만 불편함
	}

}
