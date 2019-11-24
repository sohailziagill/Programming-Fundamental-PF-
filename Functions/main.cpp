#include <iostream>
using namespace std;
char grade;
void getScore(int& score);
char calculateGrade(int score);
int main()
{
int courseScore;
cout << "Line 1: Based on the course score, \n"
<< " this program computes the "
<< "course grade." << endl; //Line 1
getScore(courseScore); //Line 2
calculateGrade(courseScore); //Line 3
cout<<"\nYour grade is "<<grade;
return 0;
}
void getScore(int& score)
{
cout << "Line 4: Enter course score: "; //Line 4
cin >> score; //Line 5
cout << endl << "Line 6: Course score is "
<< score << endl; //Line 6
}
char calculateGrade(int cScore)
{
cout << "Line 7: Your grade for the course is "; //Line 7
if (cScore >= 90) //Line 8
grade='A';
else if (cScore >= 80)
grade='B';
else if(cScore >= 70)
grade='C';
else if (cScore >= 60)
grade='D';
else
grade='F';
return grade;
}