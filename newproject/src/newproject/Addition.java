package newproject;

import java.util.Scanner;

public class Addition {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		String name, lastName;
		System.out.print("Isim : ");
		name = input.next();
		System.out.print("SoyAd :");
		lastName = input.next();

		System.out.printf("%s %s Welcome", name, lastName);
	}

}
