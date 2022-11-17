package hafta7;

public class person {
protected String adi ,soyadi ,email;

protected person(String adi, String soyadi, String email) {
	this.adi = adi;
	this.soyadi = soyadi;
	this.email = email;
}

protected String getAdi() {
	return adi;
}

protected void setAdi(String adi) {
	this.adi = adi;
}

protected String getSoyadi() {
	return soyadi;
}

protected void setSoyadi(String soyadi) {
	this.soyadi = soyadi;
}

protected String getEmail() {
	return email;
}

protected void setEmail(String email) {
	this.email = email;
}
protected String giris() {
	return "giris yapti";
}

}
