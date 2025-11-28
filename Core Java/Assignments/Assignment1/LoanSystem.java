class Student{
	int rollno;
	String name;
	double percentage;
	Student(int rn,String n,double p){
	//System.out.println("Parametrised Constructor Called");
	this.rollno=rn;
	this.name=n;
	this.percentage=p;
	}

	void getdetails(){
	System.out.println("Student's Roll No: "+ this.rollno);
	System.out.println("Student's Name"+ this.name);
	System.out.println("Student's Percentage: "+ this.percentage);
	}
	void checkLoan(){
	if(percentage>=80){
	System.out.println("Loan Approved = 2 Lakh");
	}
	else if(percentage>=60 && percentage<80){
	System.out.println("Loan Approved = 1 Lakh");
	}
	else if(percentage>=40 && percentage<60){
	System.out.println("Loan Approved = 50 Thousand");
	}
	else{
	System.out.println("No Loan Approved");
	}
	}
}
class Employee{
	int id;
	String name;
	double salary;

	Employee(int i,String n,double s){
	//System.out.println("Parametrised Constructor Called");
	this.id=i;
	this.name=n;
	this.salary=s;
	}

	void getdetails(){
	System.out.println("Employee Id: "+ this.id);
	System.out.println("Employee Name"+ this.name);
	System.out.println("Employee Annual Salary: "+ this.salary);
	}

	void checkLoan(){
	if(salary>=1200000){
	System.out.println("Loan Approved = 7 Lakh");
	}
	else if(salary>=1000000 && salary<1200000){
	System.out.println("Loan Approved = 6 Lakh");
	}
	else if(salary>=600000 && salary<1000000){
	System.out.println("Loan Approved = 5 Lakh");
	}
	else if(salary>=400000 && salary<600000){
	System.out.println("Loan Approved = 5 Lakh");
	}
	else{
	System.out.println("No Loan Approved");
	}
	}
	
}
class Bank{
	public static void main(String[] args){
	Student s1=new Student(1,"Kshitij",85);
	s1.getdetails();
	s1.checkLoan();
	
	Student s2=new Student(2,"Kshitij",65);
	s2.getdetails();
	s2.checkLoan();

	Employee e1=new Employee(11,"Sunil",650000);
	e1.getdetails();
	e1.checkLoan();
	
	}
}