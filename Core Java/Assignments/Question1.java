class Bill{
	int cid;
	String cname;
	int bunit;
	static double ratePerUnit=7.2;

	Bill(){
	this.cid=000;
	this.cname="III";
	this.bunit=0;
	}
	Bill(int i,String n,int b){
	this.cid=i;
	this.cname=n;
	this.bunit=b;
	}
	void calculateBill(){
	System.out.println("Total Electricity Bill="+(bunit*ratePerUnit));
	}
	void display(){
	System.out.println("Customer Id:"+this.cid);
	System.out.println("Customer Name:"+this.cname);
	System.out.println("Customer Billing Unit:"+this.bunit);
	System.out.println("Rate Per Unit:"+this.ratePerUnit);
	}


}
class electricityBill{
	public static void main(String[] args){
	Bill b1=new Bill(456,"KK",420);
	b1.display();
	b1.calculateBill();
	
	}

}