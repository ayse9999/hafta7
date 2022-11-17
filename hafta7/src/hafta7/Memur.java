package hafta7;

public class Memur extends person {
	
protected String bolum;

protected String getBolum() {
	return bolum;
}

protected void setBolum(String bolum) {
	this.bolum = bolum;
}

protected Memur(String adi, String soyadi, String email, String bolum) {
	super(adi, soyadi, email);
	this.bolum = bolum;
}
protected String giris() {
	return "Fakulte kapisindan giris yapti";
}

}
