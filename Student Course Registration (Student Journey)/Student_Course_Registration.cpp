#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<iomanip>
#include<limits>

using namespace std;


void clearinputbuffer();
void pausescreen();
bool studentInfo();
bool studentLogin();

struct Student
{
    string studentID;
    string studentName;
    string scholarshipID;
    string semester;
    double cgpa;
    int totalCredits;
};

struct Course
{
    string courseID;
    string courseTitle;
    int credit;
    double feePerCredit;
    int availableSeats;
    string semester;
    string status;
};

void clearinputbuffer()
{
    cin.clear();
    cin.ignore(10000, '\n');
}

void pausescreen()
{
cout<< "Press Enter to continue......";
 cin.ignore(10000, '\n');
 cin.get();
}


 bool studentInfo(string studentID, Student &student)
{
   ifstream file("Student.csv");

   if (!file)
   {
    cout <<"\nStudent File not found\n";
    return false;
   }

   string line;

   getline(file, line);

   while (getline(file, line))
   {
    stringstream ss(line);

        string fileStudentID;
        string fileStudentName;
        string fileScholarshipID;
        string fileSemester;
        string fileCGPA;
        string fileTotalCredits;

        getline(ss, fileStudentID, ',');
        getline(ss, fileStudentName, ',');
        getline(ss, fileScholarshipID, ',');
        getline(ss, fileSemester, ',');
        getline(ss, fileCGPA, ',');
        getline(ss, fileTotalCredits, ',');

        if (fileStudentID == studentID)
        {
            student.studentID = fileStudentID;
            student.studentName = fileStudentName;
            student.scholarshipID = fileScholarshipID;
            student.semester = fileSemester;

            student.cgpa = stod(fileCGPA);
            student.totalCredits = stoi(fileTotalCredits);

            file.close();

            return true;
        }
    }

    file.close();

    return false;
}



bool studentLogin(Student &loggedInStudent)
{
    string studentID;
    string password;

    while (true)
    {

    cout << "\n========================================\n";
    cout << "             STUDENT LOGIN\n";
     cout << "========================================\n\n";

     cout <<"Student ID : ";
     cin>> studentID;

     cout << "Password : ";
     cin >> password;

     ifstream file ("Register_data.csv");

     if(!file)
     {
        cout <<"Data file not found";

        return false;
     }

     string line;

     getline(file, line);
     bool loginfound = false;

     while (getline(file, line))
     {
        stringstream ss(line);

        string fileStudentID;
        string fileUsername;
        string filePassword;

        getline(ss, fileStudentID, ',');
        getline(ss, fileUsername, ',');
        getline(ss, filePassword, ',');

        if(fileStudentID == studentID &&
           filePassword == password)
           {
            loginfound = true;
            break;
           }
     }
      file.close();

      if(loginfound)
      {
        if(studentInfo(studentID, loggedInStudent))
        {
            cout << "\nLogin Succedful\n Welcome "<<loggedInStudent.studentName<<"!\n";

            return true;
        }
        else 
        {
            cout << "\n Student information not found\n";
           pausescreen();
            return false;
        }
      }

      cout <<"\nINvalid Student ID or Password\n Please try again...";
      
      pausescreen();
}
}




void viewcourse(Student loggedInStudent)
{
ifstream file("Courses.csv");

if (!file)
{
    cout << "Course File not found\n";

    pausescreen();

    return;
}

string line;

getline(file, line);


cout << "=========================================================================================================\n";
cout << left
<< setw(12) <<"Course ID"
<< setw(38) <<"Course Title"
<< setw(10) <<"Credits"
<< setw(16) <<"Fee per Credits"
<< setw(12) <<"Seats"
<< setw(12) <<"Semester"
<< setw(28) <<"Status"
<< "\n";
cout << "=========================================================================================================\n";


bool coursefound =false;

while (getline(file, line))
{
     stringstream ss(line);

        Course course;

        string credit;
        string feepercredit;
        string availableseats;


         getline(ss, course.courseID, ',');
        getline(ss, course.courseTitle, ',');
        getline(ss, credit, ',');
        getline(ss, feepercredit, ',');
        getline(ss, availableseats, ',');
        getline(ss, course.semester, ',');
        getline(ss, course.status, ',');


         course.credit = stoi(credit);
        course.feePerCredit = stod(feepercredit);
        course.availableSeats = stoi(availableseats);


         if (course.semester != loggedInStudent.semester)
        {
            continue;
        }


        coursefound = true;



         cout << left
             << setw(12) << course.courseID
             << setw(38) << course.courseTitle
             << setw(10) << course.credit
             << setw(16) << fixed << setprecision(2)
             << course.feePerCredit
             << setw(12) << course.availableSeats
             << setw(12) << course.semester
             << setw(12) << course.status
             << endl;

       

        
}
 file.close();

 cout << "=========================================================================================================\n";

    if (!coursefound)
    {
        cout << "\nNo courses available!\n";
    }

   pausescreen();
}



void searchcourse(Student loggedInStudent)
{
    string courseID;

    cout<<"---------- SEARCH COURSE ----------\n\n";

    cout<<"Enter your course ID: ";
    cin.ignore(10000, '\n');

    getline(cin, courseID);



}



bool studentDashboard(Student loggedInStudent)
{
    int choice;

    while(true)
    {
        cout << "\n\n================================================================\n";
        cout << "                        STUDENT DASHBOARD\n";
        cout << "==================================================================\n";

        cout << "Student Name: " << loggedInStudent.studentName <<endl;
        cout << "Student ID: " << loggedInStudent.studentID <<"  "<<"Semester: "<<loggedInStudent.semester<<"\n";

        cout << "-------------------------------------------------------------------\n";

        cout << "1. View Courses\n";
        cout << "2. Logout\n";

        cout << "-------------------------------------------------------------------\n";

        cout << "Enter your choice: ";
       
       if (!(cin >> choice))
       {
        cout << "Invalid input. Please enter a number.\n";

        clearinputbuffer();
     

        continue;
       }


        switch (choice)
        {
            case 1:
                viewcourse(loggedInStudent);

              
                break;

            case 2:
                cout << "\nLoged out!\n";
              
                return false;

            default:
                cout << "\nInvalid choice! Try again.\n";
                clearinputbuffer();

                break;
        }

    }
    
}

int main()
{
    Student loggedInStudent;

    

while (true)
{
   

    if (studentLogin(loggedInStudent))
    {
     studentDashboard(loggedInStudent);

    
    }
}


    return 0;
}


