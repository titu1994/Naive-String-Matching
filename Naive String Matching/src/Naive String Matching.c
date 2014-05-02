/*
 ============================================================================
 Name        : Naive.c
 Author      : Somshubra Majumdar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<conio.h>
#include<string.h>
int match(char st[100],char pat[100]);
int main() {
	char st[100],pat[100];
	int status;

	setbuf(stdout, NULL);

	printf("*** Naive String Matching Algorithm ***\n");
	printf("Enter the String.\n");
	gets(st);
	printf("Enter the pattern to match.\n");
	gets(pat);
	status=match(st,pat);
	if(status==-1)
		printf("\nNo match found");
	else
		printf("Match has been found on %d position.",status);
	return 0;
}
int match(char st[100],char pat[100]) {
	int n,m,i,j,count=0,temp=0;
	n=strlen(st);
	m=strlen(pat);
	for(i=0;i<=n-m;i++)
	{
		temp++;
		for(j=0;j<m;j++)
		{
			if(st[i+j]==pat[j])
				count++;
		}
		if(count==m)
			return temp;
		count=0;
	}
	return -1;
}
