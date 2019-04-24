//Megan Kohout
//final project
//compute grade for classes by input of individual grades
//april 12 2019
#include <cstdlib>
#include <iomanip>
#include<iostream>
#include <time.h>
#include <fstream>

using namespace std;
double assignmentInformation(double[],int,double,double);
string letterGrade(double);
double testInformation(double[],int,double,double);
double quizInformation(double[],int,double,double);
//void classGrade(double,double,double,double);

int main (){
  double gradesAssignments[20];
  int numberAssignments;
  double weightQuizzes;
  double weightAssignments;
  double weightedAssignments;
  double gradesQuizzes[20];
  int numberQuizzes;
  double weightedQuizzes;
  double gradesTests[20];
  int numberTests;
  double weightTests;
  double weightedTests;
  double totalClassGrade;
  string userClassInput="class";
  string line;
    cout<< "Welcome to the GPA calculator. This program will display your class name, ";
    cout<< "and calculate your grade!" <<endl;
    cout<< "Please input the name of your class:"<<endl;
      do {
        cin >> userClassInput; //made this variable mean name of class. will store to display
        cin.clear();
        assignmentInformation(gradesAssignments,numberAssignments,weightAssignments,weightedAssignments);
        quizInformation(gradesQuizzes,numberQuizzes,weightQuizzes,weightedQuizzes);
        testInformation(gradesTests,numberTests,weightTests,weightedTests);
        totalClassGrade= weightedAssignments+weightedQuizzes+weightedTests;
        cout << "weighted test: "<<weightedTests<<endl;
        cout<< "weighted quiz: "<<weightedQuizzes<<endl;
        cout << "weighted assignments: "<<weightedAssignments<<endl;
        cout << "Your grade for this class is "<<totalClassGrade<< " so you got a " <<letterGrade(totalClassGrade)<<endl;
        //classGrade(weightedAssignments,weightedQuizzes,weightedTests,totalClassGrade);
        //cout << "Enter information for the next class. If no more classes, write 'no'"<<endl;


      } while (userClassInput!="no"||userClassInput!="No");
  //calculate weight and display 4.0 scale gpa
  }

double assignmentInformation (double gradesAssignments[],int numberAssignments, double weightAssignments, double weightedAssignments){
      double temp;
        cout << "How much weight is given to assignments? For 70%, write 70."<<endl;
        cin >> temp;
        cin.clear();
        if (temp>0&&temp<100){
          weightAssignments=temp;
        }
      //}
      //this determines the assignment amount and how much the assignments are weighted. need to input actual grades still
      int count = 0;
      int responsePlaceHold;
      double total;
      double gradePlaceHold=0;
      double averageAssignments;
      //IF NOT 0 assignments
      cout << "How many assignments are there to be graded?"<< endl;
      cin >> responsePlaceHold;//get their answer
        if (responsePlaceHold==0){//if no asssignments then dont have var assignment
          gradesAssignments[1]=0; //if test later and there are no assignments then failb
          //numberAssignments=0;
        } else{//if there are assignments
        numberAssignments=responsePlaceHold; //say how many things will be in the array
        cout<< "Please enter the grade in percentage notation for each assignment one at a time. For 70% write 70"<<endl;
      for (int count=0; count<numberAssignments; count++){                                             //NOT RIGHT AMOUNT times
        cout << "Grade: ";
        cin>> gradePlaceHold;
        cin.clear();
        if (gradePlaceHold>0&&gradePlaceHold<=100){
        gradesAssignments[count]=gradePlaceHold;
        //cout <<"grade is "<<gradesAssignments[count];
        //cout<< "grades inputted";
      }}//read in all of the grades for amount earlier said how many there were
      for (int k=0;k<numberAssignments;k++){
        total=total+gradesAssignments[k]; // add them all together
      }
      //cout <<"your total is " << total<<endl;                                 //the total function isnt working
      //cout << "and there are "<<numberAssignments<<endl;
      averageAssignments=total/numberAssignments; //determine what the grade average of the assignments is
      cout<<"Your average assignment grade is: "<<(averageAssignments)<<endl;
      cout<<"You got a "<< letterGrade(averageAssignments) <<" for assignments." <<endl; //print out A-F grade
      weightedAssignments = (averageAssignments*weightAssignments)/100;  //return average assignment grade with weight
      //compositeGradeWeighted[classNumber][0];
      cout<< "assignments weighted: "<<weightedAssignments<<endl;
      //gradeStorage >> weightedAssignments;
       }
       return weightedAssignments;
     }
double quizInformation(double gradesQuizzes[],int numberQuizzes, double weightQuizzes, double weightedQuizzes){
  double temp;
    cout << "How much weight is given to quizzes? For 70%, write 70."<<endl;
    cin >> temp;
    cin.clear();
    if (temp>0&&temp<100){
      weightQuizzes=temp;
    }
  int count = 0;
  int responsePlaceHold;
  double total;
  double gradePlaceHold=0;
  double averageQuizzes;
  cout << "How many quizzes are there to be graded?"<< endl;
  cin >> responsePlaceHold;
    if (responsePlaceHold==0){
      gradesQuizzes[1]=0;
    } else {
    numberQuizzes=responsePlaceHold;
    cout<< "Please enter the grade in percentage notation for each quiz one at a time. For 70% write 70"<<endl;
  for (int count=0; count<numberQuizzes; count++){
    cout << "Grade: ";
    cin>> gradePlaceHold;
    cin.clear();
    if (gradePlaceHold>0&&gradePlaceHold<=100){
    gradesQuizzes[count]=gradePlaceHold;
  }}
  for (int k=0;k<numberQuizzes;k++){
    total=total+gradesQuizzes[k];
  }
  averageQuizzes=total/numberQuizzes;
  cout<<"Your average quiz grade is: "<<(averageQuizzes)<<endl;
  cout<<"You got a "<< letterGrade(averageQuizzes) <<" for quizzes." <<endl;
  weightedQuizzes = averageQuizzes*(weightQuizzes/100);
  cout<< "Quizzes weighted: "<<weightedQuizzes<<endl;
   }
   return weightedQuizzes;
 }
double testInformation(double gradesTests[],int numberTests, double weightTests, double weightedTests){
  double temp;
    cout << "How much weight is given to tests? For 70%, write 70."<<endl;
    cin >> temp;
    cin.clear();
    if (temp>0&&temp<100){
      weightTests=temp;
    }
  int count = 0;
  int responsePlaceHold;
  double total;
  double gradePlaceHold=0;
  double averageTests;
  cout << "How many tests are there to be graded?"<< endl;
  cin >> responsePlaceHold;
    if (responsePlaceHold==0){
      gradesTests[1]=0;
    } else {
    numberTests=responsePlaceHold;
    cout<< "Please enter the grade in percentage notation for each test one at a time. For 70% write 70"<<endl;
  for (int count=0; count<numberTests; count++){
    cout << "Grade: ";
    cin>> gradePlaceHold;
    cin.clear();
    if (gradePlaceHold>0&&gradePlaceHold<=100){
    gradesTests[count]=gradePlaceHold;
  }}
  total = 0;
  for (int k=0;k<numberTests;k++){
    total=total+gradesTests[k];
  }
  averageTests=total/numberTests;
  cout<<"Your average test grade is: "<<(averageTests)<<endl;
  cout<<"You got a "<< letterGrade(averageTests) <<" for tests." <<endl;
  weightedTests = averageTests*(weightTests/100);
  cout<< "Tests weighted: "<<weightedTests<<endl;
   }
   return weightedTests;
}
// void classGrade(double weightedAssignments,double weightedQuizzes, double weightedTests,double totalClassGrade){
//   totalClassGrade= weightedAssignments+weightedQuizzes+weightedTests;
//   cout << "weighted test: "<<weightedTests<<endl;
//   cout<< "weighted quiz: "<<weightedQuizzes<<endl;
//   cout << "weighted assignments: "<<weightedAssignments<<endl;
//   cout << "Your grade for this class is "<<totalClassGrade<< " so you got a " <<letterGrade(totalClassGrade)<<endl;
// }
string letterGrade(double grade){
  // grade=grade*100;
  if (grade>=93){
    return "A";
  } else if (grade>=90){
    return "A-";
  } else if (grade>=87){
    return "B+";
  } else if (grade>=83){
    return "B";
  } else if (grade>=80){
    return "B-";
  } else if (grade>=77){
    return "C+";
  } else if (grade>=73){
    return "C";
  } else if (grade>=70){
    return "C-";
  } else if (grade>=67){
    return "D+";
  } else if (grade>=63){
    return "D";
  } else if (grade>=60){
    return "D-";
  } else if (grade<60){
    return "F";
  } else {
    return "invalid grade";
  }}//char A-F grade funciton
