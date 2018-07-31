#include<stdio.h>
#include<math.h>

void currency(){
	int r,d,t,input;
	printf("enter your code 1 for dollar to ruppes\n");
	printf("enter your code 2 for ruppes to dollar\n");
	printf("enter your code 3 for exit \n");
	scanf("%d",&input);
	if(input==1)
	{
	printf("enter your amount\n");
	scanf("%d",&d);
	r=d*(69);
	printf("you have rupees %d \n",r);
	}
	else if (input==2)
	{
	printf("enter your amount\n");
	scanf("%d",&r);
	d=r/(69);
	printf("you have dollar %d \n",d);
	}
	else if (input==3){
printf("thnx for using this application made by utkarsh chidar\n");
}

}


void temprature(){
	int tc,tf,input;
	printf("enter your code 1 for Fahrenheit to Celsius\n");
	printf("enter your code 2 for Celsius to Fahrenheit\n");
	printf("enter your code 3 for exit \n");
	scanf("%d",&input);
	if(input==1)
	{
	printf("enter your temprature\n");
	scanf("%d",&tf);
	tc = (tf - 32) / 1.8;
	printf("after convertion to Celsius %d \n",tc);
	}
	else if (input==2)
	{
	printf("enter your temprature\n");
	scanf("%d",&tc);
	tf = tc * 1.8 + 32;
	printf("after convertion to Fahrenheit %d \n",tf);
	}
	else if (input==3){
    printf("thnx for using this application made by utkarsh chidar\n");
    }

}


void weight(){
	int mg,kg,g,input;
	printf("enter your code 1 for Grams to Kilograms\n");
	printf("enter your code 2 for Grams to Milligrams\n");
	printf("enter your code 3 for Kilograms to Grams\n");
	printf("enter your code 4 for Kilograms to Milligrams\n");
	printf("enter your code 5 for Milligrams to Kilograms\n");
	printf("enter your code 6 for Milligrams to Grams\n");
	printf("enter your code 7 for exit \n");
	scanf("%d",&input);
	if(input==1)
	{
	printf("enter your weight in Grams\n");
	scanf("%d",&g);
	kg = g / 1000;
	printf("you have Kilograms %d \n",kg);
	}
	else if (input==2)
	{
	printf("enter your weight in Grams\n");
	scanf("%d",&g);
	mg = g * 1000;
	printf("you have milligrams %d \n",mg);
	}
	else if (input==3)
	{
	printf("enter your weight in Kilograms\n");
	scanf("%d",&kg);
	g = kg * 1000;
	printf("you have grams %d \n",g);
	}
	else if (input==4)
	{
	printf("enter your weight in Kilograms\n");
	scanf("%d",&kg);
	mg = kg * 1000000;
	printf("you have milligrams %d \n",mg);
	}
	else if (input==5)
	{
	printf("enter your weight in MilliGrams\n");
	scanf("%d",&mg);
	kg = mg / 1000000;
	printf("you have Kilograms %d \n",kg);
	}
	else if (input==6)
	{
	printf("enter your weight in MilliGrams\n");
	scanf("%d",&mg);
	g = mg / 1000;
	printf("you have grams %d \n",g);
	}
	else if (input==7){
    printf("thnx for using this application made by utkarsh chidar\n");
    }
	
}


void length(){
	int cm,inc,ft,input;
	printf("enter your code 1 for Centimeter to feet\n");
	printf("enter your code 2 for Centimeter to inche\n");
	printf("enter your code 3 for feet to Centimeter\n");
	printf("enter your code 4 for feet to inche\n");
	printf("enter your code 5 for inche to feet\n");
	printf("enter your code 6 for inche to Centimeter\n");
	printf("enter your code 3 for exit \n");
	scanf("%d",&input);
	if(input==1)
	{
	printf("enter your weight in Centimeter\n");
	scanf("%d",&cm);
	ft = cm / 30.48;
	printf("you have feet %d \n",ft);
	}
	else if (input==2)
	{
	printf("enter your weight in Centimeter\n");
	scanf("%d",&cm);
	inc = cm / 2.54 ;
	printf("you have inche %d \n",inc);
	}
	else if (input==3)
	{
	printf("enter your weight in feet\n");
	scanf("%d",&ft);
	cm = ft * 30.48;
	printf("you have Centimeter %d \n",cm);
	}
	else if (input==4)
	{
	printf("enter your weight in feet\n");
	scanf("%d",&ft);
	inc = ft * 12;
	printf("you have inche %d \n",inc);
	}
	else if (input==5)
	{
	printf("enter your weight in inche\n");
	scanf("%d",&inc);
	ft = inc / 12 ;
	printf("you have feet %d \n",ft);
	}
	else if (input==6)
	{
	printf("enter your weight in inche\n");
	scanf("%d",&inc);
	cm = inc * 2.54 ;
	printf("you have Centimeter %d \n",cm);
	}
	else if (input==7){
    printf("thnx for using this application made by utkarsh chidar\n");
    }
}


void time(){
	int min, hr,input;
	printf("enter your code 1 for minute to hour\n");
	printf("enter your code 2 for hour to minute\n");
	printf("enter your code 3 for exit \n");
	scanf("%d",&input);
	if(input==1)
	{
	printf("enter your time in minute\n");
	scanf("%d",&min);
	hr = min / 60;
	printf("you have hour %d \n",hr);
	}
	else if (input==2)
	{
	printf("enter your time in hour\n");
	scanf("%d",&hr);
	min = hr * 60;
	printf("you have minute %d \n",min);
	}
	else if (input==3){
    printf("thnx for using this application made by utkarsh chidar\n");
    }
}




void main()
{
int r,d,t,code,x=1;
printf("enter your code 1 for currency conversion   \n");
printf("enter your code 2 for temprature conversion \n");
printf("enter your code 3 for weight conversion     \n");
printf("enter your code 4 for length                \n");
printf("enter your code 5 for time                  \n");
printf("enter your code 6 for exit                  \n");
scanf("%d",&code);
if(code==1)
{
	currency();
}
else if (code==2)
{
	temprature();
}
else if (code==3)
{
	weight();
}else if (code==4)
{
	length();
}else if (code==5)
{
	time();
}
else if (code==6){
printf("thnx for using this application made by utkarsh chidar");
}



}