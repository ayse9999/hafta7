package hafta7;

public class ArGor extends AkademikPersonel {
	protected String unvanArgor;

	protected ArGor(String adi, String soyadi, String email, String departman, String unvanArgor) {
		super(adi, soyadi, email, departman);
		this.unvanArgor = unvanArgor;
	}

	protected String getUnvanArgor() {
		return unvanArgor;
	}

	protected void setUnvanArgor(String unvanArgor) {
		this.unvanArgor = unvanArgor;
	}
	 protected String cikis() {
	    	return "Fakulte B kapisindan cikis yaptı";
	    	
	    }

}
