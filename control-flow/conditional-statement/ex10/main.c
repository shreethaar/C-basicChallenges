/*Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include <stdio.h>

int main() {
	int maths,phy,chem;
	printf("Enter your marks for Maths\n");
	scanf("%d",&maths);
	printf("Enter your marks for Physics\n");
	scanf("%d",&phy);
	printf("Enter your marks for Chemistry\n");
	scanf("%d",&chem);
	int total=maths+phy+chem;
	if(total>=190&&maths>=65&&phy>=55&&chem>=50) {
		printf("You are eligible\n");
	}
	else if((maths+phy)>=140&&maths>=65&&phy>=55&&chem>=50){
		printf("You are eligible\n");
	}
	else {
		printf("You are not eligible.");
	}
	return 0;
}

