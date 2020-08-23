#include<iostream>

#include"myconsole.h"
#include"windows.h"
using namespace std;
int main()
{
	//ClearScreen();
	string str;
	cout<<" Write name : ";
	getline(cin,str);
	int n;
	cout<<" THE size of NAME  :";
		cin>>n;
	//	clearScreen();
	cout<<endl<<endl;
	int length=0;
	for(int i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	// ENGLIsH ALPHABATE FUNCTIONs 
	
	
	    char A[n][n];
	    int a=n/2,b=n/2;
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==n/2||j==a||j==b||(j==0&&i>n/2)||(j==n-1&&i>n/2))
		        {
		    	    A[i][j]=5;
		    	   
		        }
		        else
		        {
			        A[i][j]='\0';
	            } 
	        } 
	        a--;
	        b++;
       }
       
	   
	    char B[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||j==n-1||j==0||i==n/2)
		        {
		    	    B[i][j]='B';
		        }
		        else
		        {
			        B[i][j]='\0';
	            } 
	        } 
       }
	   
	    char C[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||j==0)
		        {
		    	    C[i][j]='C';
		        }
		        else
		        {
			        C[i][j]='\0';
	            } 
	        } 
       }
	   
	    char D[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||j==n-1||j==0)
		        {
		    	    D[i][j]='D';
		        }
		        else
		        {
			        D[i][j]='\0';
	            } 
	        } 
       }
	   
	    char E[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||i==n/2||j==0)
		        {
		    	    E[i][j]='E';
		        }
		        else
		        {
			        E[i][j]='\0';
	            } 
	        } 
       }
	   
	    char F[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n/2||j==0)
		        {
		    	    F[i][j]='F';
		        }
		        else
		        {
			        F[i][j]='\0';
	            } 
	        } 
       }	
       
       char G[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||j==0||(j==n-1&&i>n/2)||(i==n/2&&j>n/2))
		        {
		    	    G[i][j]='G';
		        }
		        else
		        {
			        G[i][j]='\0';
	            } 
	        } 
       }
       
       char H[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==n-1||i==n/2||j==0)
		        {
		    	    H[i][j]='H';
		        }
		        else
		        {
			        H[i][j]='\0';
	            } 
	        } 
       }
       
       char I[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||j==n/2||i==n-1)
		        {
		    	    I[i][j]='I';
		        }
		        else
		        {
			        I[i][j]='\0';
	            } 
	        } 
       }
       
       char J[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||j==n/2||(i==n-1&&j<n/2)||(j==0&&i>n/2))
		        {
		    	    J[i][j]='J';
		        }
		        else
		        {
			        J[i][j]='\0';
	            } 
	        } 
       }
       
       char K[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||(i==n/2&&j<n/2)||(i+j==n-1&&j>n/2)||(i==j&&j>n/2))
		        {
		    	    K[i][j]='K';
		        }
		        else
		        {
			        K[i][j]='\0';
	            } 
	        } 
       }
       
       char L[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==n-1||j==0)
		        {
		    	    L[i][j]='L';
		        }
		        else
		        {
			        L[i][j]='\0';
	            } 
	        } 
       }
       
       char M[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||j==n-1||(i==j&&j<n/2)||(i+j==n-1&&j>n/2))
		        {
		    	    M[i][j]='M';
		        }
		        else
		        {
			        M[i][j]='\0';
	            } 
	        } 
       }
       
       char N[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||j==n-1||j==i)
		        {
		    	    N[i][j]='N';
		        }
		        else
		        {
			        N[i][j]='\0';
	            } 
	        } 
       }
       
       char O[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||j==0||j==n-1)
		        {
		    	    O[i][j]='O';
		        }
		        else
		        {
			        O[i][j]='\0';
	            } 
	        } 
       }
       
       char P[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n/2||j==0||(j==n-1&&i<n/2))
		        {
		    	    P[i][j]='P';
		        }
		        else
		        {
			        P[i][j]='\0';
	            } 
	        } 
       }
       
       
       char Q[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||j==n/2||j==i||(i==0&&j<n/2)||(i==n-1&&j<n/2))
		        {
		    	    Q[i][j]='Q';
		        }
		        else
		        {
			        Q[i][j]='\0';
	            } 
	        } 
       }
       
       char R[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||i==n/2||i==0||(i==j&&i>n/2)||(j==n-1&&i<n/2))
		        {
		    	    R[i][j]='R';
		        }
		        else
		        {
			        R[i][j]='\0';
	            } 
	        } 
       }
       
       char s[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n/2||i==n-1||(j==0&&i<n/2)||(j==n-1&&i>n/2))
		        {
		    	    s[i][j]='s';
		        }
		        else
		        {
			        s[i][j]='\0';
	            } 
	        } 
       }
       
       char T[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||j==n/2)
		        {
		    	    T[i][j]='T';
		        }
		        else
		        {
			        T[i][j]='\0';
	            } 
	        } 
       }
       
       char U[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||j==n-1||i==n-1)
		        {
		    	    U[i][j]='U';
		        }
		        else
		        {
			        U[i][j]='\0';
	            } 
	        } 
       }
       
       char V[n][n];
       int x=0,y=n-1;
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if((j==x&&i<=n/2)||(j==y&&i<=n/2))
		        {
		    	    V[i][j]='V';
		        }
		        else
		        {
			        V[i][j]='\0';
	            } 
	            
	        } 
	        x++;
	        y--;
       }
       
       char W[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(j==0||j==n-1||(i==j&&i>=n/2)||(i+j==n-1&&i>=n/2))
		        {
		    	    W[i][j]='W';
		        }
		        else
		        {
			        W[i][j]='\0';
	            } 
	        } 
       }
       
       char X[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==j||i+j==n-1)
		        {
		    	    X[i][j]='X';
		        }
		        else
		        {
			        X[i][j]='\0';
	            } 
	        } 
       }
       
       char Y[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i+j==n-1||(i==j&&i<n/2))
		        {
		    	    Y[i][j]='Y';
		        }
		        else
		        {
			        Y[i][j]='\0';
	            } 
	        } 
       }
       
       char Z[n][n];
        for(int i=0;i<n;i++)
        {  
  	        for(int j=0;j<n;j++)
  	        {
  	            if(i==0||i==n-1||j+i==n-1)
		        {
		    	    Z[i][j]='Z';
		        }
		        else
		        {
			        Z[i][j]='\0';
	            } 
	        } 
       }
       
       // function which call   
  	    
	char arr[n][80];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<80;j++)
		{
	
				arr[i][j]='\0';
			
		}
	}
	int sum=10;
	int y1=0,y2=n;
  	for(int i=0;i<length;i++)
    {
    	if(str[i]=='a'||str[i]=='A')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=A[k][h-y1];
				}
			}
		}
		
	    else if(str[i]=='b'||str[i]=='B')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=B[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='c'||str[i]=='C')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=C[k][h-y1];
				}
			}
		}	
		else if(str[i]=='d'||str[i]=='D')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=D[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='e'||str[i]=='E')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=E[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='f'||str[i]=='F')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=F[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='g'||str[i]=='G')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=G[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='h'||str[i]=='H')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=H[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='i'||str[i]=='I')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=I[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='j'||str[i]=='J')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=J[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='k'||str[i]=='K')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=K[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='l'||str[i]=='L')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=L[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='m'||str[i]=='M')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=M[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='n'||str[i]=='N')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=N[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='o'||str[i]=='O')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=O[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='p'||str[i]=='P')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=P[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='q'||str[i]=='Q')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=Q[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='r'||str[i]=='R')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=R[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='s'||str[i]=='S')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=s[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='t'||str[i]=='T')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=T[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='u'||str[i]=='U')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=U[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='v'||str[i]=='V')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=V[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='w'||str[i]=='W')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=W[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='x'||str[i]=='X')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=X[k][h-y1];
				}
			}
		}	
		
		else if(str[i]=='y'||str[i]=='Y')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=Y[k][h-y1];
				}
			}
		}
		
		else if(str[i]=='z'||str[i]=='Z')
    	{
    		for(int k=0;k<n;k++)
    		{
    			for(int h=y1;h<y2;h++)
    			{
    				arr[k][h]=Z[k][h-y1];
				}
			}
		}		
		else{
			y1=y1-n+1;
			y2=y2-n+1;
		}
		y1=y1+n+2;
		y2=y2+n+2;
	}
  	   
        int t=0,g=0;
  		for(int i=0;i<n;i++)
        {
    	    for(int j=0;j<80;j++)
    	    {  
			 
    	        
    		   cout<<arr[i][j];
    		  // cout<<arr[j][i];
    		   Sleep(5);
		    }
		
		
	    } 
  	cout<<endl<<endl;
  	system("PAUSE");
  	return 0;
}
