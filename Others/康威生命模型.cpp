#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <unistd.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<< "�п�J�@�ɤj�pNXN: ";
	int n;cin>> n;
	cout << "�ХH�y�Ф覡��J���N���I�A�U�ӼƦr�ήy�Ф������ݭn�H�Źj���}�C" <<endl;
	printf("�`�N�I�}�C����ɬO1~%d(1~%d,1~%d)�A�ŶW�L��ɡA�W�L�ɵ�����J�G",n,n,n);
	
	/*
     
     input sample :
     (1)1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 11 11 12 12 13 13 14 14 15 15 16 16 17 17 18 18 19 19 20 20 0 0 

     (2)1 1 1 3 1 5 1 7 1 9 1 11 1 13 1 15 1 17 1 19 2 2 2 4 2 6 2 8 2 10 2 12 2 14 2 16 2 18 2 20  3 1 3 3 3 5 3 7 3 9 3 11 3 13 3 15 3 17 3 19  
        4 2 4 4 4 6 4 8 4 10 4 12 4 14 4 16 4 18 4 20 5 1 5 3 5 5 5 7 5 9 5 11 5 13 5 15 5 17 5 19 6 2 6 4 6 6 6 8 6 10 6 12 6 14 6 16 6 18 6 20 
        7 1 7 3 7 5 7 7 7 9 7 11 7 13 7 15 7 17 7 19 8 2 8 4 8 6 8 8 8 10 8 12 8 14 8 16 8 18 8 20 9 1 9 3 9 5 9 7 9 9 9 11 9 13 9 15 9 17 9 19 
        10 2 10 4 10 6 10 8 10 10 10 12 10 14 10 16 10 18 10 20 11 1 11 3 11 5 11 7 11 9 11 11 11 13 11 15 11 17 11 19 
        12 2 12 4 12 6 12 8 12 10 12 12 12 14 12 16 12 18 12 20 13 1 13 3 13 5 13 7 13 9 13 11 13 13 13 15 13 17 13 19 
        14 2 14 4 14 6 14 8 14 10 14 12 14 14 14 16 14 18 14 20 15 1 15 3 15 5 15 7 15 9 15 11 15 13 15 15 15 17 15 19 
        16 2 16 4 16 6 16 8 16 10 16 12 16 14 16 16 16 18 16 20 17 1 17 3 17 5 17 7 17 9 17 11 17 13 17 15 17 17 17 19 
        18 2 18 4 18 6 18 8 18 10 18 12 18 14 18 16 18 18 18 20 19 1 19 3 19 5 19 7 19 9 19 11 19 13 19 15 19 17 19 19 
        20 2 20 4 20 6 20 8 20 10 20 12 20 14 20 16 20 18 20 20 0 0  

     */

    //�ŧi�ܼ�
    int integer=1,a,b,k,q,counter=0,holder=0,container=0;

   	//�ŧi��ӹs�}�C
    int table1[n+2][n+2];
    int table2[n+2][n+2];
         
	int i,j;
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			table1[i][j]=0;table2[i][j]=0; 
		}
	}

   	//Ū���Ҧ��y�и�T
   	while (integer)
	{
      scanf(" %d",&a);
         if(a>n)
         {
            integer = 0;
            break;
         }
         if(a<1)
         {
            integer = 0;
            break;
         }
      scanf(" %d",&b);
         if(b>n)
         {
            integer = 0;
            break;
         }
         if(b<1)
         {
            integer = 0;
            break;
         }

      table1[a][b] = 1;
     }
	
	//��X��l���AS(0)
    system("cls");

    cout <<"Round " << counter << "\n\n";
    for(k=1;k<=n;k++)
    {
      for(q=1;q<=n;q++)
      {
        if(table1[k][q] == 1)
        	cout << "* ";
        else if(table1[k][q]==0)
            cout << "  ";
        else
			cout<<"! ";
      }
      cout << endl;
    }

    //�p��{�b�����W�����Ӽ�
    for(k=1;k<=n;k++)
    {
      for(q=1;q<=n;q++)
      {
        holder += table1[k][q];
      } 
    }
	cout << "\n number of element: " <<  holder << endl;
	container = holder;

	//�M�z��X���G
	sleep(10);
	system("cls");
	
	while (1)
    {
    //�p��U�@�ӫ��AS(odd)
    for(k=1;k<=n;k++)
		for(q=1;q<=n;q++)
			table2[k][q]=table1[k-1][q-1]+table1[k-1][q]+table1[k-1][q+1]+table1[k][q-1]+table1[k][q+1]+table1[k+1][q-1]+table1[k+1][q]+table1[k+1][q+1];    

	for(k=1;k<=n;k++)
	{
		for(q=1;q<=n;q++)
        {
        	if(table1[k][q] == 1)
            {
            	if(table2[k][q] == 2 || table2[k][q] == 3)
               		table2[k][q] = 1;
            	else 
               		table2[k][q] = 0;
            }
            else 
            	if(table2[k][q] == 3)
               		table2[k][q] = 1;
            	else 
               		table2[k][q] = 0;
      	}
   	}

   counter ++;
   cout << "Round " << counter << "\n\n";
   
   //��XS(odd)
   for(k=1;k<=n;k++)
    {
    	for(q=1;q<=n;q++)
        {
			if(table2[k][q] == 1)
            	cout << "* ";
        	else
                cout << "  ";
		}
        cout << endl;
   }

   //�p��{�b�����W�����Ӽ�
   holder = 0;
   for(k=1;k<=n;k++)
   {
		for(q=1;q<=n;q++)
		{
			holder += table2[k][q];
      	} 
   }
   cout << "\n number of element: " <<  holder  << endl;

	//�p�ⰱ��ɨ�
	if(container == holder)
	{
		cout << "\n�⦸�P��X�A����\n"; break;
	}
	else 
		container = holder;


   	//�M�z��X���G
   	Sleep(100);
	system("cls");

   //�p��U�@�ӫ��A(even)
    for(k=1;k<=n;k++)
      for(q=1;q<=n;q++)
        table1[k][q]=table2[k-1][q-1]+table2[k-1][q]+table2[k-1][q+1]+table2[k][q-1]+table2[k][q+1]+table2[k+1][q-1]+table2[k+1][q]+table2[k+1][q+1];

	for(k=1;k<=n;k++)
   	{
      	for(q=1;q<=n;q++)
      	{
          if(table2[k][q] == 1)
            {
            if(table1[k][q] == 2 || table1[k][q] == 3)
               table1[k][q] = 1;
            else 
               table1[k][q] = 0;
            }
          else 
            if(table1[k][q] == 3)
               table1[k][q] = 1;
            else 
               table1[k][q] = 0;
      }
   }

   counter ++;
   cout << "Round " << counter << "\n\n";
   
   //��XS(even)
  	for(k=1;k<=n;k++)
    {
        for(q=1;q<=n;q++)
        {
    		if(table1[k][q] == 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
   }

   //�p��{�b�����W�����Ӽ�
   holder = 0;
   for(k=1;k<=n;k++)
   {
      for(q=1;q<=n;q++)
      {
         holder += table1[k][q];
      } 
   }
   cout << "\n number of element: " <<  holder << endl;

   //�p�ⰱ��ɨ�
   if(container == holder)
      {
         cout << "\n�⦸�P��X�A����\n";break;
      }
   else 
      container = holder;

   //�M�z��X���G
   	Sleep(100);
	system("cls");
   
   }
	return 0;
}







