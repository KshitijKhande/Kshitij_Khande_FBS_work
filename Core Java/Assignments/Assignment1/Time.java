class Time{
	int hours,minutes,seconds;
	
	Time(int hh,int min,int sec){
	this.hours=hh;
	this.minutes=min;
	this.seconds=sec;
	}
	void addTime(int hh,int min,int sec){
	this.hours=this.hours+hh;
	this.minutes=this.minutes+min;
	this.seconds=this.seconds+sec;
	
	if(this.seconds>=60){
        this.minutes+=this.seconds/60;
        this.seconds=this.seconds%60;
        }
        if(this.minutes>=60){
        this.hours+=this.minutes/60;
        this.minutes=this.minutes%60;
        }
	}
	void displayTime(){
	System.out.println(hours+":"+minutes+":"+seconds);
	}
}


class Add{
	public static void main(String[] args){
	Time t1=new Time(2,45,78);
	t1.displayTime();

	t1.addTime(1,20,30);
        t1.displayTime();
	
	}

}