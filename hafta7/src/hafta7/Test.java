package hafta7;

public class Test {

	public static void main(String[] args) {
	person p=new person ("Ahmet","Mehmet","ahmet@gmail.com");
	System.out.println(p.getAdi()+" "+p.getSoyadi()+" "+p.giris());
	
	//AkademikPersonel a=new AkademikPersonel("Ali","Veli","a@gmail.com","Bilgisayar Muh");
	//System.out.println(a.getDepartman()+" " +a.getAdi()+" "+a.getSoyadi()+" "+a.giris());
	
	Hoca h=new Hoca("Hasan","Huseyin","h@gmail.com","Bil.Muh","Doc.Dr");
	System.out.println(h.getDepartman()+" " +h.getUnvan()+" "+h.getAdi()+" "+h.getSoyadi()+ " "+h.giris());

    Student s=new Student("Leyla","Mecnun","l@gmail.com",1000);
    System.out.println(s.getOgrId()+" numarali "+s.getAdi()+" "+s.getSoyadi()+ " "+s.giris());
    
    System.out.println(h.getDepartman()+" " +h.getUnvan()+" "+h.getAdi()+" "+h.getSoyadi()+ " "+h.cikis());
    
}
	
}