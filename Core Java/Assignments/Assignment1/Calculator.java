class Calculator{

	void add(int a,int b){
	System.out.println("Hi1");
	System.out.println("Addition of" +a+ "and" +b+" is :" + (a+b));
	}
	void add(double x,double y){
	System.out.println("Hi2");
	System.out.println("Addition of" +x+ "and" +y+" is :" + (x+y));
	}
	void add(int a,double b){
	System.out.println("Hi3");
	System.out.println("Addition of" +a+ "and" +b+" is :" + (a+b));
	}
	void add(double b,int a){
	System.out.println("Hi4");
	System.out.println("Addition of" +a+ "and" +b+" is :" + (b+a));
	}
	void add(float f,float g){
	System.out.println("Hi5");
	System.out.println("Addition of" +f+ "and" +g+" is :" + (f+g));
	}


	void subtract(int a,int b){
	System.out.println("Fun1");
	System.out.println("Subtraction is" + (a-b));
	}
	void subtract(double x,double y){
	System.out.println("Hi2");
	System.out.println("Substraction is" + (x-y));
	}
	void subtract(int a,double b){
	System.out.println("Hi3");
	System.out.println("Subtraction is" + (a-b));
	}
	void subtract(double b,int a){
	System.out.println("Hi4");
	System.out.println("Subtraction is" + (b-a));
	}
	void subtract(float f,float g){
	System.out.println("Hi5");
	System.out.println("Subtraction is" + (f-g));	
	}


	void mul(int a,int b){
	System.out.println("Fun1");
	System.out.println("Multiplication is" + (a*b));
	}
	void mul(double x,double y){
	System.out.println("Fun2");
	System.out.println("Multiplication is" + (x*y));
	}
	void mul(int a,double b){
	System.out.println("Fun3");
	System.out.println("Multiplication is" + (a*b));
	}
	void mul(double b,int a){
	System.out.println("Fun4");
	System.out.println("Multiplication is" + (b*a));
	}
	void mul(float f,float g){
	System.out.println("Fun5");
	System.out.println("Multiplication is" + (f*g));	
	}


	void div(int a,int b){
	System.out.println("Fun1");
	System.out.println("Division is" + (a/b));
	}
	void div(double x,double y){
	System.out.println("Fun2");
	System.out.println("Division is" + (x/y));
	}
	void div(int a,double b){
	System.out.println("Fun3");
	System.out.println("Division is" + (a/b));
	}
	void div(double b,int a){
	System.out.println("Fun4");
	System.out.println("Division is" + (b/a));
	}
	void div(float f,float g){
	System.out.println("Fun5");
	System.out.println("Division is" + (f/g));	
	}
	
}
class Test{
	public static void main(String[] args){
	Calculator c1=new Calculator();
	c1.add(3,5);
	c1.add(3.5,5.6);
	c1.add(3,5.5);
	c1.add(5.6,3);
	c1.add(3.5f,5.6f);

	Calculator c2=new Calculator();
	c2.subtract(3,5);
	c2.subtract(3.5,5.6);
	c2.subtract(3,5.5);
	c2.subtract(5.6,3);
	c1.subtract(3.5f,5.6f);

	c1.mul(3,5);
	c1.mul(3.5,5.6);
	c1.mul(3,5.5);
	c1.mul(5.6,3);
	c1.mul(3.5f,5.6f);

	c2.div(3,5);
	c2.div(3.5,5.6);
	c2.div(3,5.5);
	c2.div(5.6,3);
	c1.div(3.5f,5.6f);
	}
}