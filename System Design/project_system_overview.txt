Project System Overview

Feature Mapping
Student Course Registration System
SL
Feature
Description
    Role
1
Course Information Management
Course ID, Course Title, Credit, Fee per Credit এবং Available Seats সংরক্ষণ করা।
Admin
2
Course List Display
সব available course-এর ID, title, credit, fee এবং available seat দেখানো। Seat 0 হলে “Closed” দেখানো।Semister wise course showed.
Admin/Student
3
Course Search
Course ID অথবা Course Title ব্যবহার করে নির্দিষ্ট course খোঁজা।
Admin/Student
4
Course Registration
Student এক বা একাধিক course register করতে পারবে এবং registration সফল হলে available seat কমে যাবে।
Student
5
Multiple Course Registration
Student registration শেষ না করা পর্যন্ত একাধিক course add করতে পারবে।
Student
6
Student Information Management
Student Name, Student ID এবং Scholarship ID সংগ্রহ ও সংরক্ষণ করা।
Admin/Student
7
Scholarship Discount
Valid Scholarship ID থাকলে tuition fee-এর উপর 20% discount প্রয়োগ করা।Also Cgpa based scholarship.
Student
8
Credit Limit Control
একজন student সর্বোচ্চ 15 credit পর্যন্ত course register করতে পারবে।
Student
9
Fee Calculation
Tuition fee, scholarship discount, 5% VAT এবং final payable amount হিসাব করা।
Student
10
Registration Summary
Registered courses, total credits এবং total fee-এর summary দেখানো।
Student
11
Seat Management
Course registration এবং drop করার পর available seat automatically update করা।
Student
12
Registration Slip Generation
University name, student information, date/time, registered courses এবং fee summaryসহ formatted registration slip তৈরি করা।
Student
13
Registration Slip File Save
Registration slip Registration_StudentID.txt নামে text file হিসেবে save করা।
Student
14
Registration History
প্রতিটি registration RegistrationHistory.txt file-এ append করে রাখা।
Student
15
Course Drop
Final confirmation-এর আগে registered course drop করা এবং সেই course-এর seat restore করা।
Student
16
Dashboard
Display Courses, Search Course, Register Course, Drop Course, View Registration এবং Exit-এর মতো menu option প্রদান করা।
Admin/Student
17
Input Validation
Invalid Course ID, duplicate registration, unavailable seat এবং credit limit-এর মতো invalid input যাচাই করা।


18
Student Name Validation
Student Name empty রাখা হলে registration allow না করা।


19



20

21


22     
Menu Choice Validation


Login

Semister Wise Course

Search Student registration




Invalid menu choice দিলে appropriate error message দেখানো।


Login as a Admin or Student

সেমিস্টার অনুযায়ী Course নেয়া যাবে।


All students registration searching









Admin


Admin
23
Exit System
Program বন্ধ হওয়ার আগে student-কে thank-you message দেখানো।





Input Validation Features
Invalid Course ID
Duplicate Course Registration
Credit Limit Exceeded
No Available Seat
Empty Student Name
Invalid Menu Choice





































Feature Module Mapping
Student Course Registration System
The system will have two main user roles:
Admin
Student

1. Admin Modules
Module 1: Admin Authentication
Features
Admin Login
Admin Logout
Admin Dashboard Access
Invalid Login Validation
Role
Admin

Module 2: Course Management
Features
Add Course
Update Course Information
Delete Course
View Course List
Store Course ID
Store Course Title
Store Course Credit
Set Fee per Credit
Set Available Seats
Manage Semester-wise Courses
Role
Admin

Module 3: Course Search & View
Features
Search Course by Course ID
Search Course by Course Title
View Course Details
View Available Seats
View Course Status
Display "Closed" when Available Seats become 0
View Semester-wise Courses
Role
Admin

Module 4: Student Management
Features
View Student Information
Search Student
View Student ID
View Student Name
View Scholarship Information
Search Student Registration
View Student Registration Summary
Role
Admin

Module 5: Registration Management
Features
View Student Course Registration
View Registered Courses
View Registration Summary
View Registration History
View Course Seat Updates
Role
Admin

Module 6: Scholarship Management
Features
Maintain Scholarship Information
Manage Scholarship IDs
View Student Scholarship Information
Role
Admin

Module 7: Dashboard
Features
Course Management
Student Management
Course Search
Registration Management
Scholarship Management
Semester-wise Course View
Student Registration Search
Registration History
Role
Admin

2. Student Modules
Module 1: Student Authentication
Features
Student Login
Student Logout
Student Dashboard Access
Invalid Login Validation
Role
Student

Module 2: Course Browsing
Features
View Available Courses
View Course ID
View Course Title
View Course Credit
View Fee per Credit
View Available Seats
View Course Status
View Semester-wise Courses
"Closed" status when seats are unavailable
Role
Student

Module 3: Course Search
Features
Search Course by Course ID
Search Course by Course Title
View Course Details
Check Course Availability
Role
Student

Module 4: Course Registration
Features
Register for a Course
Register Multiple Courses
Continue Adding Courses
Check Available Seats
Automatically Reduce Available Seats
Check Duplicate Course Registration
Check Credit Limit
Prevent Registration when No Seat is Available
Maximum 15 Credit Registration Limit
Role
Student

Module 5: Course Drop
Features
View Registered Courses
Drop a Registered Course
Drop Course before Final Confirmation
Restore Available Seat after Dropping
Update Registration Summary
Role
Student

Module 6: Student Information
Features
Enter Student Name
Enter Student ID
Enter Scholarship ID
Validate Student Name
View Student Information
Role
Student

Module 7: Scholarship & Discount
Features
Enter Scholarship ID
Validate Scholarship ID
Apply 20% Scholarship Discount
Apply CGPA-based Scholarship
Calculate Scholarship Discount
Display Scholarship Amount
Role
Student

Module 8: Fee Management
Features
Calculate Tuition Fee
Calculate Scholarship Discount
Calculate VAT (5%)
Calculate Final Payable Amount
Display Fee Summary
Role
Student

Module 9: Registration Summary
Features
View Registered Courses
View Total Credits
View Tuition Fee
View Scholarship Discount
View VAT
View Final Payable Amount
View Registration Summary
Role
Student

Module 10: Registration Slip
Features
Generate Registration Slip
Display University Name
Display Student Information
Display Registration Date/Time
Display Registered Courses
Display Total Credits
Display Fee Summary
Display Final Payable Amount
Save Registration Slip as Registration_StudentID.txt
Role
Student

Module 11: Registration History
Features
View Registration History
Save Registration Record
Maintain Registration Records
Append Registration to RegistrationHistory.txt
Role
Student

Module 12: Student Dashboard
Features
View Courses
Search Course
Register Course
Drop Course
View Registration
View Registration Summary
View Registration Slip
View Registration History
Logout
Role
Student

3. Common Input Validation
The following validation features will be applied where necessary:
Invalid Course ID
Duplicate Course Registration
Credit Limit Exceeded
No Available Seat
Empty Student Name
Invalid Menu Choice
Invalid Login Information
Invalid Scholarship ID

4. Role-wise Module Summary
Admin
Module
Main Purpose
Admin Authentication
Admin login and access control
Course Management
Add, update, delete and manage courses
Course Search & View
Search and view course information
Student Management
View and search student information
Registration Management
Monitor student registrations
Scholarship Management
Manage scholarship information
Admin Dashboard
Access all administrative functions

Student
Module
Main Purpose
Student Authentication
Student login and access control
Course Browsing
Browse available and semester-wise courses
Course Search
Search and view courses
Course Registration
Register one or multiple courses
Course Drop
Drop registered courses
Student Information
Manage student information
Scholarship & Discount
Apply scholarship and calculate discount
Fee Management
Calculate tuition, VAT and final payment
Registration Summary
View registration and fee summary
Registration Slip
Generate and save registration slip
Registration History
View and maintain registration records
Student Dashboard
Access all student functions






Admin User Journey
Admin User Journey Flow
Login → Admin Dashboard → Manage Courses → Manage Students → Manage Registrations → Manage Scholarships → Search/View Information → Logout
Step 1: Admin Login
Admin system-এ প্রবেশ করবে।
Admin username/password দিয়ে login করবে।
Valid login হলে Admin Dashboard-এ যাবে।
Invalid login হলে error message দেখাবে।
Step 2: Admin Dashboard
Login করার পর Admin Dashboard থেকে বিভিন্ন module access করতে পারবে:
Course Management
Course Search
Student Management
Registration Management
Scholarship Management
Registration History
Logout
Step 3: Manage Courses
Admin course-related information manage করবে।
Admin পারবে:
Course add করতে
Course information update করতে
Course delete করতে
Course ID, Title, Credit এবং Fee manage করতে
Available Seats manage করতে
Semester-wise course manage করতে
Step 4: View/Search Courses
Admin Course Search ব্যবহার করে:
Course ID দিয়ে search করতে পারবে
Course Title দিয়ে search করতে পারবে
Course details দেখতে পারবে
Available seats দেখতে পারবে
Semester-wise course দেখতে পারবে
Step 5: Manage Students
Admin student-related information দেখতে পারবে।
Admin পারবে:
Student search করতে
Student information দেখতে
Student ID দেখতে
Student Name দেখতে
Scholarship information দেখতে
Step 6: Manage Registration
Admin student registration information monitor করবে।
Admin পারবে:
Student-এর registered courses দেখতে
Total registered credits দেখতে
Registration summary দেখতে
Registration history দেখতে
Course registration status দেখতে
Step 7: Manage Scholarship
Admin scholarship-related information manage করবে।
Admin পারবে:
Scholarship ID manage করতে
Scholarship information দেখতে
CGPA-based scholarship information manage করতে
Student scholarship information দেখতে
Step 8: Search Student Registration
Admin নির্দিষ্ট student-এর registration খুঁজে দেখতে পারবে।
Admin:
Student ID দিয়ে student search করবে
Student-এর registered courses দেখবে
Registration information দেখবে
Registration history দেখবে
Step 9: Logout
Admin কাজ শেষ করার পর Logout করবে।
Admin User Journey Ends





Student User Journey
Student User Journey Flow
Login → Student Dashboard → Browse/Search Courses → Register Courses → Drop Course (Optional) → Scholarship → Fee Calculation → Registration Summary → Registration Slip → Registration History → Logout
Step 1: Student Login
Student system-এ প্রবেশ করবে।
Student login information দিয়ে login করবে।
Valid login হলে Student Dashboard-এ যাবে।
Invalid login হলে error message দেখাবে।
Step 2: Student Dashboard
Login করার পর Student Dashboard থেকে বিভিন্ন feature access করতে পারবে:
View Courses
Search Course
Register Course
Drop Course
View Registration
View Registration Summary
View Registration Slip
View Registration History
Logout
Step 3: Browse Courses
Student available courses দেখতে পারবে।
Student দেখতে পারবে:
Course ID
Course Title
Credit
Fee per Credit
Available Seats
Course Status
Semester-wise Courses
যদি কোনো course-এর available seat 0 হয়, তাহলে সেটি "Closed" হিসেবে দেখানো হবে।
Step 4: Search Course
Student নির্দিষ্ট course search করতে পারবে।
Student:
Course ID দিয়ে search করতে পারবে
Course Title দিয়ে search করতে পারবে
Course details দেখতে পারবে
Course availability check করতে পারবে
Step 5: Register Course
Student একটি বা একাধিক course register করতে পারবে।
Registration-এর সময় system:
Course availability check করবে
Duplicate course registration check করবে
Credit limit check করবে
Available seat check করবে
Successful registration-এর পর available seat কমিয়ে দেবে
Student সর্বোচ্চ 15 credits পর্যন্ত course register করতে পারবে।
Step 6: Add Multiple Courses
Student registration শেষ না করা পর্যন্ত একাধিক course add করতে পারবে।
প্রতিটি নতুন course add করার সময়:
Course validity check হবে
Duplicate registration check হবে
Available seat check হবে
Total credit limit check হবে
Step 7: Drop Course (Optional)
Final confirmation-এর আগে Student registered course drop করতে পারবে।
Course drop করলে:
Course registration থেকে remove হবে
Total credit update হবে
Available seat আবার increase হবে
Registration summary update হবে
Step 8: Scholarship
Student Scholarship ID প্রদান করবে।
System:
Scholarship ID validate করবে
Valid হলে scholarship discount apply করবে
CGPA-based scholarship থাকলে সেটিও calculate করবে
Step 9: Fee Calculation
System Student-এর fee calculate করবে।
Fee calculation-এর মধ্যে থাকবে:
Tuition Fee
Scholarship Discount
VAT (5%)
Final Payable Amount
Step 10: Registration Summary
Student final registration summary দেখতে পারবে।
Summary-তে থাকবে:
Registered Courses
Total Credits
Tuition Fee
Scholarship Discount
VAT
Final Payable Amount
Step 11: Registration Slip
Student-এর registration information দিয়ে একটি registration slip generate হবে।
Registration slip-এ থাকবে:
University Name
Student Information
Registration Date/Time
Registered Courses
Total Credits
Fee Summary
Final Payable Amount
Step 12: Save Registration Slip
Registration slip:
Registration_StudentID.txt
নামে save করা হবে।
Step 13: Registration History
Student-এর registration record system-এ সংরক্ষণ করা হবে।
Registration history:
RegistrationHistory.txt
file-এ append করা হবে।
Step 14: Logout
Student registration process শেষ করার পর Logout করবে।
Student User Journey Ends



















Database / File Storage Design
Student Course Registration System
The system will use structured data storage to maintain courses, students, registrations, scholarships and generated registration records.
For the C programming project, data can be stored using text files (.txt) and structures/arrays.

1. Storage Overview
The system will contain the following main data files:
SL
File Name
Purpose
1
Admin.txt
Store Admin login information
2
Students.txt
Store student information
3
Courses.txt
Store course information
4
Scholarships.txt
Store scholarship information
5
Registrations.txt
Store student course registration records
6
RegistrationHistory.txt
Store registration history
7
Registration_StudentID.txt
Store individual student's registration slip


2. Admin.txt
Purpose
This file will store Admin authentication information.
Data Fields
Field
Description
Admin ID
Unique ID of Admin
Username
Admin login username
Password
Admin login password

Example
Admin ID: ADM001
Username: admin
Password: admin123

Used By
Admin

3. Students.txt
Purpose
This file will store registered student information.
Data Fields
Field
Description
Student ID
Unique ID of student
Student Name
Full name of student
Scholarship ID
Student's scholarship ID
CGPA
Student's CGPA
Total Registered Credits
Current registered credits

Example
Student ID: 221002001
Student Name: Abrar Hasan
Scholarship ID: SCH101
CGPA: 3.75
Total Credits: 6

Used By
Admin / Student

4. Courses.txt
Purpose
This file will store all available course information.
Data Fields
Field
Description
Course ID
Unique course ID
Course Title
Name of the course
Credit
Course credit
Fee per Credit
Fee charged per credit
Available Seats
Number of remaining seats
Semester
Semester in which course is offered
Status
Open / Closed

Example
Course ID: CSE101
Course Title: Structured Programming
Credit: 3
Fee per Credit: 4500
Available Seats: 30
Semester: 1st
Status: Open

Used By
Admin / Student

5. Scholarships.txt
Purpose
This file will store scholarship information.
Data Fields
Field
Description
Scholarship ID
Unique scholarship ID
Scholarship Name
Name of scholarship
Discount Percentage
Scholarship discount
Minimum CGPA
Required CGPA
Status
Active / Inactive

Example
Scholarship ID: SCH101
Scholarship Name: Academic Scholarship
Discount Percentage: 20
Minimum CGPA: 3.50
Status: Active

Used By
Admin / Student

6. Registrations.txt
Purpose
This file will store the current registration information of students.
One student can register for multiple courses.
Data Fields
Field
Description
Registration ID
Unique registration ID
Student ID
Student who registered
Course ID
Registered course
Semester
Registration semester
Registration Date
Registration date
Status
Registered / Dropped / Confirmed

Example
Registration ID: REG001
Student ID: 221002001
Course ID: CSE101
Semester: 1st
Registration Date: 2026-09-29
Status: Registered

Another record:
Registration ID: REG002
Student ID: 221002001
Course ID: MAT101
Semester: 1st
Registration Date: 2026-09-29
Status: Registered

Used By
Admin / Student

7. RegistrationHistory.txt
Purpose
This file will maintain the history of student registrations.
Every completed registration will be appended to this file instead of replacing previous records.
Data Fields
Field
Description
Registration ID
Unique registration ID
Student ID
Student ID
Student Name
Student name
Registered Courses
Registered course IDs
Total Credits
Total registered credits
Tuition Fee
Total tuition fee
Scholarship Discount
Discount amount
VAT
VAT amount
Final Payable
Final payable amount
Registration Date
Registration date
Status
Completed / Cancelled

Example
Registration ID: REG001
Student ID: 221002001
Student Name: Abrar Hasan
Courses: CSE101, MAT101
Total Credits: 6
Tuition Fee: 27000
Scholarship Discount: 5400
VAT: 1080
Final Payable: 22680
Registration Date: 2026-09-29
Status: Completed

Used By
Admin / Student

8. Registration_StudentID.txt
Purpose
This file will contain the individual student's formatted registration slip.
The filename will use the student's ID.
Example Filename
Registration_221002001.txt

Registration Slip Data
The file will contain:
University Name
Student Name
Student ID
Scholarship ID
Registration Date/Time
Registered Courses
Course Credits
Total Credits
Tuition Fee
Scholarship Discount
VAT
Final Payable Amount
Example
========================================
       UNIVERSITY NAME
       REGISTRATION SLIP
========================================

Student Name: Abrar Hasan
Student ID: 221002001
Scholarship ID: SCH101

Courses:
----------------------------------------
CSE101 - Structured Programming
Credit: 3

MAT101 - Mathematics-I
Credit: 3
----------------------------------------

Total Credits: 6

Tuition Fee: 27000
Scholarship Discount: 5400
VAT: 1080

Final Payable: 22680

Registration Date: 29-09-2026
========================================

Used By
Student / Admin

9. Relationship Between Files
The main relationship between the data files will be:
Admin
  |
  | manages
  ↓
Courses
  |
  | selected by
  ↓
Students
  |
  | creates
  ↓
Registrations
  |
  | generates
  ↓
RegistrationHistory
  |
  | generates
  ↓
Registration_StudentID.txt

Students
  |
  | has
  ↓
Scholarships


10. Logical Data Relationship
Student → Registration
One student can have multiple registration records.
Student ID
    |
    +---- Registration 1
    |
    +---- Registration 2
    |
    +---- Registration 3

Course → Registration
One course can be registered by multiple students.
Course ID
    |
    +---- Student 1
    |
    +---- Student 2
    |
    +---- Student 3

Student → Scholarship
A student can have a scholarship ID associated with their account.
Student
   |
   └── Scholarship ID
            |
            └── Scholarship Information






