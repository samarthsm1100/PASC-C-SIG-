#include <iostream>
using namespace std;

int main()
{
   

// ----------------- IF - ELSE BLOCK -----------
    int marks;
    cout << "Enter marks = ";
    cin >> marks;

    if (marks >= 40){
        cout << "Pass" << endl;
    }

    if (marks <= 40){
        cout << "Fail" << endl;
    }

    else {
        cout << "Fail" << endl;
    }

// ------------------- PROBLEMS ---------------

// Problem - 1:
    // Input --> Age of user
    // Output --> Whether user can vote or not
    // if (age >= 18) then eligible else not

// Solution:
    int age;   //store age of user
    cout << "Enter age of user = ";
    cin >> age;

    if (age >= 18){
        cout << "You are ELIGIBLE to vote!" << endl;
    }

    else {
        cout << "You are NOT ELIGIBLE to vote!" << endl;
    }

// Problem - 2:
    // Input --> marks of student (0 to 100)
    // Output --> whether student passes or not
    // Condition --> if marks > 40 then pass else fail

// Problem - 3:
    // Input --> power consumed at your home (0 to 200)
    // Output --> whether power consumed exceeds government guidelines
    // Condition --> if power > 50 then exceeds else not



// ------------------ IF - ELSE IF - ELSE LADDER ---------

int marks;
cout << "enter marks = ";
cin >> marks;

if(marks > 90){
    cout << "A" << endl;
}

else if (marks > 80){
    cout << "B" << endl;
}

else if (marks > 70){
    cout << "C" << endl;
}

else if (marks > 55){
    cout << "D" << endl;
}

else if (marks > 35){
    cout << "Pass" << endl;
}

else{
    cout << "fail" << endl;
}

    return 0;
}