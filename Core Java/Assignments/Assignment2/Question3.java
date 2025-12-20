class LibraryUser{
	String name;
	int daysLate;
	static int finePerDay=100;

	LibraryUser(){
	this.name="III";
	this.daysLate=0;
	}
	LibraryUser(String n,int dl){
	this.name=n;
	this.daysLate=dl;
	}
	void calculateFine(){
	System.out.println("Total Fine="+(daysLate*finePerDay));
	}
	void display(){
	System.out.println("User Name:"+this.name);
	System.out.println("Days Late:"+this.daysLate);
	System.out.println("Fine Per Day:"+this.finePerDay);
	}


}
class libraryFine{
	public static void main(String[] args){
	LibraryUser l1=new LibraryUser("KK",4);
	l1.display();
	l1.calculateFine();
	
	}

}