#include<stdio.h>
main() {
	float marks ;
	
 printf("Enter your Marks :  ");
 scanf("%f",&marks);
 
 (int)marks;
 
 
 if(100<marks || 0>marks){
 	printf("Wrong Input");
 }
 
 
else{
	switch((int)marks/10)

	{
		
		
		case 10:
		case 9: printf("A-Grade");
		break;
		case 8: printf("B-Grade");
		break;
		case 7: printf("C-Grade");
		break;
		case 6: printf("D-Grade");
		break;
		case 5: printf("E-Grade");
		break;
		default: printf("fail");
		break;	
	}
}
}
