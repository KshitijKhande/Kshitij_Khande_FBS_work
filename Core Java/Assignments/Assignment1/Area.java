class Shape{

	void areaTriangle(double b,double h){
	System.out.println("Area of triangle :" +(0.5*b*h));
	}

	void areaRectangle(double l,double b){
	System.out.println("Area of Rectangle :" +(l*b));
	}

	void areaCircle(double r){
	System.out.println("Area of circle:" +(3.14*r*r));
	}
}

class Area{
	public static void main(String[] args){
	Shape s1=new Shape();
	s1.areaTriangle(7,8);
	s1.areaRectangle(8,5);
	s1.areaCircle(6.5);
	
	}
}
