#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

const float Pi = 3.14;
const short SecoundsPerMin = 60;
const short SecoundsPerHour = 24 * 60;
const int SecoundsPerDay = SecoundsPerHour * 60;



const short hours_in_day = 24;
const short mins_in_hour = 60;
const short secs_to_min = 60;

//SimpleEnumMaking Info
/*

enum Dirctions { south = 1, West = 2, East = 3, North = 4 };
enum Gender {Male, Female};
enum states{Single=0, Married=1};
enum MyFaviroutColors {     Black=0, Brown=1, DarkBlack=2, White=3, Yellow=4,blue=5};
*/
//SimpleEnumMaking Dirctions
/*
enum Dirctions { south =1 ,West=2,East=3,North=4 };
enum Gender { Male, Female };
enum states { Single = 0, Married = 1 };
enum MyFaviroutColors { Black = 0, Brown = 1, DarkBlack = 2, White = 3, Yellow = 4, blue = 5 };
*/
//SimpleStructMaking Info
/*
 This Porgram made in 6:29PM 23/2/2023
struct Coustumers {

    string Name;
    string Age;
    string City;
    string Country;
    short MonthlySalary;
    short YearlySalary;
    char Gender;
    bool Married;

};


struct Address {
    string Location;




};
*/
//TowSimpleEnumsAndStruct Contacts And Info
/*
This Program Made in 23/2/2023
struct stAdress
{
    string Location;
    string ZipCode;
    string PoBox;
    string StreetName;
    string BulidingNo;
};

enum enColor { Black = 0, Brown = 1, DarkBlack = 2, White = 3, Yellow = 4, blue = 5 };

struct stContactInfo {

    string Email;
    string Phone;
    string Country;
    string City;
    string MonthlySalary;
    stAdress Adress;
};


enum enStates {   Single=0 , Married=1};
enum enGender { Male , Female};

struct stPerson {

    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enStates MaritalState;
    enGender Gender;
    enColor Colors;
};
*/
//FnDisplayContactInfo
/*
void fnDisplayMyContact() {

    cout << "Name: Qusai Al Bedawi \nAge: 21\nCity: Amman\nCountry: Jordan" << endl;

}
*/
//fnSquare 
/*
void Squre() {
    cout << "********\n********\n********\n********";

}
*/
//fnBestDeveloper
/*
void Text() {
    cout << "I love Programming\nIpromise To Be the best developer ever!\nIknow it will take some time to practice,but I will achive my goal\nBest regreds\nMohammed Abu-Hadhoud.";
}
*/
//PrintHBy *
/*
void H() {
    cout << "*      *\n*      *\n********\n*      *\n*      *";
}
*/
//fnSum Tow Numbers
/*
void MyProceder() {
    cout << "Please Insert A Number1? ";
    int A,B;
    cin >> A;

    cout << "Please Insert A Number2? ";
    cin >> B;
    cout << A + B;
}
int MyFunction() {
    cout << "Please Insert A Number1? ";
    int A, B;
    cin >> A;
    cout << "Please Insert A Number2? ";
    cin >> B;
    return A + B;
}
*/
//Simple fn Tow Sum Tow Numbers
/*
int fnSum(int A, int B) {

    return A + B;
}
*/
//Functions or Proders
/*
void Print() {
    cout << "Mohammed";
}
*/

/*
void PrintName() {
    cout << "Please Insert YourName ";
    string Name;
    cin >> Name;
    cout << Name;
}

*/

/*
void fnswap() {
    int Number1, Number2;
    cout << "Hello, Please Insert Tow Numbers ";
    cin >> Number1 >> Number2;
    cout << Number2 <<"\n" << Number1;


}
*/

/*
int RectangleArea(int A,int B) {

    return A * B;
}
*/

/*
float RectangleAreathroghDiagonal(float A, float B) {

    return A *sqrt(pow(B,2)-pow(A,2));
}
*/

/*
float fnCircleArea(float A) {

    return pow(A,2) * Pi;
}
*/

/*
float fnCircleAreathroghDiameter(float A) {

    return (pow(A, 2) * Pi)/4;
}

*/

/*
float fnCircleAreainscribedAsquare(float A) {

    return (pow(A/2, 2) * Pi);
}
*/

/*

float fnCircleAreaAlongCircumference(float A) {

    return (pow(A , 2) / (4* Pi));
}

*/

/*
float fnCircleAreaInscribedInAIsoceledTringle(float A,float B) {

    return Pi * pow (B,2) /4 * ((2*A-B)/(2*A+B));
}
*/

/*
float fnCircleAreaAroundAnArbitaryTringle(float A, float B,float C) {
    const float P = (A + B + C) / 2;

    return Pi * pow((A*B*C) /(4 *sqrt(P*(P-A)*(P-B )*(P-C))), 2);
}

*/

/*
int fnPower1(int A) {

    return pow(A, 2);


}


int fnPower2(int A) {

    return pow(A, 3);


}


int fnPower3(int A) {

    return pow(A, 4);


}

*/

/*
int fnNumberToPower(int Number, int M) {

    return pow(Number,M);


}
*/

/*
int fnTaskDurationInSecounds(int D, int H,int M, int S) {

    return D*24*60*60 + H*60*60 + M*60 +S;


}
*/

/*

int fnTaskDurationToSecounds(long S) {

    long seconds = S % secs_to_min;
    long minutes = S / secs_to_min % mins_in_hour;
    long days = S / secs_to_min / mins_in_hour / hours_in_day;

    return seconds ;


}

*/

/*
* Dont Know How to Convert This Program To Function
* Dont Understand How to print more than one variable in the fucntion
* return A ,b,C
*
* With parameter is each fucntion call ?
* return V;
* return M;
long fnSecoundToDaysHoursAndSeconds(long input_seconds) {

    long input_seconds;
    cin >> input_seconds;

    long Seconds = input_seconds % secs_to_min;
    long Minutes = input_seconds / secs_to_min % mins_in_hour;
    //long Hours = input_seconds / secs_to_min / mins_in_hour;
    long Days = input_seconds / secs_to_min / mins_in_hour / hours_in_day;

    return Days;
    return Hours;
    return Minutes;
    return Secounds;



}

*/

/*
//Make a Global Variable To Explore Scopes
int X = 10;

int fnX() {
    int X = 20;
    return X;
}

*/

/*
 //Can we Do Program to Do This Fucntion just With Parameters .
int fnSwap(int Number1,int Number2) {
    cout << "Hello, Please Insert Tow Numbers ";

    return Number2;
    return Number1;


}
*/

/*
struct stInfo {
    string FirstName;
    string LastName;
    short Age;
    string PhoneNumber;



};

struct stContact {

    string City;
    string Country;
    short MontlhySalray;
    int YearlySalary;
    char Gender;
    bool Married;

};

void fnReadInfo(stInfo &Info) {//HereWeHaveTheConseptOfParameterByValueOrByRefference.
    cout << "Please, Insert FirstName LastName Age & PhoneNumber in order.";
    cin >> Info.FirstName >> Info.LastName >> Info.Age >> Info.PhoneNumber;
}

void fnPrintInfo(stInfo& Info) {
    cout << "*************************" << "\n" << Info.FirstName << "\n" << Info.LastName << "\n" << Info.Age << "\n" << Info.PhoneNumber << "\n" << " *************************";

}

void fnReadContact(stContact &Contact) {//HereWeHaveTheConseptOfParameterByValueOrByRefference.
    cout << "Please, Insert City Contry Gender & IsMarried AndMontlySalray in order.";
    cin >> Contact.City >> Contact.Country >> Contact.Gender >> Contact.Married >> Contact.MontlhySalray;
}

void fnPrintContact(stContact& Conatct) {
    cout << "*************************" << "\n" << Conatct.City << "\n" << Conatct.Country << "\n" << Conatct.Gender << "\n" << Conatct.Married << "\n"  << Conatct.MontlhySalray << "\n" << "*************************";

}
*/

/*
void fnReadGrades(float X[3]) {//HereWeHaveTheConseptOfParameterByRefferenceOnlyInArrays.
    cout << "Please Insert Three Numbers to Find The AVG";
    cin >> X[0] >> X[1] >> X[2];
}

float fnPrintGrades(float X[3]) {
    return (X[0] + X[1] + X[2]) / 3 ;


}


*/

/*

struct stInfo {
    string FirstName;
    string LastName;
    short Age;
    string Phone;

};

void fnReadStudents(stInfo Students[3]) {//HereWeHaveTheConseptOfParameterByRefferenceOnlyInArrays.
    cout << "Please Insert FirstName LastName Age And Phone Number In Order For The FirstStudent[0]\n\n";
    cin >> Students[0].FirstName >> Students[0].LastName >> Students[0].Age >> Students[0].Phone;

    cout << "Please Insert FirstName LastName Age And Phone Number In Order For The FirstStudent[1]\n\n";
    cin >> Students[1].FirstName >> Students[1].LastName >> Students[1].Age >> Students[1].Phone ;
}

void fnPrintStudents(stInfo Students[3]) {
    cout << "\n" << "********************************" << "\n" << Students[0].FirstName << "\n" << Students[0].LastName
        << "\n" << Students[0].Age << "\n" << Students[0].Phone << "\n" << "********************************"
        << "\n" << "********************************" << "\n" << Students[1].FirstName << "\n" << Students[1].LastName
        << "\n" << Students[1].Age << "\n" << Students[1].Phone << "\n" << "\n";


}

*/

/*

void fnPinCheack(int &PIN) {


    cout << "Please Enter YourPIN \n";
    cin >> PIN;

    if (PIN == 1234)
    {
        cout << "\"YourBalance is: 7500.\" \n";
    }

    else {
        cout << "\"Wrong PIN\" \n";
    }


}
*/

/*
void fnAgeValidate() {

    short Age;

    cout << "Please Enter YourAge \n";
    cin >> Age;

    if (Age > 18 && Age < 45)
    {
        cout << "VaildAge \n";
    }
    else
        cout << "InVaildAge \n";


}
*/

/*
void fnAvgMarks(){

    short Mark1, Mark2, Mark3, Avg;

    cout << "Please Enter YourMarks (First Mid Final) \n";
    cin >> Mark1 >> Mark2 >> Mark3;
    Avg = (Mark1 + Mark2 + Mark3) / 3;
    if (Avg >= 50)
    {
        cout << Avg << "\n";
        cout << "Pass \n";
    }
    else
        cout << "Fail \n";

}
*/

/*
void fnIfPass() {

    short Mark;

    cout << "Please Enter YourMark \n";
    cin >> Mark;

    if (Mark >= 50)
    {
        cout << "Pass \n";
    }
    else
        cout << "Fail \n";


}
*/

/*
void fnEmloyee() {

    int X;
    bool Y;

    cout << "Please Enter Your Age And If You Have DriverLicense \n";
    cin >> X >> Y;
    if (X > 21 && Y == 1) {
        cout << "Hired";
    }

    else {
        cout << "Rejected";
    }

}
*/

/* Nested Functions With Enums.
enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };


void ShowWeekDayMenue()
{
    cout << "************************" << endl;
    cout << "       Week Days        " << endl;
    cout << "************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of day?" << endl;

}


enWeekDay ReadWeekDay()
{

    int wd;
    cin >> wd;
    // Converting To Enum.
    return (enWeekDay)wd;
}

string GetWeekDayName(enWeekDay WeekDay)
{

    switch (WeekDay) {

    case enWeekDay::Sun:
        return "Sunday";
        break;
    case enWeekDay::Mon:
        return "Monday";
        break;
    case enWeekDay::Tue:
        return "Tuesday";
        break;
    case enWeekDay::Wed:
        return "Wednesday";
        break;
    case enWeekDay::Thu:
        return "Thursday";
        break;
    case enWeekDay::Fri:
        return "Friday";
        break;
    case enWeekDay::Sat:
        return "Saturday";
        break;
    default:
        return "Not a week day!\n";
    }

}


*/

/*
void fnPrintNumbersFrom10To1() {
    for (int i = 10; i >= 0; i--)
    {
        cout << i << "\n";
    }
}
*/

/*
void fnPrintNumbersFromNTo1() {
    short N;
    cout << " Enter N To Print Numbers to it ";
    cin >> N;

    for (short i=N; i<=N; i--)
    {
        cout << i;
    }
}
*/

/*
void fnPrintNumbersFromNTo1() {
    short N;
    cout << " Enter A Number To Print From It to 1 ";
    cin >> N;
    for (short i=N; i >= 1; i--)
    {
        cout << i <<"\n";
    }
}
*/

/*
short fnSumOddNumbersFrom1ToN() {
    short N;
    cout << " Enter A Number To Sum Odd Numbers From 1 To it. \n";
    cin >> N;
    if (N % 2 == 1)
    {


        for (short i = 1; i == N; i++)
        {

            return i + N;

        }
    }
    else
    {
        cout << "Try Odd Number \n";
    }

}
*/

// C++ program to print from 1 to N using
// indirect recursion/
//#include<bits/stdc++.h>
//using namespace std;

// We can avoid use of these using references
/*int N = 20;
int n = 1;

void fun1();
void fun2();

// Prints n, increments n and calls fun1()
void fun1()
{
    if (n <= N)
    {
        cout << n << " ";
        n++;
        fun2();
    }
    else
        return;
}

// Prints n, increments n and calls fun2()
void fun2()
{
    if (n <= N)
    {
        cout << n << " ";
        n++;
        fun1();
    }
    else
        return;
}

// Driver Program
/*int main()
{
  
}

// This code is contributed by pankajsharmagfg.
*/

/* Incomplite 
short fnSumOddNumbersFrom1ToN() {
    short N;
    cout << " Enter A Number To Sum Odd Numbers From 1 To it. \n";
    cin >> N;
    if (N % 2 == 1)
    {


        for (short i = 1; i == N; i++)
        {

            return i + N;

        }
    }
  
}
*/
/*
int fnSumEvenAndOddNumbersFrom1ToN(int N) {

    cout << "Enter a Number To Sum The Even And Odd Numbers To it \n";
    cin >> N;
    if (N%2==0)
    {
        for (int i = 0; i < length; i++)
        {

        }
    }
    else if (N%2==1)
    {

    }
    


}

*/
//Program to print Numbers From 1 To 10
/*
void fnPrintNumberFrom1To10() {
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\n";
    }

}
*/

//Program to print Numbers From 10 To 1
/*
void fnPrintNumberFrom10To1() {
    cout << "Welcome Your Result Is \n";
    for (int i = 10; i >=1; i--)
    {
        cout << i << "\n";
    }

}
*/

//Program to print Numbers From 1 To n
/*
void fnPrintNumberFrom1Ton() {
    int n;
    cout << "Welcome Please Enter A Number To Print Number from One To it \n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n";
    }

}
*/

//Program to print Numbers From n To 1
/*
void fnPrintNumberFromnTo1() {
    int n;
    cout << "Welcome Please Enter A Number To Print Number from n To One \n";
    cin >> n;
    cout << "\n";
    for (int i = 1; n>=i; n--)
    {
        cout << n << "\n";
    }

}
*/

//Program to print The Odd Numbers From 1 To 10
/*
void fnPrintNumberFrom1To10() {
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {
        if (i%2==1)
        {
            cout << i << "\n";
        }
       
    }

}
*/
//Program to print The Even Numbers From 1 To 10
/*
void fnPrintNumberFrom1To10() {
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }

    }

}
*/

//Program to print The Even Numbers From 10 To 1
/*
void fnPrintEvenNumbersFrom10To1() {
    cout << "Welcome Your Result Is \n";
    for (int i = 10; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }

    }

}
*/

//Program to print The Odd Numbers From 10 To 1
/*
void fnPrintNumberFrom10To1() {
    cout << "Welcome Your Result Is \n";
    for (int i = 10; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            cout << i << "\n";
        }

    }

}
*/

//Program to print The Sum Of Odd Numbers From 1 To 10
/*
void fnPrintTheSumOfOddNumbersFrom1To10() 
{
    int sum=0;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {
        
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
        
    }
    cout << sum << "\n";
}
*/
//Program to print The Sum Of Even Numbers From 1 To 10
/*
void fnPrintTheSumOfEvenNumbersFrom1To10()
{
    int sum = 0;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }

    }
    cout << sum << "\n";
}

*/
//Program to print The Sum Of Even Numbers From 10 To 1
/*
void fnPrintTheSumOfEvenNumbersFrom10To1()
{
    int sum = 0;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }

    }
    cout << sum << "\n";
}
*/
//Program to print The Sum Of Odd Numbers From 10 To 1
/*
void fnPrintTheSumOfOddNumbersFrom10To1()
{
    int sum = 0;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 1)
        {
            sum = sum + i;
        }
        cout << sum << "\n";
    }
    cout << sum << "\n";
}
*/
/* Simulation 
void fnPrintTheSumOfEvenNumbersFrom1To10()
{
    int sum = 0;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        cout << i <<  " This Is I Value \n";
        cout << sum << " This Is Sum Value\n";
    }
    cout << " This Is Final Sum " << sum << "\n";
}
*/

//Program to print The Sum Of Odd Numbers From 1 To n
/*
void fnPrintTheSumOfOddNumbersFrom1ToN()
{
    int sum = 0,n=0;
    cout << "Welcome Please Insert A Number To Print Numbers from 1 To it \n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 1)
        {
            sum = sum + i;
        }

    }
    cout << sum << "\n";
}
*/

//Program to print The Sum Of Even Numbers From 1 To n
/*
void fnPrintTheSumOfEvenNumbersFrom1ToN()
{
    int sum = 0, n = 0;
    cout << "Welcome Please Insert A Number To Print Numbers from 1 To it \n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }

    }
    cout << sum << "\n";
}
*/
//Program to print The Sum Of Even Numbers From n To 1
/*
void fnPrintTheSumOfEvenNumbersFromNTo1()
{
    int sum = 0, n = 0;
    cout << "Welcome Please Insert A Number To Print Numbers from 1 To it \n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }

    }
    cout << sum << "\n";
}
*/
//Program to print The Sum Of Odd Numbers From n To 1
/*
void fnPrintTheSumOfOddNumbersFromNTo1()
{
    int sum = 0, n = 0;
    cout << "Welcome Please Insert A Number To Print Numbers from 1 To it \n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 1)
        {
            sum = sum + i;
        }

    }
    cout << sum << "\n";
}
*/
//Program to print The Mul Of Odd Numbers From 1 To 10
/*
void fnPrintTheSumOfMulOfEvenNumbersFrom1To10()
{
    int sum = 0;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 1)
        {
            sum = sum * i;
        }
        cout << i << " This Is I Value \n";
        cout << sum << " This Is Sum Value\n";
    }
    cout << " This Is Final Sum " << sum << "\n";
}
*/
//Program to print The Mul Of Odd Numbers From 1 To 10
/*
void fnPrintTheSumOfMulOfEvenNumbersFrom1To10()
{
    int sum = 1;
    cout << "Welcome Your Result Is \n";
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 1)
        {
            sum = sum * i;
        }
        cout << i << " This Is I Value \n";
        cout << sum << " This Is Sum Value\n";
    }
    cout << " This Is Final Sum " << sum << "\n";
}
*/
//Program to print The Mul Of Odd Numbers From 1 To 10
/*
void fnFactorialOfN()
{
    int sum = 1, n = 0;
    cout << "Welcome Please Insert A Number To Print The FactorialOfNumber \n";
    cin >> n;
    if (n>=0)
    {
        for (int i = 1; i <= n; i++)
        {


            sum = sum * i;


        }
        cout << sum << "\n";
    }
}
*/
//Program to print The The N Power To M
/*
void fnNtoThePowerM() {
    short n, m, p;
    cout << "Please Enter The NUMBER And The POWER ";
    cin >> n >> m;
    if (m>0)
    {
      
        for (short i = m; i >= m; i--)
        {
                p = p * n;
        }
        cout << p << endl;

    }
    else
    {
        cout << "Try A Postive Power\n";
    }
}
*/
//Program to print The The N Power To M (Incomplete)
/* Incomlite 
short fnPower(short &n, short &m) {


    short p=1;
    cout << "Please Insert The Number And The Power";
    cin >> n >> m;
    if (m > 0)
    {
        for (; n>0; n--)
        {
            p = p;
          
            
            
        }


        return p;

        //cout << "Your Result Is\n" << p;

    }
    else if (m==0) {
        cout << p;
    }
    else
    {
        cout << "Try A Postive Power";
    }


}

*/
//Program to print The Letters From A-Z
/*
void fnAZ() {
    
    for (int i = 65; i <=90; i++)
    {
        cout << char(i) << "\n";

    }


}
*/
//Program to print The Letters From a-z
/*
void fnaz() {

    for (int i = 97; i <= 122; i++)
    {
        cout << char(i) << "\n";

    }


}
*/
//Program To Print Card Info
/*
struct stInfo {
    string FirstName;
    string LastName;
    string PhoneNumber;
    string City;
    string Country;
    char Gender;
    short Age;
    short MonthlySalary;
    short YearlySalary;
    bool Married;

};


void fnReadInfo(stInfo &Info) {
    cout << "Please, Insert FirstName LastName Age & PhoneNumber in order.";
    cin >> Info.FirstName >> Info.LastName >> Info.Age >> Info.PhoneNumber;
    cout << "Please, Insert City Contry Gender & IsMarried AndMontlySalray in order.";
    cin >> Info.City >> Info.Country >> Info.Gender >> Info.Married >> Info.MonthlySalary;
}

void fnPrintInfo(stInfo &Info) {
    cout << "*************************" << "\n" << Info.FirstName << "\n" << Info.LastName << "\n" << Info.Age << "\n" << Info.PhoneNumber << "\n" 
   << "\n" << Info.City << "\n" << Info.Country << "\n" << Info.Gender << "\n" << Info.Married << "\n" << Info.MonthlySalary << "\n" << "*************************";
}
*/

// Program To Print Cards Automaticly With 100 Of Users 21:00 Video Number 54;
/*
struct stInfo {
    string FirstName;
    string LastName;
    string PhoneNumber;
    string City;
    string Country;
    char Gender;
    short Age;
    short MonthlySalary;
    short YearlySalary;
    bool Married;

};


void fnReadInfo(stInfo& Info) {
    cout << "Please, Insert FirstName LastName Age & PhoneNumber in order.";
    cin >> Info.FirstName >> Info.LastName >> Info.Age >> Info.PhoneNumber;
    cout << "Please, Insert City Contry Gender & IsMarried AndMontlySalray in order.";
    cin >> Info.City >> Info.Country >> Info.Gender >> Info.Married >> Info.MonthlySalary;
}

void fnPrintInfo(stInfo& Info) {
    cout << "*************************" << "\n" << Info.FirstName << "\n" << Info.LastName << "\n" << Info.Age << "\n" << Info.PhoneNumber << "\n"
        << "\n" << Info.City << "\n" << Info.Country << "\n" << Info.Gender << "\n" << Info.Married << "\n" << Info.MonthlySalary << "\n" << "*************************";
}
*/
//First Program
/*
void ReadArrayData(int Arr1[100], int& Length)
{


    cout << "How Many Numbers do you want to enter? 1 to 100?\n";
    cin >> Length;

    for (int i = 0; i <= Length - 1; i++)
    {

        cout << "Please enter Number " << i + 1 << endl;
        cin >> Arr1[i];

    }

}

void PrintArrayData(int Arr1[100], int Length)
{

    cout << "\nArray Data...\n";

    for (int i = 0; i <= Length - 1; i++)
    {

        cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;

    }

}

int CalculateArraySum(int Arr1[100], int Length)
{
    int Sum = 0;

    for (int i = 0; i <= Length - 1; i++)
    {
        Sum += Arr1[i];

    }

    return Sum;

}

float CalculateArrayAverage(int Arr1[100], int Length)
{
    return  (float)CalculateArraySum(Arr1, Length) / Length;
}
*/
//HomeWorkSoultion
/*
struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};


void ReadInfo(strInfo& Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
    cout << "\n\n";


}

void PrintInfo(strInfo Info)
{

    cout << "\n**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "**********************************\n\n";


}



void ReadPersonsInfo(strInfo Persons[100], int& NumberOfPersons)
{

    cout << "How many persons?\n";
    cin >> NumberOfPersons;

    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {

        cout << "Please Enter Person's " << i + 1 << " Info: \n";
        ReadInfo(Persons[i]);


    }
}


void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons)
{


    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Person's " << i + 1 << " Info: \n";
        PrintInfo(Persons[i]);
    }


}
*/
//fn To print Inverted Triangle
/*
void fnPrintInvertedTriangle() {
    for (int i = 10; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
      cout << "\n";
    }

}
*/
//fn To print Inverted 10-1
/*
void fnPrintInverted10To1() {
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
        }
        cout << "\n" ;
    }

}
*/
//fn To print Inverted 1-10 as a ladder // In The First Loop 1-10 Print 1 Statement
//And In The Secound Loop Print 2 Statement Like This to The Loop 10 Print 10 Statement ;
/*
void fnPrintInverted1To10() {
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

}
*/
//fn To Print A-F As A ladder;
/*
void fnPrintAToFAsALadder() {
    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << "\n";
    }

}
*/
//fn To Print F-A As A ladder Not Complete;
/*
void fnPrintFToAAsALadder() {
    for (int i = 70; i <= 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(i) << " ";
        }
        cout << "\n";
    }

}
*/
//fn To Print 1-10 2-10 7-10 To 10 As A ladder ;
/*
void fnFromAndTo() {
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <=10; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

}
*/
//fnFromAndTo()
/*
void fnFromAndTo(int From, int To) {
    short Number;
    cout << "Plz, Insert a Number Between Tow Numbers";
    while (Number <From || Number >To)
    {

        cin >> Number;
        cout << "Wrong Number Plz, Insert A Number From " << From << "And" << To;

    }
    */
//fnDefferince Between For And While ;
/*
void fnForWhileDiffernece() {
    for (int i = 1; i <=5; i++)
    {
        cout << i ;
    }
    cout << "\n";
    short j = 1;
    while (j<=5)
    {
        cout << j;
        j++;
    }

}
*/
//fnPrintPostiveNumber()
/*
void fnPrintPostiveNumber() {
    short n;
    cout << "Enter A POSTIVE Number \n";
    cin >> n;

    while (n<0)
    {
        cout << "Wrong Number Plz, Insert Only Postive Number. \n";
        cin >> n;
    }
    cout << "This Is Your Number :" << n;
}
*/
//fnNumberValdtion()
/*
void fnNumberValdtion(int From,int To) {
    
        short n;
        cout << "Enter A Number Between " << From << "And" << To;
        cin >> n;

        while (n >To or n<From)
        {
            cout << "Wrong Number Plz, Insert Only Between ." << From << "And" << To;
            cin >> n;
        }
        cout << "This Is Your Number :" << n;
    


}
*/
//fnPrint1To10ByWhile()
/*
void fnPrint1To10ByWhile() {
    short n=1;
    while (n<=10)
    {
        cout << n;
        n++;
    }
*/
//fnPrintNto1ByWhile()
/*
void fnPrintNto1ByWhile() {
    short n;
    cout << "Enter N:";
    cin >> n;
    while (n >= 1)
    {
        cout << n;
        n--;
    }

}
*/
//fnPrint1toNByWhile()
/* Numbers Screen 
void fnPrint1toNByWhile() {
    short n;
    cout << "Enter N:";
    cin >> n;
    
    while (n >= 0 )
    {
        cout << n;
        n++;
    }

}

//
        int i ;
        cout << " Enter Dick Number In The Pussy :";
        cin >> i;
    while (i <= i)
    {
        
        cout << i;
        i++;
    }

*/
//fnFactorial();
/*
void fnFactorial() {
    short n;
    cout << "Welcome Please Insert A Number To Print The FactorialOfNumber \n";
    cin >> n;
    while (n < 0) {
    
        cout << " Enter Postive Number Try Again";
        cin >> n;
    }
    int sum = 1;
    
    
    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {


            sum = sum * i;


        }
        cout << sum << "\n";
    }
}
*/
// fnPower() Incomplete
/*
void fnPower() {

    short n, m, p;
    cout << "Please Enter The NUMBER And The POWER ";
    cin >> n >> m;
    
    while (n < 0) {

        cout << " Enter Postive Number Try Again";
        cin >> n;
    }

    if (n==0)
    {
        cout << "1";
    }
    

    if (m>0)
    {

        for (short i = m; i >= m; i--)
        {
                p = p * n;
        }
        cout << p << endl;

    }
    else
    {
        cout << "Try A Postive Power\n";
    }
}
*/
//Incomplete kEEP SUM
/*
void fnKeepSum() {
    double n,x=0;
    cout << "Welceome To Keep Sum Calculator Enter Tow Numbers To Sum ,Enter -99 To Exit ";
    cin >> n;
    cin >> x;


}
*/
//Incomplete KEEP SUM
/* 
void fnKeepSum() {
    double n, x = 0;
    cout << "Welceome To Keep Sum Calculator Enter Tow Numbers To Sum ,Enter -99 To Exit ";
    cin >> n;
    do (n != -99)
    {
        x = x + n;
        cout << x;
    }

}
*/
//Print ATM
/*
void fnATM() {
    short PIN;

    cout << "Please Enter YourPIN \n";
    cin >> PIN;

    if (PIN == 1234)
    {
        cout << "\"YourBalance is: 7500.\" \n";
    }

    else {
        cout << "\"Wrong PIN\" \n";
    }

}
*/
//DoWhile
/*
void fnTryingDoWhile() {
    int i;
    cin >> i;
    do
    {
        
        cout << "Wrong Number:\n";
        cin >> i;
    } while (i<0);




}
*/
//fnKeepSum() 
/* void fnKeepSum() {
    double n, x = 0;
    cout << "Welceome To Keep Sum Calculator Enter Tow Numbers To Sum ,Enter -99 To Exit ";
    cin >> n;
    do
    {
        x = x + n;
        cout << x;
        cin >> n;
    } while (n != -99);
    
        
    

}
*/

//Print Your Name Input With Parameter
/*void fnPrintName(string Name) {

    cout << "Please Insert Name To Print" << Name;
    

}
*/
// notOptimaze Fn Becase Tow Behaviurs In Onefn 
//Print Your Entered Name 
/*
string fnPrintEnteredName() {
    cout << "Welcome Please Inser Your Name:\n";
    string Name;
    cin >> Name;
    return Name;


}
*/

//Optimation
/*
string fnReadName() {
    string Name;
    getline(cin, Name);
    return Name;

}

void fnPrintName(string Name) {

    cout << "Please Insert Name To Print" << Name;


}
*/
//Print A Normal Program To Check If The Number Even Or Odd
/*
void fnEvenOrOdd(int Number ) {
    if (Number%2==0)
    {
        cout << "\nEven";
    }
    else
    {
        cout << "\nOdd";
    }
    
}
*/

//Print A Optimized Resubailty Program To do The Previes Task
/*
enum enNumberType {
    Odd=1,
    Even=2
};

int fnGetNumber() {
    int Number;
    cout << "\nPlease Insert Number: ";
    cin >> Number;
    return Number;

}

enNumberType fnCheckNumber(int Number) {

    if (Number % 2 == 0)
    {
        return enNumberType::Even;

        //cout << "\nEvenNumber";
    }
    else
    {
        return enNumberType::Odd;
       // cout << "\nOddNumber";
    }
}

void fnPrintNumber(enNumberType NumberType) {
    if (NumberType == enNumberType::Even)
    {
        cout << "\n Even Number";
    }
    else
    {
        cout << "\nOdd Number";
    }



}
*/

//Write An Optimize Program And Reusple Code To Do The Follwing
//* Print Hired If The User's Age is greater Than 21 and Has a Driving Licnse

/*
enum enAnswerType
{
    HasDrivingLicense=1 ,hasnt=0
};

short fnReadUserAge(short Age) {
    cout << "\nWelcome Please Enter Your Age";
    cin >> Age;
    return Age;


}
bool fnReadLicenseExist(bool Answer) {
    cout << "\nDo You Have A Drive License? ";
    cin >> Answer;
    return Answer;
}
//void  {
enAnswerType fnCheackIfAccept(bool Answer) {

    if (Answer == true )
    {
        return enAnswerType::HasDrivingLicense;

        //cout << "\nEvenNumber";
    }
    else
    {
        return enAnswerType::hasnt;
        // cout << "\nOddNumber";
    }
    



}
void fnPrintHiredOrRejected(enAnswerType AnswerType) {

    
        if (AnswerType == enAnswerType::HasDrivingLicense)
        {
            cout << "\n Hired";
        }
        else
        {
            cout << "\nRejected";
        }


}
*/

//Write A Program To Cheack If The Number Is Even Or Odd
/*

enum enNumberType {Odd =1 , Even =0};

int fnReadNumber() {
    int number;
    cout << "Welcome To Cheak Numbers System, Please Insert Number";
    cin >> number;
    return number;

}

enNumberType CheackNumber(int number) {
    if (number % 2 == 0)
    {
        return enNumberType::Even;
    }
    else
    {
       return enNumberType::Odd;
    }

}

void fnPrintNumber(enNumberType number) {
    if (number == enNumberType::Even)
    {
        cout << "Even ";
    }
    else
    {
        cout << "Odd";
    }
}
*/

// Here I had have Error With Return And cout
/* 
enNumberType CheackNumber(int number) { 
    if (number%2==0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }

}
*/

//Write An Optimzed Program To Print Hired To Someone's Age Is 21 or Larger
//And Has A Driving License ,Otherwise Print Rejected ;

//HrHiredSystem
//Dosent Work
/*
void fnReadAge() {
    
    cout << "Please Enter Your Age \n";
    cin >> Age;
    
}

void fnReadDrivingLicense() {
    
    cout << "Do You Have A driving License? \n";
    cin >> License;
    

}


void fnPrintHrDiscation() 
    {
    
        if (Age >=21 && License ==1)
        {
            cout << "Conc,You Hired";

        }
        else
        {
            cout << "Sorry, You Rejected";
        }

    }




    */

    //Some BullShit
    /*
    * Some BullShit
    short fnHrDiscationAboutAge(short Age) {
        if (Age >= 21)
        {
            return Age;

        }

    }


    bool fnHrDiscationAboutLicense(bool License) {
        if (License == 1)
        {
            return License;

        }

    }





    }
    */
//HiredRejected System
/*

struct stDiscation{
    short Age;
    bool HasDrivingLicense;

};

stDiscation fnReadInfo() {
    stDiscation User;
    cout << "Welcome, Enter Your Age\n";
    cin >> User.Age;

    cout << "Do You Have Driving License\n";
    cin >> User.HasDrivingLicense;
    return User;
}

bool fnIsAccepted(stDiscation User) {
    // Look At This Shortcut One Statement
    /*
    if (User[10].Age >=21 and User[10].HasDrivingLicense ==true )
    {
        cout << "Hired";
    }
    else
    {
        cout << "Rejected";
    }

    return User[10];
    
    return (User.Age >= 21 and User.HasDrivingLicense == 1);
}

//Using Void For Print Function
//Here Is Where I Dont Know How To Use Array Of Struct By 10 Element
//Hint : We Use This Divided Code to For easy maintenance and adjustments after a month or more
void fnResultPrint(stDiscation User) {

    if (fnIsAccepted(User))
    {
        cout << "\nHired" << endl;

    }
    else
    {
        cout << "\nRejected" <<endl;
    }
}

*/

//Hired Rejected System Start
/*
struct stDiscation {
    short Age;
    bool HasDrivingLicense;
    bool HasRecommedation;

};

stDiscation fnReadInfo() {
    stDiscation User;
    cout << "Welcome, Enter Your Age\n";
    cin >> User.Age;

    cout << "Do You Have Driving License\n";
    cin >> User.HasDrivingLicense;
    cout << "Do You Have mediator\n";
    cin >> User.HasRecommedation;
    return User;
}

bool fnIsAccepted(stDiscation User) {

    // Look At This Shortcut One Statement
    /*
    if (User.Age >=21 and User.HasDrivingLicense ==true )
    {
        cout << "Hired";
    }
    else
    {
        cout << "Rejected";
    }

    return User;
    //
    if (User.HasRecommedation == 1)
    {
        return true;
    }
    else
    {
        return (User.Age >= 21 and User.HasDrivingLicense == 1);
    }
}

//Using Void For Print Function
//Here Is Where I Dont Know How To Use Array Of Struct By 10 Element
//Hint : We Use This Divided Code to For easy maintenance and adjustments after a month or more
void fnResultPrint(stDiscation User) {

    if (fnIsAccepted(User))
    {
        cout << "\nHired" << endl;

    }
    else
    {
        cout << "\nRejected" <<endl;
    }
}

*/
//Print FullName And With Revresed Fucntion System
/*
struct stInfo {
    string FirstName;
    string LastName;

};
stInfo fnReadName() {
    stInfo Info;
    cout << "Enter Your First Name";
    cin >> Info.FirstName;
    cout << "Enter Your Last Name";
    cin >> Info.LastName;
    return Info;
   

}
string fnGetFullName(stInfo Info,bool Revresed) {
    string FullName;
    if (Revresed)
    {
        FullName = Info.LastName +" "+ Info.FirstName;
    }
    else
    {
        FullName = Info.FirstName + Info.LastName;
    }
    
    return FullName;
}

void fnPrintFullName(string FullName) {
    cout << FullName;
   

}
*/

//HalfNumber System
/*
float fnReadNumber() {
    float Number;
    cout << "Enter a Number:";
    cin >> Number;
    return Number;

}

float fnCalculateHalfNumber(float Number) {
   
    return (float) Number / 2;
     

}

float fnPrintHalfNumber(float Number)
{
    //string Result = "Half Of" + to_string(Number) + "Is" + to_string(fnCalculateHalfNumber(Number));
    fnCalculateHalfNumber(Number);
    return Number;
    


}

*/

//Grades System Incomplete
/*
struct Grade
{
    short First;
    short Mid;
    short Final;
};

void fnSetData(Grade Student) {
     
    cout << "Welcome To Grades System\n Enter First Mark:";
    cin >> Student.First;

    cout << "Welcome To Grades System\n Enter Mid Mark:";
    cin >> Student.Mid;

    cout << "Welcome To Grades System\n Enter Final Mark:";
    cin >> Student.Final;

}

void fnPrintGrades(Grade Student) {

    cout << Student.First;
    cout << Student.Mid;
    cout << Student.Final;
}
*/

//Pass Or Fail System Completed ****
/*
enum enMark{Pass =1 , Fail =0};
int fnReadMark() {
    short Mark;
    cout << "Welcome To Pass Or Fail System\n Enter a MARK\n ";
    cin >> Mark;
    return Mark;
}
int fnCheakIfPass(short Mark) {
    
    
    if (Mark >=50)
    {
        return stMark::Pass;
    }
    else
    {
        return stMark::Fail;
    }


}
void fnPrintResult(short Mark) {
    if (fnCheakIfPass(Mark) == stMark::Pass)
    {
        cout << "Pass";

    }
    else 
    {
        cout << "Fail";
    }
}


*/

//Sum Of Three Numbers System Completed
/*
int fnReadNumbers(int &Number1, int &Number2, int &Number3) {
    
    cout << "Welcome To Three Numbers Sum Function\n Enter The First Number\n ";
    cin >> Number1;

    cout << "\n Enter The Secound Number\n ";
    cin >> Number2;

    cout << "\n Enter The Thrd Number\n ";
    cin >> Number3;

    return Number1,Number2, Number3;
}


int fnSumNumbers(int Number1,int Number2,int Number3) {
    int Total;
    return Total = Number1 + Number2 + Number3;
}

void fnPrintResult(int Total) {
    
    cout << "The Sum Of Is: " << Total;
}
*/
//Average Of Three Numbers System Completed
/*
int fnReadNumbers(int& Number1, int& Number2, int& Number3) {

    cout << "Welcome To Three Numbers Sum Function\n Enter The First Number\n ";
    cin >> Number1;

    cout << "\n Enter The Secound Number\n ";
    cin >> Number2;

    cout << "\n Enter The Thrd Number\n ";
    cin >> Number3;

    return Number1, Number2, Number3;
}


int fnAverageNumbers(int Number1, int Number2, int Number3) {
    int Total;
    return Total =(float) (Number1 + Number2 + Number3)/3;
}

void fnPrintResult(int Total) {

    cout << "The Average Of Is: " << Total;
}
*/

//Average Pass/Fail System
/*
enum enMark { Pass = 1, Fail = 0 };
int fnReadMark() {
    short Mark[2];
    cout << "Welcome To  Average Pass / Fail System\n Enter a MARK\n ";
    cin >> Mark[0] >> Mark[1] >> Mark[2];
    return Mark[0],Mark[1],Mark[2];
}
int fnCheakIfPass(short Mark[2]) {


    if (Mark[] >= 50)
    {
        return enMark::Pass;
    }
    else
    {
        return enMark::Fail;
    }


}
void fnPrintResult(short short Mark[2]) {
    if (fnCheakIfPass(Mark) == enMark::Pass)
    {
        cout << "Pass";

    }
    else
    {
        cout << "Fail";
    }
}
*/

//Print A-Z System
/*void fnPrintAToZ() {
    for (int i = 65   ; i <=90; i++)
    {
        cout << char(i) << "\n";
    }

}
*/

//CalculateMonthsNeedsToSettleTheLoan System
/*
int fnReadInput(int &LoanAmount, int &MonthlyPayment) {
    
    cout << "Welcome To Bank Sytem\n Please Enter The LoanAmount ";
    cin >> LoanAmount;

    cout << "Please Enter The MontlyPayment ";
    cin >> MonthlyPayment;
    return LoanAmount;
    return MonthlyPayment;

}

int fnCalculateMonthsNeeded(int &Total, int LoanAmount,int MonthlyPayment) {

    return  Total = (float)(LoanAmount / MonthlyPayment);
}

void fnPrint(int Total) {
    cout << "Your Months Needs:" << Total;
}
*/

//Average Pass/Fail System Incomplete
/*
enum enMark { Pass = 1, Fail = 0 };
int fnReadMark() {
    int Mark[3];
    cout << "Welcome To  Average Pass / Fail System\n Enter a MARK\n ";
    cin >> Mark[1] >> Mark[2] >> Mark[3];
    return Mark[1], Mark[2], Mark[3];
}
int fnCheakIfPass(int Mark[]) {


    if ((Mark[1] + Mark[2] + Mark[3] )/3 >= 30)
    {
        return enMark::Pass;
    }
    else
    {
        return enMark::Fail;
    }


}
void fnPrintResult(int Mark[]) {
    if (fnCheakIfPass(Mark) == enMark::Pass)
    {
        cout << "Pass";

    }
    else
    {
        cout << "Fail";
    }
}







*/

//Average Pass Or Fail System Incomplete
/*
enum enMark { Pass = 1, Fail = 0 };

int fnReadNumbers(int& Number1, int& Number2, int& Number3) {

    cout << "Welcome To The System\n Enter The First Number\n ";
    cin >> Number1;

    cout << "\n Enter The Secound Number\n ";
    cin >> Number2;

    cout << "\n Enter The Thrd Number\n ";
    cin >> Number3;

    return Number1, Number2, Number3;
}


int fnAverageNumbers(int Number1, int Number2, int Number3) {
    int Total;
    return Total = (float)(Number1 + Number2 + Number3) / 3;
}


int fnCheakIfPass(int &Total) {


    if (Total >= 50)
    {
        return enMark::Pass;
    }
    else
    {
        return enMark::Fail;
    }

}

void fnPrintResult(int Total) {
    if (fnCheakIfPass(Total) == enMark::Pass)
    {
        cout << "Pass";

    }
    else
    {
        cout << "Fail";
    }
}


void fnPrintAverage(int &Total) {

    cout << "The Average Of Is: " << Total;
}

*/
//Swap Function Incomlete
/*
void fnswap(int* x, int* y)
{
    
    *x = *y;
    
    
}
*/

//Class Triangle
/*
class triangle
{
public:

    void fnReadBase_Height(int base, int height) {
        cout << "Enter The Base And Height";
        cin >> base >> height;
        
    };

    int fnArea(int base, int height) {
        return base * height;
    };

    // Destrator Right ? ~triangle();

private:
    int base;
    int height;
};
*/
//Complete To The Class
/*

triangle::triangle()
{
}

triangle::~triangle()
{
}
*/
/*
class studnet
{
public:
    
        studnet() { 
            // Look here that we are use constractor
            //to make initial values to these *lock*
            //values;
            strcpy_s(name, "AllaAkbar");
            id = 0;
        
        };
    //~studnet();

private:
    char name[20];
    int id;
};
*/
//Class Complete...
/*studnet::studnet()
{
}

studnet::~studnet()
{
}
*/
//Trying Classes
/*
class MyClass {
public:
    int x;
    MyClass() {
        x = 0;
    }
};

*/
/*
struct PartsType {
    string partname;
    int partnum;
    double price;
    int quantitiesInStock;



};

PartsType Inventory[10];

void fnInitilizeComponentsInArray() {
    int i = 0;

    cout << "Enter Name Of Component";
    cin >> Inventory[i].partname;

    cout << "Enter Number";
    cin >> Inventory[i].partnum;

    cout << "Enter Price";
    cin >> Inventory[i].price;

    cout << "Enter Qu In Stock";
    cin >> Inventory[i].quantitiesInStock;





}


void fnPrintComponentsInArray() {
    fnInitilizeComponentsInArray();

    for (int i = 0; i < 3; i++)
    {


        cout << Inventory[i].partname;


        cout << Inventory[i].partnum;


        cout << Inventory[i].price;


        cout << Inventory[i].quantitiesInStock;


    }


}
*/

//Exersise Demo Class And SwapFn
/*
* /*
* Create a class called carpark that has int data member for car id, int
data member for charge/hour, and float data member
for the parked time. Make functions to set data members and 
show the charges and parked hours of the corresponding car 
id. Make functions for setting and showing the dat
a members. Member function should be called from other functions.

* 
class demo
{
private:
    int rollno; //data member
    float score; //data member
public:
    void setdata(int rl, float sc) //member function
    {
        rollno = rl; score = sc;
    }
    void setdata()
    {
        cout << "Enter the roll no: \n";
        cin >> rollno;
        cout << "Score: \n";
        cin >> score;
    }
    void showdata() //member function
    {
        cout << "\Roll No: " << rollno << "has scored " << score << endl;
    }
    void fnswap() {
        int Number1, Number2;
        cout << "Hello, Please Insert Tow Numbers ";
        cin >> Number1 >> Number2;
        cout << Number2 << "\n" << Number1;

};

*/
/*
* Create a class called carpark that has int data member for car id, int
data member for charge/hour, and float data member
for the parked time. Make functions to set data members and
show the charges and parked hours of the corresponding car
id. Make functions for setting and showing the dat
a members. Member function should be called from other functions.
*/
//Working On carPark Class 5:20 PM 8/4/23
/*
class carpark {

    int id;
    int chargeperhour;
    float parkedtime;
public:
    void setdata(int id, float sc) 
    {
        id = id;
        chargeperhour = chargeperhour;
        parkedtime = parkedtime;
    }
    void setdata()
    {

    }
    void showdata() 
    {
        
    }

};
*/


/* This Is Assiment Lab 1&2 */
//Specialization deffernt lines print simple ex
/*
void fnSpLines() {
    string id, name;
    cout << "Enter Your Name ";
    cin >> name;
    cout << "Enter Your ID";
    cin >> id;

    cout << "Your Name Is: " << name << "\n" << "Your ID Is: " << id;


}
// all About tow numbers
void fnallAboutTowNumbers() {

    int number1, number2;
    cout << "Enter Tow Numbers\n";
    cin >> number1 >> number2;
    cout << "Summation Is: " << number1 + number2 << "\n";
    cout << "Subtraction Is: " << number1 - number2 << "\n";
    cout << "Multiplication Is: " << number1 * number2 << "\n";
    cout << "Division Is: " << number1 / number2 << "\n";
    cout << "reminder Is: " << (number1 % number2) << "\n";




}

void fnareaCircumfernceOfsquare() {

    int circumfernce, area , lenth;
   

    cout << "Enter The Lenth Of Square";
    cin >> lenth;

    circumfernce = 4 * lenth;
    area = lenth * lenth;

    cout << "the circumfernce is: " << circumfernce << "\n";
    cout << "the area is " << area << "\n";

}

void fnCircleArea() {

    const float Pi = 3.14;
    float Radies;
    cout << "Insert The Radies To Calculate The Circle Area: ";
    cin >> Radies;
    cout << "The Circle Area is: " << Pi * Radies * Radies;


}


void fnFeittoTemp() {
    
    int temp;
    cout << "Enter The Temp In Fahrenhite To Convert To Celsius";
    cin >> temp;
    cout << "Temprature In Celsius is: " << (5 / 9) * (temp - 32);

}

void threenumbersum() {

    double FirstNumber, SecoundNumber, ThirdNumber;
    cout << "Enter Three Numbers to Calculate The Sumbition";
    cin >> FirstNumber >> SecoundNumber >> ThirdNumber;
    cout << "The Sum Of The Previes Three Numbers Is: " << FirstNumber + SecoundNumber + ThirdNumber;


}

void fnswap() {

    int number1, number2, space;
    cout << "Enter Tow Number To SEE Magic Betwwen Them";
    cin >> number1 >> number2;

    space = number1;
    number1 = number2;
    number2 = space;

    cout << number1 << number2;


}
*/

//Example generated by chatgpt 
/*
class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0) {}
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    Time add_time(Time other) {
        Time result;
        int carry = 0;

        result.second = (second + other.second) % 60;
        carry = (second + other.second) / 60;

        result.minute = (minute + other.minute + carry) % 60;
        carry = (minute + other.minute + carry) / 60;

        result.hour = (hour + other.hour + carry) % 24;

        return result;
    }

    void display_12hr() {
        string am_pm = (hour >= 12) ? "PM" : "AM";
        int display_hour = (hour > 12) ? hour - 12 : hour;
        if (display_hour == 0) display_hour = 12;

        cout << (display_hour < 10 ? "0" : "") << display_hour << ":"
            << (minute < 10 ? "0" : "") << minute << ":"
            << (second < 10 ? "0" : "") << second << " "
            << am_pm << endl;
    }

    void display_24hr() {
        cout << (hour < 10 ? "0" : "") << hour << ":"
            << (minute < 10 ? "0" : "") << minute << ":"
            << (second < 10 ? "0" : "") << second << endl;
    }
};
*/

//run of chatgpt exercise 2
/*
class StringConcat {
private:
    char* str; // dynamic character array
    int len; // length of string
public:
    // default constructor
    StringConcat() {
        str = nullptr; // initialize to null pointer
        len = 0;
    }

    // parameterized constructor
    StringConcat(const char* s) {
        len = 0;
        while (s[len] != '\0') { // find length of string
            len++;
        }
        str = new char[len + 1]; // allocate memory for string
        for (int i = 0; i < len; i++) { // copy string into allocated memory
            str[i] = s[i];
        }
        str[len] = '\0'; // add null terminator
    }

    // destructor
    ~StringConcat() {
        delete[] str; // free dynamically allocated memory
    }

    // function to concatenate two strings and return the result
    char* concatenate(const StringConcat& s1, const StringConcat& s2) {
        int len1 = s1.len;
        int len2 = s2.len;
        char* result = new char[len1 + len2 + 1]; // allocate memory for concatenated string
        int i = 0;
        for (int j = 0; j < len1; j++) { // copy first string into result
            result[i++] = s1.str[j];
        }
        for (int j = 0; j < len2; j++) { // concatenate second string onto result
            result[i++] = s2.str[j];
        }
        result[i] = '\0'; // add null terminator
        return result;
    }

    // function to display the stored string
    void display() {
        if (str != nullptr) {
            cout << str << endl;
        }
    }
};
*/

//Class Departemnt 
/*
class Department {
private:
    int id;
    string name;
public:
    // constructors
    Department() : id(0), name("") {
        cout << "Default constructor called" << endl;
    }
    Department(int i, string n) : id(i), name(n) {
        cout << "Parameterized constructor called" << endl;
    }

    // destructor
    ~Department() {
        cout << "Object " << id << " goes out of the scope" << endl;
    }

    // display department details
    void display() {
        cout << "Department ID: " << id << endl;
        cout << "Department Name: " << name << endl;
    }
};
*/

//class of studnt id and name 
/*
class student
{
public:
    student();


    ~student();

private:
    string id[30];
    string name[30];
    string mark[3];
};

student::student()
{
}

student::~student()
{
}

*/
// another incompleted class 
/*
class MyClass
{
public:
    MyClass();
    ~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}



*/

//bisection_method
/*
double f(double x) {
    return x * x * x - x * x + 2;
}

double bisection_method(double a, double b, double tolerance) {
    double c = 0.0;
    while (fabs(b - a) > tolerance) {
        c = (a + b) / 2.0;
        if (f(c) == 0.0) {
            return c;
        }
        else if (f(a) * f(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return c;
}

// Run of 

        double a, b, tol;
        cout << "Enter the interval [a, b]: ";
        cin >> a >> b;
        cout << "Enter the tolerance: ";
        cin >> tol;
        double root = bisection_method(a, b, tol);
        cout << "The root is " << root << endl;
        return 0;

*/

//lagrange
/*
double lagrange(vector<double> x_values, vector<double> y_values, double x) {
    int n = x_values.size();
    double y = 0;
    for (int i = 0; i < n; i++) {
        double p = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                p *= (x - x_values[j]) / (x_values[i] - x_values[j]);
            }
        }
        y += y_values[i] * p;
    }
    return y;
}
//rUN OF

        int n;
        cout << "Enter the number of data points: ";
        cin >> n;
        if (n < 2) {
            cout << "Error: at least two data points are required for interpolation." << endl;
            return 1;
        }
        vector<double> x_values(n);
        vector<double> y_values(n);
        for (int i = 0; i < n; i++) {
            cout << "Enter x" << i << ": ";
            cin >> x_values[i];
            cout << "Enter y" << i << ": ";
            cin >> y_values[i];
        }
        double x;
        cout << "Enter the value of x to estimate: ";
        cin >> x;
        double y = lagrange(x_values, y_values, x);
        cout << "The estimated value of f(" << x << ") using Lagrange method is " << y << endl;
        return 0;


*/
/*
double derivative(vector<double> x_values, vector<double> y_values, double x, double h) {
    double y = lagrange(x_values, y_values, x);
    double yh = lagrange(x_values, y_values, x + h);
    double dy = (yh - y) / h;
    return dy;
}



run of 

  int n;
    cout << "Enter the number of data points: ";
    cin >> n;
    if (n < 2) {
        cout << "Error: at least two data points are required for interpolation." << endl;
        return 1;
    }
    vector<double> x_values(n);
    vector<double> y_values(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter x" << i << ": ";
        cin >> x_values[i];
        cout << "Enter y" << i << ": ";
        cin >> y_values[i];
    }
    double x, h;
    cout << "Enter the value of x to estimate: ";
    cin >> x;
    cout << "Enter the value of h for the approximation: ";
    cin >> h;
    double y = lagrange(x_values, y_values, x);
    double dy = derivative(x_values, y_values, x, h);
    cout << "The estimated value of f(" << x << ") using Lagrange method is " << y << endl;
    cout << "The estimated value of f'(" << x << ") using Lagrange method is " << dy << endl;
    return 0;

*/

//Neville's Method
/*
// Function to calculate the value of f(x)
double f(double x) {
    return sin(x);
}

// Function to implement Neville's method
double neville_method(vector<double> x, vector<double> y, double point) {
    int n = x.size();

    // Create a matrix to store the values
    vector<vector<double>> F(n, vector<double>(n));

    // Initialize the diagonal with y values
    for (int i = 0; i < n; i++) {
        F[i][i] = y[i];
    }

    // Compute the table
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            F[j][i + j] = ((point - x[j]) * F[j + 1][i + j] - (point - x[i + j]) * F[j][i + j - 1]) / (x[i + j] - x[j]);
        }
    }

    // Return the value of the polynomial at the given point
    return F[0][n - 1];
}
//run of 

int n;
cout << "Enter the number of points: ";
cin >> n;

// Initialize vectors to store the values of x and y
vector<double> x(n);
vector<double> y(n);

// Loop to take input from the user
for (int i = 0; i < n; i++) {
    cout << "Enter the value of x" << i << ": ";
    cin >> x[i];
    cout << "Enter the value of y" << i << ": ";
    cin >> y[i];
}

double point;
cout << "Enter the value of point to interpolate: ";
cin >> point;

// Call the neville_method function to calculate the value of the polynomial at the given point
double result = neville_method(x, y, point);

cout << "The value of the function at x = " << point << " is " << result << endl;

return 0;
*/

/*
* backward 
* #include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter the data points in the form of x, y: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    vector<vector<double>> b(n, vector<double>(n));

    for (int i = 0; i < n; i++) {
        b[i][0] = y[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            b[i][j] = b[i][j - 1] - b[i - 1][j - 1];
        }
    }

    cout << "Backward Differences Table: " << endl;
    for (int i = 0; i < n; i++) {
        cout << x[i] << "\t";
        for (int j = 0; j < i + 1; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
* centred 
* #include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter the data points in the form of x, y: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double h = x[1] - x[0];
    vector<double> dy(n);

    dy[0] = (y[1] - y[0]) / h;
    dy[n - 1] = (y[n - 1] - y[n - 2]) / h;

    for (int i = 1; i < n - 1; i++) {
        dy[i] = (y[i + 1] - y[i - 1]) / (2 * h);
    }

    cout << "The first derivative of the function is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "dy/dx(" << x[i] << ") = " << dy[i] << endl;
    }

    return 0;
}

*/

/*
* forward 
*  int n;
        cout << "Enter the number of data points: ";
        cin >> n;

        vector<double> x(n), y(n);
        cout << "Enter the data points in the form of x, y: " << endl;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        vector<vector<double>> f(n, vector<double>(n));

        for (int i = 0; i < n; i++) {
            f[i][0] = y[i];
        }

        for (int j = 1; j < n; j++) {
            for (int i = 0; i < n - j; i++) {
                f[i][j] = f[i + 1][j - 1] - f[i][j - 1];
            }
        }

        cout << "Forward Differences Table: " << endl;
        for (int i = 0; i < n; i++) {
            cout << x[i] << "\t";
            for (int j = 0; j < n - i; j++) {
                cout << f[i][j] << "\t";
            }
            cout << endl;
        }

        return 0;
    */

/*
* find forth dervative 
* #include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter the data points in the form of x, y: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    vector<vector<double>> c(n, vector<double>(n));

    for (int i = 0; i < n; i++) {
        c[i][0] = y[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            c[i][j] = c[i+1][j-1] - c[i][j-1];
        }
    }

    double h = x[1] - x[0];
    double fourthDerivative = c[2][4] / (12 * h * h * h * h);

    cout << "The fourth derivative at x = " << x[2] << " is " << fourthDerivative << endl;

    return 0;
}


//Run of 

        int n;
        cout << "Enter the number of data points: ";
        cin >> n;

        vector<double> x(n), y(n);
        cout << "Enter the data points in the form of x, y: " << endl;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        double h = x[1] - x[0];
        vector<double> dy(n);

        dy[0] = (y[1] - y[0]) / h;
        dy[n - 1] = (y[n - 1] - y[n - 2]) / h;

        for (int i = 1; i < n - 1; i++) {
            dy[i] = (y[i + 1] - y[i - 1]) / (2 * h);
        }

        cout << "The first derivative of the function is: " << endl;
        for (int i = 0; i < n; i++) {
            cout << "dy/dx(" << x[i] << ") = " << dy[i] << endl;
        }

        return 0;


class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
        }
        else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
            new_node->prev = current;
        }
    }

    Node* search(int data) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == data) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    void deleteNode(int data) {
        Node* node_to_delete = search(data);
        if (node_to_delete != nullptr) {
            if (node_to_delete->prev != nullptr) {
                node_to_delete->prev->next = node_to_delete->next;
            }
            else {
                head = node_to_delete->next;
            }

            if (node_to_delete->next != nullptr) {
                node_to_delete->next->prev = node_to_delete->prev;
            }

            delete node_to_delete;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " <-> ";
            current = current->next;
        }
        std::cout << "None" << std::endl;
    }
};


    int main() {


        /* ??? ???? ????? ???? ????? ?? ????? ??????
            DoublyLinkedList dll;

            // Insertion
            dll.insert(10);
            dll.insert(20);
            dll.insert(30);

            // Display the list
            dll.display(); // Output: 10 <-> 20 <-> 30 <-> None

            // Search
            Node* node = dll.search(20);
            if (node) {
                std::cout << "Found: " << node->data << std::endl; // Output: Found: 20
            }
            else {
                std::cout << "Not Found" << std::endl;
            }

            // Deletion
            dll.deleteNode(20);
            dll.display(); // Output: 10 <-> 30 <-> None

            return 0;
        






       /*
        for (int n = 1; n < 11; n++)
        {
            cout << n << "\t";
        }

        for (int n = 1; n < 11; n++)
        {

            cout << n << "\n";
        }


            int tableSize = 10; // set the table size to 10
            
            // Print the multiplication table from 1 to tableSize
            
            for (int i = 1; i <= tableSize; i++) {
                for (int j = 1; j <= tableSize; j++) {
                   
                    cout  << i * j << "\t";
                }
                cout << endl;
            }
            return 0;
            
        */




 //Print Pass Exersice 1/a
    /*
    int mark;
    cout << "Enter The Mark from \"100\": ";
    cin >> mark;

    if (mark>=50)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL! you must take this course again";
    }
    */
 //Updated Version from Pass V2.0
    /*
    int mark;
    cout << "Enter The Mark from \"100\": ";
    cin >> mark;

    if (mark >=50)
    {
        cout << "PASS";
    }
    if (mark>=90)
    {
        cout << "\"A\"";
    }
    else if (mark >= 80)
    {
        cout << "\"B\"";
    }
    else if (mark >= 70)
    {
        cout << "\"C\"";
    }
    else if (mark >= 60)
    {
        cout << "\"D\"";
    }
    else if (mark >= 50)
    {
        cout << "\"E\"";
    }
    else
    {
        cout << "FAIL! you must take this course again" << "\"F\"";
    }
    */
 //rewrite in switch
    /*
        int mark;

        cout << "Enter your mark (0-100): ";
        cin >> mark;

        
        switch (mark / 10) {
        case 10:
        case 9:
            cout << "PASS" << "\t";
            cout << "Your grade is A";
            break;
        case 8:
            cout << "PASS" << "\t";
            cout << "Your grade is B" ;
            break;
        case 7:
            cout << "PASS" << "\t";
            cout << "Your grade is C" ;
            break;
        case 6:
            cout << "PASS" << "\t";
            cout << "Your grade is D" ;
            break;
        case 5:
            cout << "PASS" << "\t";
            cout << "Your grade is E" ;
            break;


        default:
            cout << "FAIL! you must take this course again";
        }
        */
 //exersice 2
    /*
            float angle;

            cout << "Enter Angle In Degrees";
            cin >> angle;

            if (angle < 0 || angle > 360) 
                cout << "Invild.";
            
            else if (angle == 0 || angle == 360) 
                cout << "Full Angle";
            else if (angle > 0 && angle < 90) 
                cout << "Actual Angle";
            
            else if (angle == 90) 
                cout << "Right Angle.";
            
            else if (angle > 90 && angle < 180) 
                cout << "Obtuse Angle.";
            
            else if (angle == 180) 
                cout << "Stright Angle.";
            
            else if (angle > 180 && angle < 360) 
                cout << "Reflux Angle.";
            */
 // Exerssise 3 Calculate the netslary
    /*
    float basicSalary, netSalary, tax;

    // Input basic salary
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    // Calculate tax based on the basic salary
    if (basicSalary > 1000) {
        tax = 0.16;
    }
    else if (basicSalary >= 500 && basicSalary <= 1000) {
        tax = 0.10;
    }
    else {
        tax = 0.08;
    }

    // Calculate net salary
    netSalary = basicSalary - (basicSalary * tax);

    // Display the net salary
    cout << "Net salary: " << netSalary << endl;
     */
 //Ex 4
    /*
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 5 == 0 && num % 6 == 0) {
        cout << num << " is divisible by both 5 and 6.\n";
    }
    else if (num % 5 == 0) {
        cout << num << " is divisible by 5 only.\n";
    }
    else if (num % 6 == 0) {
        cout << num << " is divisible by 6 only.\n";
    }
    else {
        cout << num << " is not divisible by 5 or 6.\n";
    }
    */
  //Ex5
    /*
    int num1, num2, num3, max, min;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find maximum
    if (num1 > num2) {
        max = num1;
        if (num3 > num1) {
            max = num3;
        }
    }
    else {
        max = num2;
        if (num3 > num2) {
            max = num3;
        }
    }

    // Find minimum
    if (num1 < num2) {
        min = num1;
        if (num3 < num1) {
            min = num3;
        }
    }
    else {
        min = num2;
        if (num3 < num2) {
            min = num3;
        }
    }

    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;
    */
  //Exersise 6
    /*
    char op;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        // if the operator is not valid, print an error message
        cout << "Error: Invalid operator!";
        break;
    }
    */
    //class department
    /*
        Department d1; // default constructor
        d1.display();

        Department d2(101, "IT"); // parameterized constructor
        d2.display();

        {
            Department d3(102, "HR"); // parameterized constructor
            d3.display();
        } // destructor called for d3

        return 0;
    

    */
    //run of chatgpt
    /*
        StringConcat s1("Engineers are");
        StringConcat s2(" Creatures of logic");
        StringConcat s3;

        char* result = s3.concatenate(s1, s2);
        s3.display();

        delete[] result; // free dynamically allocated memory

        return 0;
    */
    //run of the chatgpt example 
    /*
        Time t1; // initialize to 0
        Time t2(5, 30, 15); // initialize to specific values

        Time t3 = t1.add_time(t2); // add t1 and t2

        t1.display_12hr(); // display in 12-hour format
        t2.display_24hr(); // display in 24-hour format
        t3.display_12hr(); // display the result in 12-hour format

        return 0;
    */
    //allAboutTowNumbers();
    /*
    demo obg1 ,obg2;
    obg1.setdata();
    obg1.showdata();

    obg2.setdata();
    obg2.showdata();
    */

    //fnPrintComponentsInArray();
    //Run Of Class
    /*
    MyClass obj;
    cout << obj.x;
    return 0;
    */
    //Run Of Class Program 
    /*
    triangle obj;
    int base, height;
    cout << obj.fnArea(base, height);
    */
    //int *x, *y;
    //fnswap(x,y);
    //Run Of Average Pass Or Fail System
    /*
    int Number1, Number2, Number3,Total;
    fnReadNumbers(Number1, Number2, Number3);
    fnPrintResult(fnAverageNumbers(Number1, Number2, Number3));
    fnPrintAverage(Total);
    */

    //Run Of Average Pass Or Fail System
    //RUN of Incomplete Program
    /*
    int Mark[3];
    fnReadMark();
    fnCheakIfPass(Mark);
    fnPrintResult(Mark);

    */
    //Run Of The Bank Months Nedded System
    /*

    int Total,LoanAmount,MonthlyPayment;

    fnReadInput(LoanAmount,MonthlyPayment);
    fnCalculateMonthsNeeded(Total, LoanAmount, MonthlyPayment);
    fnPrint(Total);
    */

    //fnPrintAToZ();
    //Run Of Sum3Numbers System
    /*
    int Number1, Number2, Number3;
    fnReadNumbers(Number1, Number2, Number3);
    fnPrintResult(fnSumNumbers(Number1, Number2, Number3));
    */
    //Run Of Average3Numbers System
    /*
    int Number1, Number2, Number3;
    fnReadNumbers(Number1, Number2, Number3);
    fnPrintResult(fnAverageNumbers(Number1, Number2, Number3));
    */

   // short Mark;
    //fnPrintResult(fnReadMark());
    //Grade Student;
    //fnSetData(Student.First);
    //fnPrintGrades(Student);
    //cout << fnPrintHalfNumber(fnCalculateHalfNumber(fnReadNumber()));
    //fnPrintFullName(fnGetFullName(fnReadName(),true));
    //stDiscation User;
    //fnResultPrint(fnReadInfo());
    /*
    short Age; bool License;
    int Age;
    bool License;
    fnReadAge();
    fnReadDrivingLicense();
    fnPrintHrDiscation();
    */

    //Usage Of Function In Function
    //fnPrintNumber(CheackNumber(fnReadNumber()));
   
    /*
    fnReadUserAge(21);
    fnReadLicenseExist(1);
    fnCheackIfAccept();
    fnPrintHiredOrRejected();
    */
    //fnPrintHiredOrRejected(fnCheackIfAcceptfnReadUserAge(12));
    //int Number;
    //fnPrintNumber(fnCheckNumber(fnGetNumber()));
    //fnEvenOrOdd(412);
    //fnReadName();
    //fnPrintName("Qusai");
    //cout << "Your Name Is: " << fnPrintEnteredName();
     //fnPrintName("Qusai");
    // Print The Number Index[2]
    /*
    int i=0;
    int arr[10] = {10,20,44,55,33,22,99,100 };

    do
    {
      cout << arr[i];
      break;
    } while (arr[i] == 20);
    */
    //fnKeepSum();
    //fnTryingDoWhile();
    //fnATM();
    //fnKeepSum();
    //fnKeepSum();
    //fnPower();
    //fnFactorial();
    //fnPrint1toNByWhile();
    //fnPrintNto1ByWhile();
    //fnPrint1To10ByWhile();
    //fnNumberValdtion(17,29);
    //fnPrintPostiveNumber();
    //fnForWhileDiffernece();
    //fnFromAndTo();
    //fnPrintFToAAsALadder();
    //fnPrintFToAAsALadder();
    //fnPrintAToFAsALadder();
    //fnPrintInverted1To10();
    //fnPrintInvertedTriangle();
    //H();
    //Program To Print Invertied Triangle
    /*
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }
        cout << "\n";
    }
    */
    //Program To Print Square Of *
    /*
    //cout << "**********\n**********\n**********\n**********\n**********\n**********\n**********\n**********\n**********\n**********\n";
    /*
    for (short i = 1; i <=10; i++)
    {
        cout << "**********\n";
    }
   
    /*
    for (short i = 1; i <= 10; i++)
    {
        for (short j = 1; j <=10; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    */
    //Program To Print Triangle Of *
    /*
    for (short i = 1; i <= 10; i++)
    {
        for (short j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    */
    //Program To Print Invertied Triangle Not Working
    /* From External Source Just For Watch
    for (int i{ 1 }; i <= 10; i++) {
        for (int j{ i - 1 }; j <= 9; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    */
    //Program To Print CharactersToEachOther
    /*
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << "\n";
        }
        
    }
    */
    //Program To Print 1 Cloumns Of 10 Element
    /*for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <=10; j++)
        {
            cout << "*"<<"\n";
        }
    }
    */
    //Program To Print Inverted Triangle Just Trying
    /*
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << "*" << "\n";
        }
    }
    */
    //Program To Print Tringle
    /*
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }
        cout << "\n";
    }
    */
    //Program To Print Ten Rows *Ten Columns
    /*
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout <<"************" << "\n";
        }
    }
    */
    //Program To Print Mul Taple
    /*
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <=10; j++)
        {
            cout << i << "*" << j << "=" << i * j << "\n";
        }
    }
    */
    //HomeWorkSolution
    /*
    strInfo Persons[100];
    int NumberOfPersons = 1;

    ReadPersonsInfo(Persons, NumberOfPersons);
    PrintPersonsInfo(Persons, NumberOfPersons);

    */
    //HomeWork Soulutions
    /*
    int Arr1[100], Length = 0;
    ReadArrayData(Arr1, Length);
    PrintArrayData(Arr1, Length);

    cout << "\n************************************\n";
    cout << "Sum = " << CalculateArraySum(Arr1, Length) << endl;
    cout << "Average = " << CalculateArrayAverage(Arr1, Length) << endl;
    */
   
    /* Video Number 54
    int n,CardUsers[100];
    cout << "Welcome To Automatic Card Generator ";
    cout << "How Many Users You Want To Enter\n";
    cin >> n;

    for (int i=0; n>i ; n--)
    {
       fnReadInfo(CardUsers[i]);
    }

    */
    //stInfo Mohammed,Qusai;
  //
  //
  //fnReadInfo(Mohammed);
  //
  //fnPrintInfo(Mohammed);
  //
  //fnReadInfo(Qusai);
  //
  //fnPrintInfo(Qusai);
  //
    //fnReadInfo();
   //fnPrintInfo();
    //fnaz();
    //fnAZ();
    /*
    short n, m;
    cout << fnPower(n, m);
    fnNtoPowerM();
    fnFactorialOfN();
    fnPrintTheSumOfMulOfEvenNumbersFrom1To10();
    fnPrintTheSumOfMulOfEvenNumbersFrom1To10();
    fnPrintTheSumOfOddNumbersFromNTo1();
    fnPrintTheSumOfEvenNumbersFromNTo1();
    fnPrintTheSumOfEvenNumbersFrom1ToN();
    fnPrintTheSumOfOddNumbersFrom1ToN();
    fnPrintTheSumOfEvenNumbersFrom1To10();
    fnPrintTheSumOfOddNumbersFrom10To1();
    fnPrintTheSumOfEvenNumbersFrom10To1();
    fnPrintTheSumOfEvenNumbersFrom1To10();
    fnPrintTheSumOfNumbersFrom1To10();
    fnPrintNumberFrom10To1();
    fnPrintEvenNumbersFrom10To1();
    fnPrintNumberFrom1To10();
    fnPrintNumberFrom1To10();
    fnPrintNumberFromnTo1();
    fnPrintNumberFrom1Ton();
    fnPrintNumberFrom1To10();
    fnPrintNumberFrom10To1();
    */
    /*
    fun1();
    return 0;
    //cout << fnSumOddNumbersFrom1ToN() << "\n";
    */
    //fnPrintNumbersFromNTo1();
    //fnPrintNumbersFromNTo1();
    //fnPrintNumbersFrom10To1();
    /*
    for ( int i = 1; i <100; i++)
    {
        cout << " Sob7an Allh" << i <<endl;
    }
    */
    /*
    for (int i = 10; i >= 0; i--)
    {
        cout << i << "\n";
    }
    */
    /*
  // Incomplite
  short N;
  cout << " Enter N To Print Numbers to it ";
  cin >> N;

  for (int i = N; i < N; i++)
  {
      cout << i+N;
  }
  */

    /* // Incolmplete
  for (int i = 10; i <=0; i--)
  {
      cout << i << "\n";
  }

  */

    /*
     for (int i = 1; i <= 10; i++)
     {
         cout << i <<"\n";
     }
     */

    /* Nested Fucntions With Enums
         ShowWeekDayMenue();

         cout << "today is " << GetWeekDayName(ReadWeekDay()) << endl;

         /*

         short Grade;
         cout << "Welcome To The student marks into grades converting System";
             cout << "Please Insert Your Grade";
         cin >> Grade;

         switch (Grade) {//Cant Use Between In Switch Case
         case 90 && 100:
             cout << "A";
             break;
         case Grade >= 80 && Grade <= 89:
             cout << "B";
             break;
         case Grade >= 70 && Grade <= 79:
             cout << "C";
             break;
         case Grade >= 60 && Grade <= 69:
             cout << "D";
         case Grade >= 50 && Grade <= 59:
             cout << "E";
             break;

         default:
             cout << "F \n\n\n";
             break;
         }
         */
    /*
         short Month;
         cout << "Enter The Month To PrintThe Name Of. \n (1) Jan:\n  (2) Feb:\n  (3) March\n  (4) Apr:\n (5) May\n  (6) Jun:\n (7) Jul:\n(8) Aug:\n(9) Sep\n(10) Oct:\n(11) Nov:\n(12) Dec:\n (5) May\n  (6) Jun:\n ";
         cin >> Month;

         switch (Month) {
         case 1:
             cout << "Jun";
             break;
         case 2:
             cout << "Feb";
             break;
         case 3:
             cout << "Mar";
             break;
         case 4:
             cout << "Apr";
         case 5:
             cout << "May";
             break;
         case 6:
             cout << "Jun";
             break;
         case 7:
             cout << "Jul";
             break;
         case 8:
             cout << "Aug";
             break;
         case 9:
             cout << "Sep";
             break;
         case 10:
             cout << "Oct";
         case 11:
             cout << "Nov";
             break;
         case 12:
             cout << "Dec";
             break;

         default:
             cout << "Error! Wrong Day \n\n\n";
             break;
         }
         */
    /*
         short Day;
         cout << "Enter The Day To Decaide \n (1) Sun:\n  (2) Mon:\n  (3) Tus\n  (4) Wed:\n (5) Thr\n  (6) Fri:\n (7) Sat:\n";
         cin >> Day;

         switch (Day) {
         case 1:
             cout << "Sun";
             break;
         case 2:
             cout << "Mon";
             break;
         case 3:
             cout << "Tue";
             break;
         case 4:
             cout << "Wed";
         case 5:
             cout << "Thurs";
             break;
         case 6:
             cout << "Fri";
             break;
         case 7:
             cout << "Sat";
             break;
         default:

             cout << "Error! Wrong Day \n\n\n";
             break;
         }

         */
    /*
         char oper;
         float num1, num2;
         cout << "Enter an operator (+, -, *, /): ";
         cin >> oper;
         cout << "Enter two numbers: " << endl;
         cin >> num1 >> num2;

         switch (oper) {
         case '+':
             cout << num1 << " + " << num2 << " = " << num1 + num2;
             break;
         case '-':
             cout << num1 << " - " << num2 << " = " << num1 - num2;
             break;
         case '*':
             cout << num1 << " * " << num2 << " = " << num1 * num2;
             break;
         case '/':
             cout << num1 << " / " << num2 << " = " << num1 / num2;
             break;
         default:
             // operator is doesn't match any case constant (+, -, *, /)
             cout << "Error! The operator is not correct";
             break;
         }

         */

    /*
         fnEmloyee();
         */
    /*fnIfPass();
         * */
    /*fnAvgMarks();
         */
    /*fnAgeValidate();
         */

    /*
         int PIN;

         fnPinCheack(PIN);
         */

    /*
         short PIN;

         cout << "Please Enter YourPIN \n";
         cin >> PIN;

         if (PIN == 1234 )
         {
             cout << "\"YourBalance is: 7500.\" \n";
         }

         else {
             cout << "\"Wrong PIN\" \n";
         }

            */

    /*
            short Age;

            cout << "Please Enter YourAge \n";
            cin >> Age;

            if (Age > 18 &&Age < 45 )
            {
                cout << "VaildAge \n";
            }
            else
                cout << "InVaildAge \n";
                */


    /*
                short Mark1, Mark2, Mark3,Avg;

                cout << "Please Enter YourMarks (First Mid Final) \n";
                cin >> Mark1 >> Mark2 >> Mark3;
                Avg = (Mark1 + Mark2 + Mark3) / 3;
                if ( Avg>= 50)
                {
                    cout << Avg <<"\n";
                    cout << "Pass \n";
                }
                else
                    cout << "Fail \n";

                    */

    /*
              short Mark;

              cout << "Please Enter YourMark \n";
              cin >> Mark;

              if (Mark >= 50)
              {
                  cout << "Pass \n";
              }
              else
                  cout << "Fail \n";

              */

    /*
                   int X;
                   bool Y;

                   cout << "Please Enter Your Age And If You Have DriverLicense \n";
                   cin >> X >> Y;
                       if (X > 21 && Y ==1) {
                           cout << "Hired";
                       }

                       else {
                           cout << "Rejected";
                       }
                       */

    /*
                       stInfo Students[3];

                       fnReadStudents(Students);
                       fnPrintStudents(Students);





                       /*
                       stInfo Students[40];
                       Students->FirstName = "Qusai Al Bedawi";
                       Students[0].LastName = " ";
                       Students[0].Age = 21;
                       Students[0].Phone = " ";
                       */
  
  
    /*
                       float X[3];
                       fnReadGrades(X);
                       cout << "*************************" << "\n" << fnPrintGrades(X) << "\n" << "*************************";
                       */
   
    /*
                         float X[3];
                         cout << "Please Insert Three Numbers To find The Average\n";

                         cin >> X[0] >> X[1] >> X[2];


                         cout << (X[0] + X[1] + X[2]) / 3;
                         */
  
  
    /*
                         stInfo Person1Info;
                         stContact Person1Contact;

                         fnReadContact(Person1Contact);

                         fnPrintContact(Person1Contact);
                         */
  
    /*
                         int Number1, Number2;




                         fnSwap(Number1, Number2);
                         */
  
    /*
                         int X = 30;

                         cout << ::X;
                         cout << X;
                         cout << fnX();

                         */
  
    /*
                         * Made in 25/2/2023 5:39 PM
                         cout << "Hello, Please Enter the seconds To calc Days Hours Mintes And Secounds In Order ";
                         long input_seconds;
                         cin >> input_seconds;

                         long seconds = input_seconds % secs_to_min;
                         long minutes = input_seconds / secs_to_min % mins_in_hour;
                         long days = input_seconds / secs_to_min / mins_in_hour / hours_in_day;

                         cout << days << " : "
                             << minutes << " : "
                             << seconds << " : " << input_seconds;
                             */
  
    /*
                             cout << "Hello, Please Enter the days, hours, minutes, and seconds in order ";
                             int D, H,  M,  S;
                             cin >> D >> H >> M >> S;
                             cout << "TaskDurationInSecounds is \n" << fnTaskDurationInSecounds(D, H , M ,S);

                             */
    /*
                             cout << "Enter A Number then The Power ";
                             float Number,M;
                             cin >> Number >> M;
                             cout << "The CircleArea is \n" << fnNumberToPower(Number,M);

                             */



  
  
    /*
                             cout << "Enter A Number to Power it ";
                             float A;
                             cin >> A ;
                             cout << "The CircleArea is \n" << fnPower1(A) << "\n" << fnPower2(A) << "\n" << fnPower3(A);

                             */
  
    /*
                             cout << "Enter The A And B to Calculate CircleAreaInscribedInAIsoceledTringle  ";
                             float A, B,C;
                             cin >> A >> B >> C;
                             cout << "The CircleArea is " << fnCircleAreaAroundAnArbitaryTringle(A, B,C);
                             */
  
    /*
                             cout << "Enter The A And B to Calculate CircleAreaInscribedInAIsoceledTringle  ";
                             float A,B;
                             cin >> A >> B;
                             cout << "The CircleArea is " << fnCircleAreaInscribedInAIsoceledTringle(A,B);
                             */
  
    /*
                             cout << "Enter The L ";
                             float A;
                             cin >> A;
                             cout << "The CircleArea is " << fnCircleAreaAlongCircumference(A);

                             */
  
  
    /*
                             cout << "Enter The Lenth of The Rectangle Side To Calculate Circle Area  ";
                             float A;
                             cin >> A;
                             cout << "The CircleArea is " << fnCircleAreainscribedAsquare(A);

                             */
  
  
    /*
                             cout << "Enter The Diameter ";
                             float A;
                             cin >> A;
                             cout << "The CircleArea is " << fnCircleAreathroghDiameter(A);
                             */
  
    /*
                             cout << "Enter The Radius ";
                             float A;
                             cin >> A ;
                             cout << "The CircleArea is " << fnCircleArea(A);
                             /*






                             /*
                             cout << "Enter The Lenth and Width ";
                             float A, B;
                             cin >> A >> B;
                             cout << "The RectangleAreathroghDiagonal is " << RectangleAreathroghDiagonal(A, B);
                             */
  
  
    /*
                             cout << "Enter The Lenth and Width ";
                             int A, B;
                             cin >> A >> B;
                             cout << "The RectangleArea is " << RectangleArea(A, B);
                             */
  
  
    /*
                             fnswap();
                            */
  
  
    /*
                            PrintName();
                            */
  
  
  
    /*
                            Print();
                            */
  
  
    /*
                            int A, B;

                            cout << "Enter Number1 & Number2";
                            cin >> A >> B;
                            cout << fnSum(A, B);
                            */

    /*

                            //MyProceder();


                            cout << MyFunction();
                            */

    /*
                            Squre();
                            fnDisplayMyContact();
                            Text();
                            H();
                            */


    /*
                            string String1,String2, String3,String4;
                            cout << "Please Insert A String To Calculate Their Letters " ;
                            getline(cin, String1);
                            cout << "Please Insert String2 ";
                            cin >> String2;

                            cout << "Please Insert String3 ";
                            cin >> String3;

                            String4 = String2 + String3;

                            cout << String1.length()<<endl;
                            cout << "Caracters Of 0,2,4,7 are " << String1[0]<<" " << String1[2]<<" " << String1[4]<<" " << String1[7];
                            cout << String4;

                            cout << stoi(String2) * stoi(String3);

                            */


    /*
                            const short Pi = 3.14;

                            string st1 = "34.22";

                           int int_num =stoi(st1);
                           cout << int_num * 2<<endl;

                           float float_num = stof(st1);
                           cout << float_num * 2<<endl;

                           double double_num = stod(st1);
                           cout << double_num * 2<<endl;

                           int N1 = 20;
                           string st2 = to_string(N1);
                           cout << st2;

                           double N2 = 33.5;
                           string st3 = to_string(N2);
                           cout << st3;


                           float N3 = 55.23;
                           string st4 = to_string(N3);
                           cout << st4;



                           float N4 = 55.23;
                           string st5 = to_string(N4);
                           cout << st5;

                           */



    /*
                           * This Program Made in 23/2/2023
                           stPerson M12s;
                           //M12s.Colors = enFaviroutColors::Black;
                           M12s.ContactInfo.Email="allhakbar@gmail.com";
                           M12s.FirstName = "Qusai";
                           M12s.MaritalState = Single;
                           M12s.LastName = "Al Bedawi";
                           M12s.ContactInfo.Adress.StreetName = "Irslen,340";
                           M12s.Gender = enGender::Male;
                           M12s.Colors = enColor::Black;

                           cout << M12s.ContactInfo.Email;

                           */

    //cout << "Ali\tAhmad \tLina\nFadi\tZain\tMona";
                           //cout << "Dear Sir\\Madam\nHow are you?\nMy name is \"Qusai\" ,Nice to meet you.";




    /*
                           bool IsMarried = true;
                           short MonthlySalary = 5000;
                           short YearlySalary=5000*12;
                           cout << "*****************************\n";
                           cout << "Name: Mohammed Abu-hadhod.\n";
                           cout << "Age: 45years\n";
                           cout << "City:Amman\n";
                           cout << "Country : Jordan\n";
                           cout << "Monthly salary : 5000\n";
                           cout << "Yearly Salary:" << YearlySalary<<"\n";
                           cout << "Gender: M\n";
                           cout << "Married: "<< IsMarried <<"\n";
                           cout << "*****************************";
                          */



    /*cout << "20+30+10 = " << 20 + 30 + 10;
                          */

    /*
                          int Age = 21;
                          int YourAgeAfter5Years = Age + 5;
                          cout << "After 5 years your Age will be " << YourAgeAfter5Years <<"Years old.";
                          */
    /*
                          string Name;
                          short Age;
                          string City;
                          string Country;

                          char Gender;
                          bool IsMarried;
                          cout << "Enter Your Name: ";
                          cin >> Name;
                          cout << "Enter Your Age: ";
                          cin >> Age;
                          cout << "Enter Your City: ";
                          cin >> City;
                          cout << "Enter Your Country: ";
                          cin >> Country;
                          int MonthlySalary;

                          cout << "Enter Your Monthly Salary: ";
                          cin >> MonthlySalary;
                          short YearlySalary = MonthlySalary * 12;
                          cout << "Enter Your Gender: ";
                          cin >> Gender;
                          cout << "Are you Married Enter 1 or 0: ";
                          cin >> IsMarried;

                          cout << "Your Name is " << Name << endl << "Your Age is " << Age <<endl << "Your City is " << City <<endl<< "Your Monthly Salary " << MonthlySalary<<endl << "Your Yearly Salry " << YearlySalary <<endl << "Your Gender: " << Gender<<endl << "Are you Married: " << IsMarried;
                          */

    /*
                          short FirstNumber;
                          short SecoundNumber;
                          short ThirdNumber;
                          cout << "Please Enter Three Numbers ";
                          cin >> FirstNumber >> SecoundNumber >> ThirdNumber;
                          cout << FirstNumber + SecoundNumber + ThirdNumber;
                          */

    /*
                          short Age;

                          cout << "Please Insert Your Age";
                          cin >> Age;
                          int YourAgeAfter5Years =Age+5;
                          cout << "After 5 Years Your Age will be  " << YourAgeAfter5Years << " Years old.";
                          */
    /*short FirstNumber, SecoundNumber;
                          cout << "Please Insert Tow Numbers";
                          cin >> FirstNumber >> SecoundNumber;
                          cout << "FirstNumber+SecoundNumber= " << SecoundNumber + FirstNumber << endl;
                          cout << "FirstNumber-SecoundNumber= " << SecoundNumber - FirstNumber << endl;
                          cout << "FirstNumber*SecoundNumber= " << SecoundNumber * FirstNumber << endl;
                          cout << "FirstNumber/SecoundNumber= " << SecoundNumber / FirstNumber << endl;
                          cout << "FirstNumber%SecoundNumber= " << SecoundNumber % FirstNumber << endl;
                          */

    /*
                              float Number;
                              cout << "Please Insert Integer Number: ";
                              cin >> Number;
                              cout << "The Half Of The Number Is: " << Number / 2;
                              */
    /*
                                  short FirstNumber, SecoundNumber, ThirdNumber;
                                  cout << "Enter Three Numbers to Calculate The Sumbition";
                                      cin >> FirstNumber >> SecoundNumber >> ThirdNumber;
                                  cout << "The Sum Of The Previes Three Numbers Is: " << FirstNumber + SecoundNumber + ThirdNumber;
                                  */

    /*
                                  short FirstNumber, SecoundNumber, ThirdNumber;
                                  cout << "Enter Three Numbers to Calcalate The Average: ";
                                  cin >> FirstNumber >> SecoundNumber >> ThirdNumber;
                                  cout << (FirstNumber + SecoundNumber + ThirdNumber) / 3;
                                  */

    /*
                                      short FirstNumber, SecoundNumber;
                                      cout << "Please Insert Tow Numbers To Swap Between\n ";
                                      cin >> FirstNumber >> SecoundNumber;
                                      cout << SecoundNumber <<endl << FirstNumber;
                                      */

    /*
                                      short Lenth, Width;
                                      cout << "Please Insert The Lenth And Width To Calculate The Area of The Rectangle: ";
                                      cin >> Lenth >> Width;
                                      cout << "The Area Of The Rectangle " << Lenth * Width;
                                      */
    
    /*
                                      short Lenth, Height;
                                      cout << "Please Insert The Lenth and The height To Calculate The Area of A Tringle: ";
                                      cin >> Lenth >> Height;
                                      cout << "The Area of The Tringle Is: " << Lenth * Height / 2;
                                      */
    
    /*
                                      short Diameter;
                                      const short Pi = 3.14;
                                      cout << "Please Insert The Diameter of The Circle Area ";
                                      cin >> Diameter;
                                      cout << "The Diameter of The Circle Area " << Pi * Diameter * Diameter / 4;
                                      */
    
    /*
                                      const float Pi = 3.14;
                                      float Radies;
                                      cout << "Insert The Radies To Calculate The Circle Area: ";
                                      cin >> Radies;
                                      cout << "The Circle Area is: " << Pi * Radies * Radies;
                                      */
    
    /*
                                      const float Pi = 3.14;
                                      short L;
                                      cout << "The Circle Area along The Circumernce ";
                                      cin >> L;
                                      cout << "The Circle Area along The Circumernce Is " << L * L / 4 * Pi;
                                      */
    
    /*
                                      const float Pi = 3.14;
                                      float A, B;
                                      cout << "Insert A And B To Calculate The Area Circle in The Tringle: ";
                                      cin >> A >> B;
                                      cout << "The Area Circle in The Tringle: " << Pi * B * B / 4 * ((2 * A - B) / (2 * A + B));
                                      */
    
    /*
                                      short Number;
                                      cout << "Insert A Number To Power It To The Power 2 , 3, 4 ";
                                      cin >> Number;
                                      cout << pow(Number, 2) << "\n" << pow(Number, 3) << "\n" << pow(Number, 4);
                                      */
     
    /*
                                      short Penny, Nickel, Dime, Quarter, Dollar;
                                      cout << "Insert Penny, Nickel, Dime, Quarter, Dollar ";
                                      cin >> Penny >> Nickel >> Dime >> Quarter >> Dollar;

                                      cout << "The Total is: " << Dollar+Quarter/;

                                      */
    
    /*
                                      short TotalBill, CashPaid;
                                      cout << "Enter The TotalBill and CashPaid: ";
                                      cin >> TotalBill >> CashPaid;
                                      cout << "The Reminder is " << CashPaid - TotalBill;
                                      */
    /*
                                      double BillValue;
                                      cout << "Insert The BillValue To Print The TotalBill: ";
                                      cin >> BillValue;
                                      double services = 1.1*BillValue;
                                      double SalesTax = 1.16*BillValue;
                                      cout << "The TotalBill is: " << BillValue + SalesTax + services;
                                      */
    
    /*
                                      float Days, Hours, Minutes, Secounds;
                                      cout << "Plese Insert The Days, Hours, Minutes And Secounds You Done On The Task: ";
                                      cin >> Days >> Hours >> Minutes >> Secounds;
                                      cout << Days + Hours / 24 + Minutes / 24 / 60 + Secounds / 60 / 60 / 24;
                                      */
    
    /*
                                      double NumberOfSecounds;
                                      cout << "Please Insert The Number of Secound You Done On The Task: ";
                                      cin >> NumberOfSecounds;
                                      cout << "Your Days" << NumberOfSecounds / 24 / 60 / 60 << "\n" << "Your Hours" << NumberOfSecounds / 24 / 60 << endl
                                      << "Your minutes" << NumberOfSecounds / 60 << "\n" << "Your Secounds" << NumberOfSecounds;
                                      */
    
    /*
                                      int LoanAmount,MonthlyPayment;
                                      cout << "Enter The LoanAmount And Monthly Payment To Calculate The Number Of Months You Need";
                                      cin >> LoanAmount>> MonthlyPayment;
                                      cout << "You Need" << LoanAmount / MonthlyPayment << " Months";
                                      */
    
    /*
                                      int LoanAmount, NumberOfMonths;
                                      cout << "Enter The LoanAmount And The Number Of Months You Need To Sittle ";
                                      cin >> LoanAmount >> NumberOfMonths;
                                      cout << "Your Monthly Payment is " << LoanAmount / NumberOfMonths << "Dollar. ";
                                      */
    
    /*
                                          short A, B;
                                          bool C;
                                          cout << "Insert Tow Numbers To Check Between Them";
                                          cin >> A >> B;
                                          C = A == B;
                                          cout << "A == B " << "Is: " << C << endl;


                                          C = A <= B;
                                          cout << "A <= B " << "Is: " << C << endl;

                                          C = A >= B;
                                          cout << "A >= B " << "Is: " << C << endl;


                                          C = A != B;
                                          cout << "A != B " << "Is: " << C << endl;

                                          C = A < B;

                                          cout << "A < B " << "Is: " << C << endl;
                                          C = A > B;

                                          cout << "A > B " << "Is: " << C << endl;



                                          C = !(A == B);
                                          cout << "!(A == B) " << "Is: " << C << endl;


                                          C = !(A <= B);
                                          cout << "!(A <= B) " << "Is: " << C << endl;

                                          C = !(A >= B);
                                          cout << "!(A >= B) " << "Is: " << C << endl;


                                          C = !(A != B);
                                          cout << "!(A != B) " << "Is: " << C << endl;

                                          C = !(A < B);

                                          cout << "!(A < B) " << "Is: " << C << endl;
                                          C = !(A > B);

                                          cout << "!(A > B) " << "Is: " << C << endl;

                                          */


    /*
                                          bool A, B;
                                          cout << "Insert Tow Exprition (0,1) To Check Them ";
                                          cin >> A >> B;

                                          cout <<"A && B Is: " << A && B ;
                                          cout << "\n";
                                          cout << "A || B Is: " << A && B ;
                                          cout << "\n";
                                          cout << "!(A && B) Is: " << !(A && B) << "\n";
                                          cout << "\n";
                                          cout << "!(A || B) Is: " << !(A && B) << "\n";

                                          */

    /*
                                          cout << " (7==7) and (7>5)= " << (7 == 7) and (7 > 5) ;
                                          cout << "\n";
                                          cout << " (7 == 7) and (7 < 5)= " << (7 == 7) and (7 < 5);
                                          cout << "\n";

                                          cout << " (7 == 7) or (7 > 5)= " << (7 == 7) or (7 > 5);
                                          cout << "\n";

                                          cout << " (7 < 7) or (7 > 5)= " << (7 < 7) or (7 > 5);
                                          cout << "\n";

                                          cout << " !((7 == 7) and (7 > 5))= " << !((7 == 7) and (7 > 5));
                                          cout << "\n";

                                          cout << " (7 == 7) and !(7 > 5)= " << (7 == 7) and !(7 > 5);

                                          */


    /*
                                          cout << " (5>6) and (7=7)= or (1 or 0)= " << ( 5 > 6 && 7 == 7) || (true || false);
                                          cout << "\n";

                                          cout << " !(5<6 and 7==7) or (1 or 0)= " << !(5 < 6 and 7 == 7) or (true or false);
                                          cout << "\n";

                                          cout << " (5>6) and (7=7)= or (1 or 0)= " << ((5 > 6) and (7 == 7)) or (true or false);
                                          cout << "\n";

                                          cout << " !(5<6 and 7==7) and !(1 or 0)= " << !(5 < 6 and 7 == 7) and !(true or false);
                                          cout << "\n";

                                          cout << " ((5>6 and 7<=8) or ( 8<1 and 4<=3)) and true = " << ((5 > 6 and 7 <= 8) or (8 < 1 and 4 <= 3)) and true;
                                          cout << "\n";

                                          cout << " ((5>6 and !(7<=8)) and (8>1 or 4<=3))= " << ((5 > 6 and !(7 <= 8)) and ((8 > 1) or (4 <= 3))) or true;
                                          cout << "\n";
                                          */

    /*
                                          cout << 12 * sqrt(pow(15, 2) - pow(12, 2));
                                          */

    /*
                                          cout << "The Circle Area Is= " << Pi * pow(15,2);
                                          cout << "The Ceil of The Circle Area Is= " << ceil (Pi * pow(15, 2));
                                          */

    /*
                                          cout << "The Circle Area Inscribed Area Is= " << Pi * pow(15 / 2, 2);
                                          cout << "The Circle Area Inscribed Area Is= " << ceil (Pi * pow(15 / 2, 2));

                                          cout << pow(12, 2) / (4 * Pi);
                                          cout << floor ( pow(12, 2) / (4 * Pi));

                                          cout << (Pi * pow(12, 2) / 4) * ((2 * 15 - 12) / 2 * 15 + 12);
                                          cout << floor((Pi * pow(12, 2) / 4) * ((2 * 15 - 12) / 2 * 15 + 12));

                                          cout << Pi * pow(15 * 10 * 7 / 4 * sqrt(12 * (12 - 5)*));
                                          cout << pow(2, 2)<<endl << pow(2, 3)<<endl << pow(2, 4);

                                          */



    /*
                                          short A,B;
                                          cout << "Insert Number To Power The Power You Want ";
                                          cin >> A,B;
                                          cout << pow(A,B);

                                          */

    /*
                                          *  This Porgram made in 6:29PM 23/2/2023

                                          Coustumers m12s, m7c4, m90e;
                                          m12s.Name = "Qusai";
                                          m12s.Age = "21";
                                          m12s.City = "Amman";
                                          m12s.Country = "Jordan";
                                          m12s.Gender = 'M';
                                          m12s.MonthlySalary = 110;
                                          m12s.YearlySalary = m12s.MonthlySalary*12;
                                          m12s.Married = 0;


                                          Address QusaiLocation;
                                          QusaiLocation.Location = "iRSLEN ,78TH.";

                                          cout << m12s.Name << "\n" << m12s.Age << "\n" << m12s.City << "\n" << m12s.Country << "\n" << m12s.Gender << "\n" << m12s.Married << "\n" << m12s.MonthlySalary << "\n" << m12s.YearlySalary;
                                          */

    /*
                                          *
                                          *
                                          * Part of a program while practicing on enum
                                          *
                                          Coustumers m12s;

                                          m12s = Coustumers::Gender;
                                          */

    /*
                                          cout << Dirctions::south;
                                          cout << Gender::Female;
                                          */







