package �ڹ�.p_package;

import �ڹ�.p_package.hello;
// ���̽�� ����ϰ� ��� ���� *�� �ٿ� ��� �������°� �Ȱ���

public class p_package_use {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		hello h = new hello();
		// ���� import Ȥ�� ctrl+shift+O
		hello.main(args);
		// p_package��� ��Ű���� �����ͼ� hello class�ȿ� main �޽�带 �����Ͽ���.
		�ڹ�.p_package.hello.main(args);
		// import ���̴� �̷��� ��� ���� �翬������ ������
	}

}
