package hafta7;

public abstract class AkademikPersonel extends person {
 protected String departman ;

protected AkademikPersonel(String adi, String soyadi, String email, String departman) {
	super(adi, soyadi, email);
	this.departman = departman;
}

protected String getDepartman() {
	return departman;
}

protected void setDepartman(String departman) {
	this.departman = departman;
}
protected String giris() {
	return "Fakulte kapisindan giris yapti";
}
protected abstract String cikis();
}
