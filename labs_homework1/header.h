#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Student
{
private:
    string name;
    string surname;
    int album_number;
    vector<int> grades {2, 3, 4, 5 , 3, 2};

public:
    void name_set(string def_name)
    {
        name = def_name;
    }
    void surname_set(string def_surname)
    {
        surname = def_surname;
    }
    bool set_album_number(int def_album_number)
    {
        if(def_album_number >= 10000 && def_album_number<1000000)
        {
                album_number = def_album_number;
                return true;
        }
        return false;
    }
    void student_display()
    {
        cout << name << " " << surname << endl;
        cout << "Album number: " << album_number << endl;
        for(auto &grade: grades)
            cout << grade << ", ";
        cout << endl;
    }
    bool add_grade(float grade)
    {
        if(grade >= 2.0 && grade <= 5.0)
        {
            grades.push_back(grade);
            return true;
        }
        return false;
    }
    float mean_grade()
    {
        float sum = accumulate(grades.begin(), grades.end(), 0.00);
        return sum/grades.size();
    }
    bool passing_check()
    {
        int twosCounter = 0;
        for(auto &grade: grades)
        {
            if(grade == 2.0)
            {
                twosCounter++;
            }
        }
        if(twosCounter > 1)
            return false;
        else
            return true;
    }

};

class Complex
{
private:
    float realPart;
    float imaginaryPart;

public:
    Complex(){};
    Complex(float rePart, float imPart)
    {
        realPart = rePart;
        imaginaryPart = imPart;
    }
    void setRealPart(float def_real_part)
    {
        realPart = def_real_part;
    }
    void setImaginaryPart(float def_imaginary_part)
    {
        imaginaryPart = def_imaginary_part;
    }
    void readNumber()
    {
        cout << "Complex number is: " << realPart << " + " << imaginaryPart << "i" << endl;
    }
    Complex addNumbers(Complex &a)
    {
        a.realPart = a.realPart + realPart;
        a.imaginaryPart = a.imaginaryPart + imaginaryPart;
        return a;
    }
};

