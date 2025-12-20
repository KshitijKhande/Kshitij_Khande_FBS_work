class Employee{
	int eid;
	String ename;
	double bsalary;
	static double companyBonusRate=7.2;

	Employee(){
	this.eid=000;
	this.ename="III";
	this.bsalary=0;
	}
	Employee(int i,String n,int bs){
	this.eid=i;
	this.ename=n;
	this.bsalary=bs;
	}
	void calculateTotalSalary(){
	System.out.println("Total Salary="+(bsalary+(bsalary*companyBonusRate/100)));
	}
	void display(){
	System.out.println("Employee Id:"+this.eid);
	System.out.println("Employee Name:"+this.ename);
	System.out.println("Employee Basic Salary:"+this.bsalary);
	System.out.println("Company Bonus Rate:"+this.companyBonusRate);
	}


}
class employeeSalary{
	public static void main(String[] args){
	Employee e1=new Employee(456,"KK",420000);
	e1.display();
	e1.calculateTotalSalary();
	
	}

}