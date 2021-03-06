#include "male.h"

Male::Male()
{

}
Male::Male(std::string name, int age, float height, float weight, float bp,int exercise_days_per_week, std::string diseases) :
    name(name), age(age), height(height), weight(weight), bp(bp), diseases(diseases), exercise_days_per_week(exercise_days_per_week),calories(0),carbs(0),protein(0)
//	patient(name, age, height, weight, bp, diseases, exercise_days_per_week)
{
}


void Male::cal_per_day()
{
    calories = (66.5 + 13.8 * (weight)+5 * (height) / 6.8 * age) * activity_factor;

}
void Male::fiber_per_day()
{
    fiber = (calories * 14) / 1000;
}
void Male::carbs_per_day()
{
    carbs = (calories / 2) / 4;
}
void Male::protein_per_day()
{
    protein = weight * 0.8;
}
void Male::calcuim_per_day()
{
    if (age < 4)
        calcuim = 700;
    else if (age >= 4 && age <= 8)
        calcuim = 1000;
    else if (age >= 9 && age <= 13)
        calcuim = 1300;
    else if (age >= 14 && age <= 18)
        calcuim = 1300;
    else if (age >= 19 && age <= 50)
        calcuim = 1000;
    else if (age >= 51 && age <= 70)
        calcuim = 1000;
    else
        calcuim = 1200;
}


std::string Male::display_name()
{
    return name;
}
int Male::display_age()
{
    return age;
}
float Male::display_height()
{
    return  height;
}
float Male::display_weight()
{
    return weight;
}
float Male::display_calories()
{
    return calories;
}
float Male::display_carbs()
{
    return carbs;
}
float Male::display_protein()
{
    return protein;
}
int Male::display_calcuim()
{
    return calcuim;

}
float Male::display_fiber()
{
    return fiber;
}
std::string Male::display_body_status()
{
    return  body_status;
}

void Male::body_stat()
    {

        float bmi = (weight) / (pow((height / 100), 2));
        if (bmi < 18.5)
            body_status = "Underweight";
        else if (bmi >= 18.5 && bmi < 24.9)
            body_status = "Fit";
        else if (bmi >= 24.9)
            body_status = "Overweight";
        //cout << weight << height << bmi;
        //return body_status;
    }
