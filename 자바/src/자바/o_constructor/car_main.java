package 자바.o_constructor;

public class car_main {
	public static void main(String[] args) {
		car_class car= new car_class("소나타");
		car.number=3142;
		System.out.println(car.name);
		car.changecarname("아무도안타");
		System.out.println(car.name);
		car.changecarname();
		System.out.println(car.name);
		System.out.println(car.getcarnumber());
		car.changecarname("제네",4);
		System.out.println(car.name);
	}
}