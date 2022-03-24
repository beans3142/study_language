package 자바;

public class n_enum {

	public static final String male = "MALE";
	public static final String female = "FEMALE";
	public static void main(String[] args) {
		String gender1;
		
		gender1=n_enum.male;
		gender1=n_enum.female;
		
		gender gender2,gender3;
		gender2=gender.male;
		gender3=gender.female;
		
		System.out.println(gender2);
		System.out.println(gender3);
		
		// 쓸일이 없어보이는데..
	}

}

enum gender {
	male,female;
}
