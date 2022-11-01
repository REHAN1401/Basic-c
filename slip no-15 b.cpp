  #include<stdio.h>
int  main()
{
	float r,area,circum,vol;
	int ch;
	printf("1.area of circle\n 2.circumference of circle\n 3.volume of sphere\n");
	printf("enter your choice:");
	scanf("%d",&ch);
	
    switch(ch)
	{
	  case 1:
	  printf("\nenter the radius of circle:");
	  scanf("%f",&r);
	  area=3.14*r*r;
	  printf("\narea of circle is:%f",area);
	  break;
	  
	  case 2:
	  printf("enter circumference of circle:");
	  scanf("%f",&r);
	  circum=2*3.14*r;
	  printf("\ncircumference of circle is:%f",circum);
	  break;
	  
	  case 3:
	  printf("enter volume of sphere:");
	  scanf("%f",&r);
	  vol=4/3*3.14*r*r*r;
	  printf("\nvolume of sphere is:%f",vol);	
	  break;	
	  
	  default: printf("enter choice from option");
	}
	
	
	
	
	
}
