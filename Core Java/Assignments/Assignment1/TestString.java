class TestString{
	public static void main(String[] args){
	String cName1="Firstbit";
	String cName2="Firstbit";
	String eName3="Infosys";
	String str=new String("Firstbit");

	if(cName1==cName2){
	System.out.println("Equal");
	}
	else{
	System.out.println("Not Equal");
	}

	if(cName1.equals(str)){
	System.out.println("Equal");
	}
	else{
	System.out.println("Not Equal");
	}

	}
}