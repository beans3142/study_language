package �ڹ�.o_constructor;

public class car_main {
	public static void main(String[] args) {
		car_class car= new car_class("�ҳ�Ÿ");
		car.number=3142;
		System.out.println(car.name);
		car.changecarname("�ƹ�����Ÿ");
		System.out.println(car.name);
		car.changecarname();
		System.out.println(car.name);
		System.out.println(car.getcarnumber());
		car.changecarname("����",4);
		System.out.println(car.name);
	}
}