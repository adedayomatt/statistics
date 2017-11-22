#include <iostream>
#include <math.h>
using namespace std;
int main()
{

 int i, f [1000], sumF,pass;
 int data [1000];
 int EDF, N;
 double suma, DF[1000], F_devt[1000], FW[1000],sumDF;
 float ave, sumd, var, SD, W [1000], devt[1000], std_error;
 cout<<" \n\n\t\tWELCOME TO MATTWORLD STATISTICAL PROGRAM\n\n";
 cout<< "                          DICLAIMER!!! \n\n     THIS PROGRAM WAS DESIGNED BY K. ADEDAYO MATTHEW\n";
 cout<<"                   all rights reserved\n\n";
 cout<<"   CALCULATING DISPERSIONS OF FREQUENCY DISTRIBUTION OF SAMPLE UNITS\n\n\t\t made easier with just clicks!\n\n\n";
 
       cout<<" WELCOME ANONYMOUS...\nFirst give an overview of your sample distribution, how many unique data is in your\n distribution?...\n\t\t";
  cin>>N;
  cout<<" Alright, there are "<<N<<" unique data in your distribution\n";
  cout<< " \n Please proceed below...\n\n";
 for (i=0; i<N; i++)
 {  
       cout<<"\nEnter the number "<<i+1<<" unique data below...\n\t\t";
     cin>>data[i];
     cout<<"\nHow many times does "<<data[i]<<" appear in the distribution?...\n\t\t";
     cin>>f[i];
     cout<<f[i]<<" times";
     }
     cout<<"\n See the data you have input and their respective freqencies, please check\n if they are correct, if not, press any key to re-input\n"<<endl;
     cout<<"\t\t X\t\t  frequency\n";
     for (i=0; i<N; i++)
     {
         cout<<"\t\t"<<data[i]<<"\t\t  " <<f [i]<<"\n";
          }
     for (i=0; i<N ; i++)
     {
         DF[i] = data[i] * f[i];
         }
         sumDF = 0;
          for (i=0; i<N; i++)
          {
         sumDF = sumDF + DF [i];
         }
             cout<<"\n Summation of all the data is: "<<sumDF<<endl;
             sumF = 0;
              for (i=0; i<N; i++)
              {
                  sumF = sumF + f[i];
                  }
                  cout<<"total frequency is: "<<sumF<<endl;
             ave = sumDF/sumF;
             cout<<"\n The average/mean of the data is: "<<ave<<endl;
             for (i=0; i<N; i++)
             {
               devt[i] =  data[i] - ave;

               }
               for (i=0; i<N; i++)
               {
               cout<<"\n The deviation of " <<data[i]<<" with the frequency "<<f [i]<< " from the mean "<<ave<< " is " <<devt[i]<<endl;
               }
               for (i=0; i<N; i++)
               {
                   W[i] = devt[i] * devt[i];
                   }
                   for (i=0; i<N; i++)
                   {
                   FW[i] = f[i] * W[i];
                   }
                   sumd = 0;
                   for (i=0; i<N; i++)
                   {
                   sumd = sumd + FW[i];
                   }
                   cout<<"\n Summation of all the squared deviations is: "<<sumd<< " \n While the number of score is: "<<sumF<<"\n";
                   var = sumd/(sumF - 1);
                   cout<<"\n The variance of the distribution is: "<<var<<endl;
                   SD = sqrt(var);
                   std_error = SD/(sqrt(sumF));
                   cout<<"\n Standard deviation of the distribution is: "<<SD<<"\n\n";
                   cout<<"            SUMMARIZING THIS ON A TABLE\n\n";
                   cout<<"s/n\tdata(x)\tfrequency(f)\tdeviation(d)\t(d^2)\t\tfd\n\n";
                   for (i=0; i<N; i++)
                   {
                   cout<<i+1<<"\t"  <<data[i]<<"\t"   <<f [i]<<"\t\t"<<devt[i]<<"\t\t"<<W[i]<<"\t\t"<<FW[i]<<endl;
                   }
                   
                   cout<<"\n VARIANCE = " <<var<< "\n STANDARD DEVIATION = "<<SD<<endl;
                   cout<<"\n STANDARD ERROR = " <<std_error<<endl;
                   
                   cout<<"\n\n\n\n";
               
               
                   cout<<"          THANK YOU FOR USING THIS PROGRAM\n\n";
                   
return 0;
}
