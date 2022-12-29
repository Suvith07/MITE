//Write a C program to find the eligibility of admission for a professional course based on the following criteria

#include<stdio.h>
int main()
{
    int marksMaths,marksPhysics,marksChemistry;
    printf("\nEnter the Marks in Maths ");
    scanf("%d",&marksMaths);
    printf("\nEnter the Marks in Physics ");
    scanf("%d",&marksPhysics);
    printf("\nEnter the Marks in Chemistry ");
    scanf("%d",&marksChemistry);
    if(marksMaths>=65 && marksPhysics>=55 && marksChemistry>=50)
    printf("\nThe Candidate is Eligible For Admission");
    else if((marksMaths+marksPhysics+marksChemistry)>=190)
    printf("\nThe Candidate is Eligible For Admission");
    else if((marksMaths+marksPhysics)>=140)
    printf("\nThe Candidate is Eligible For Admission");
    else
    printf("\nThe Candidate is NOT Eligible For Admission");
    return 0;
}