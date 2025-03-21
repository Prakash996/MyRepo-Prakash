/*
filename: case2.cpp
details: Program to find the formula for give expression.  Expression: 1+4+9+16+….+100
author: J.P.Prakash
date: 07/04/2020
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//main function
int main(int argc,char *argv[])
{
    int iNumb, iSum; //declaring integer variables
	if(argc==2)
	{
		if(strcmp(argv[1],"-h")==0)     //created a help command
        	{
			cout<<"\n Usage of file --> \n"
					"\t filename.exe argument"<<endl<<
					"		or"<<endl<<
					"\t ./filename.out argument"<<endl;
		}	
	}
	else
	{	
		cout<<"Enter Input: ";
		cin>>iNumb; //read 'iNumb'
		iSum=0;
		for(int i=1; i<=iNumb; ++i)	//checks the argument value
	 		iSum += (i*i);	//gives output based on the expression: 1+4+9+16+….+100
		if(iSum==0)
	    		cout<<"\n Invalid (user may have entered Zero / negative values / alphabet / special characters) \n";
	    	else
	    		cout << "Output: " << iSum;
	} 
	return 0;
}
