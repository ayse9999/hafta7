package arrayList;

import java.util.ArrayList;

public class arrayList {

	public static void main(String[] args) {
		ArrayList<String>    item=new ArrayList<String>();
		item.add("red");
		item.add("yellow");
		item.add(0,"green");
		for(String renk:item){
			
			System.out.print(" " +renk);
			
			
		}
		item.remove("red");
for(String renk:item){
	System.out.print(" ");
			System.out.print(" " +renk);
			
			
		}
System.out.println(" ");

System.out.print(item.get(1));

System.out.println(item.contains("red")? "evet var": "hayýr yok");
	}
	

}
