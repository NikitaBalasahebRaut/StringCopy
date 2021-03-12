/*
    Problem statement :
 Accept string from user and copy the conetents into another string.
 Implement strcpy.
 */
 
 #include<stdio.h>
 
 void CopyStr(char Src[],char Dest[])
 {
    int i = 0;
	
    while(Src[i] != '\0')
	{
	   Dest[i] = Src[i];
	   i++;
	}
	Dest[i] = '\0';
 }
 
 int main()
 {
   char arr[30];
   char brr[30];
   
   printf("Enter The String \n");
   scanf("%[^'\n']s",arr);
   
   CopyStr(arr,brr);
   
   printf("string After copy : %s \n",brr);
 
 return 0;
 }
 
 /*
 
 output
 
 Enter The String
nikita
string After copy : nikita

*/