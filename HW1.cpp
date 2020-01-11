//Exercise 2 *****************************************************************

//Function to advance the date by one day
Date Date::advance_Date(Date current)
{
    //If day = 30, end of month is reached and date must rollover to next month
    if (current.day == 30)
    {
        //If month = december, end of year is reached and date must rollover to next year
        if (current.month == 12)
        {
            current.day = 1;
            current.month = 1;
            current.year++;
        }
        else
        {
            current.day = 1;
            current.month++;
        }
    }
    else
        current.day++;
    
    //Return the object w/ the day advanced
    return current;
}

//***************************************************************************

//Exercise 9 ****************************************************************

//a
cout << p.coefficient(p.degree());

//b
p.changeCoefficient(p.coefficient(3) + 8, 3);

//c
for (int i = 0; i < p.degree(), i++)
{
    p.changeCoefficient((p.coefficient(i) + p2.coefficient(i)), i);
}
