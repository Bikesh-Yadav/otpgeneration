#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

string generateOTP(int len)
{
	//all possible character for otp
	string str ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int n=str.length();
	
	//string to hold my otp
	string OTP;
	
	for(int i=1;i<=len;i++)
	OTP.push_back(str[rand()%n]);
	return(OTP);
}

int main()
{
	srand(time(NULL));
	//declare length of otp
	int len=6;
	printf("your otp=%s",generateOTP(len).c_str());
	return 0;
	
}
