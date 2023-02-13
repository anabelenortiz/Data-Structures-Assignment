#include <iostream>
#include <ctime>

using namespace std;
 
int main() {
   time_t t = time(nullptr);
   tm *const currentDate = std::localtime(&t);
 
   int currentDay = currentDate->tm_mday;
   int currentMonth = currentDate->tm_mon + 1;
   int currentYear = currentDate->tm_year + 1900;
 
   cout << "day " << currentDay << ", " << "month "
             << currentMonth << ", " << "year " << currentYear << "\n";
        
    string name;
    int day;
    int month;
    int year;
    int age;
     //int currentDay=14, currentMonth=9, currentYear=2022;
    string message;
    char again;
    
     
    do
    {
     
    cout <<"Enter your name:  ";
    cin >> name;
    cout <<"Day of birth:   ";
    cin >> day;
    cout <<"Month of birth: ";
    cin >> month;
    cout <<"Year of birth: ";
    cin >> year;
    cout <<"Hello, " <<name <<".";
    
    if (currentYear > year && currentMonth > month )
        age = (currentYear-year);
        
        else
            if (currentYear > year && currentMonth == month && currentDay == day)
                    age = (currentYear-year);
            else
                if (currentYear > year && currentMonth <= month && currentDay < day)
                    age = (currentYear-year-1);
            
    cout <<" You are " << age <<", ";
            
    if (age <= 20){
      cout<<"you are a kid!"<<"";
    }else if (age <= 24){
      cout<<"you are so young!"<<"";
    }else if (age <= 28){
      cout<<"you are still young!"<<"";
    }else if (age > 28){
      cout<<"you are getting older!"<<"";
    }
    
    
    
    if (month == 1 && day>=20 || month == 2 && day<=18)
        cout<<" Your zodiac sign is Aquarius"<<".";
    if (month == 2 && day>=19 || month == 3 && day<=20)
        cout<<" Your zodiac sign is Pisces"<<".";
    if (month == 3 && day>=21 || month == 4 && day<=19)
        cout<<" Your zodiac sign is Aries"<<".";
    if (month == 4 && day>=20 || month == 5 && day<=20)
        cout<<" Your zodiac sign is Taurus"<<".";
    if (month == 5 && day>=21 || month == 6 && day<=20)
        cout<<" Your zodiac sign is Gemini"<<".";
    if (month == 6 && day>=21 || month == 7 && day<=22)
        cout<<" Your zodiac sign is Cancer"<<".";
    if (month == 7 && day>=23 || month == 8 && day<=22)
        cout<<" Your zodiac sign is Leo"<<".";
    if (month == 8 && day>=23 || month == 9 && day<=22)
        cout<<" Your zodiac sign is Virgo"<<".";
    if (month == 9 && day>=23 || month == 10 && day<=22)
        cout<<" Your zodiac sign is Libra"<<".";
    if (month == 10 && day>=23 || month == 11 && day<=21)
        cout<<" Your zodiac sign is Scorpio"<<".";
    if (month == 11 && day>=22 || month == 12 && day<=21)
        cout<<" Your zodiac sign is Saggitarius"<<".";
    if (month == 12 && day>=22 || month == 1 && day<=19)
        cout<<" Your zodiac sign is Capricorn"<<".";
        
        cout <<" \n Do you want to continue [Y|N]? ";
        cin >> again;
        
    } while (again == 'Y' || again == 'y');
    
}
