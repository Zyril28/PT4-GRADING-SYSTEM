#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    char answer;
    int ctr, num;
    string name[10];
    int prog[10], cal[10], gecom[10], gecow[10];
    int average;
    int sum =0;
    ifstream fin;
    ofstream fout;
    fin.open("Grading System Results.txt");
    fout.open("Grading System Results.txt");
    
//Process

  ofstream File;
 File.open("Grading_System.txt", ios:: app);

    
    do{
         cout<<"___________________________________________________"<< endl;
         cout<<"Welcome to Grading System"<<endl;
         cout<<"___________________________________________________"<< endl;
         cout<<"How many students you want to input the grades : ";
         cin>>num; 

         ctr =0;

            cout<<"Enter your name : ";
            cin>>name[ctr];

            cout<<"___________________________________________________"<< endl;
            cout<<"Enter your grades in each subjects in the following : "<<endl;
            cout<<"___________________________________________________"<< endl;
            cout<<"Enter your grade in Programming : ";
            cin>>prog[ctr]; 
            cout<<"Enter your grade in Calculus : ";
            cin>>cal[ctr];
            cout<<"Enter your grade in Purposive Comunication : ";
            cin>>gecom[ctr];
            cout<<"Enter your grade in Contemporary World : ";
            cin>>gecow[ctr];


          ctr++;
        }while(ctr < num);

        
            cout<<"_____________________________________________________________________________________________________________________________"<< endl;
            fout<<"_____________________________________________________________________________________________________________________________"<< endl;
            cout<<"Results of Grading System"<<endl;
            fout<<"Results of Grading System"<<endl;
            cout<<"______________________________________________________________________________________________________________________________"<<endl;
            fout<<"______________________________________________________________________________________________________________________________"<<endl;           

    
            cout<<"Name"<<setw(15)<<"Programming"<<setw(15)<<"Calculus"<<setw(25)<<"Purposive Comunication"<<setw(25)<<"Contemporary World"<<endl;
            fout<<"Name"<<setw(15)<<"Programming"<<setw(15)<<"Calculus"<<setw(25)<<"Purposive Comunication"<<setw(25)<<"Contemporary World"<<endl;     

         for(int x = 0; x < num; x++)
         {

            
            cout<<name[x]<<setw(10)<<prog[x]<<setw(15)<<cal[x]<<setw(20)<<gecom[x]<<setw(20)<<gecow[x]<<endl;
            fout<<name[x]<<setw(10)<<prog[x]<<setw(15)<<cal[x]<<setw(20)<<gecom[x]<<setw(20)<<gecow[x]<<endl;
                         
         }

         sum = prog[ctr] + cal[ctr] + gecom[ctr] + gecow[ctr];
         average = sum/4;

         cout<<"Your average is : "<<average << endl;
         fout<<"Your average is : "<<average << endl;         

         if(average >=95 && average <=100)
         {
          cout << "Your Excellent!";
          fout << "Your Excellent!";
          cout<<endl;
          fout<<endl;
         }
         else if(average >=90 && average <=94)
         {
          cout << "Great Job!";
          fout << "Great Job!";
          cout<<endl;
          fout<<endl;
         }
         else if(average >=85 && average <=89)
         {
          cout << "Good Job!";
          fout << "Good Job!";
          cout<<endl;
          fout<<endl;
         } 
         else if(average >= 80 && average <=84)
         {
          cout<< "Nice!";
          fout<< "Nice!";
          cout<<endl;
          fout<<endl;
         }
         else if(average >= 79 && average <= 75)
         {
          cout<<"Pass!";
          fout<<"Pass!";
          cout<<endl;
          fout<<endl;
         }
         else if(average >=50 && average <=74)
         {
          cout<<"Fail!";
          fout<<"Fail!";
          cout<<endl;
          fout<<endl;         
         }  
     

    fin.close();
    fout.close();
    return 0;

}

//Output
void read(){
 string data;
 ifstream ReadFile("Grading_System.txt");
    while (getline (ReadFile, data)){
      cout << data << endl;
 }
  ReadFile.close();
}
void clear(){
  fstream clear;
  clear.open("Grading_System.txt", ios::out | ios::trunc); 
}