#include <iostream>
using namespace std;
    int main(){
        void hello();
        void hi(); 
        system("cls");
            int option;
        for(;;){
            cout<<"Wellcome to program"<<endl;
            cout<<"1. Multiplication "<<endl;
            cout<<"2. Teacher management "<<endl;
            cout<<"3. staff management "<<endl;
            cout<<"choice option"<<endl;
            cin>>option;
            if (option==3){
                cout<<"Exit the program !! Thank you "<<endl;
                break;
            }
            switch (option)
            {
            case 1:
                {
                 
                    int n;
                    while(true)
                    {
                        system("cls");
                        cout<<"Multiplication Table"<<endl;
                        cout<<"Enter number :"; cin>>n;
                        for(int b = 1 ; b <=12; b++){
                           cout<<n<<" x "<<b<<" = "<<(b*n)<<endl;
                        }   
                        cout<<endl;
                        cout<<" enter q to exit the program "<<endl;
                        cin.ignore();
                        if(cin.get()=='q'){
                            break;
                        }
                    }
                }
                    break;
              case 2:{
              string name, classroom;
              float attSore, math, physic, eng;
              char gender, grade;
                cout<<" student mangement"<<endl;
                cout<<" Enter student name"<<endl;
                cout<<" Enter student gender"<<endl;
                cout<<" Enter student academic score "<<endl;
                cout<<" Enter math "<<endl;
                cout<<" Enter physic "<<endl;
                cout<<" Enter English "<<endl;
                 //output
                cout<<" Student name :"; cin>>name;
                cout<<" Student gender:"; cin>>gender;
              //  cout<<" Student academic :"; cin>>attSore;
              cout<<" Student math :"; cin >> math;
              cout<<" Student physic :"; cin>>physic;
              cout<<" Student English :"; cin>>eng;
              // cout<<" Student classroom :"; cin>>classroom;
              float academicScore = ((eng + math + physic)/3)*90/100;
              float totalScore = academicScore + attSore;
              
              if(totalScore>=90) grade ='A';
              else if (totalScore>=80) grade = 'B';
              else if (totalScore>=70) grade = 'C';
              else if (totalScore>=60) grade = 'D';
              else if (totalScore>=50) grade = 'E';
            else grade = 'F';
              
              cout<<" Student name :"<<name<<endl;
              cout<<" Student math :"<<math<<endl;
              cout<<" Student physic :"<<physic<<endl;
              cout<<" Student English :"<<eng<<endl;
              cout<<" Student classroom :"<<classroom<<endl;
              cout<<" Grade :"<<grade<<((grade == 'F')?" -Failed" : "-passed")<<endl;
            }
            case 3:
                cout<<"this is program 3 "<<endl;
                 break;
            default:
            cout<<"Invalid the program"<<endl;
                break;
            }

        
        
     }
          
        return 0;
    }


    //hello 
    