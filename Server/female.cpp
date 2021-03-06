#include "female.h"

Female::Female()
{

}
Female::Female(std::string name, int age, float height, float weight, float bp,int exercise_days_per_week, std::string diseases) :
    name(name), age(age), height(height), weight(weight), bp(bp), diseases(diseases), exercise_days_per_week(exercise_days_per_week)
    //	patient(name, age, height, weight, bp, diseases, exercise_days_per_week)
{}

void Female::cal_per_day()
{
    calories = (66.5 + 13.8 * (weight)+5 * (height) / 6.8 * age) * activity_factor;

}
void Female::fiber_per_day()
{
    fiber = (calories * 14) / 1000;
}
void Female::carbs_per_day()
{
    carbs = (calories / 2) / 4;
}
void Female::protein_per_day()
{
    protein = weight * 0.8;
}
void Female::calcuim_per_day()
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
        calcuim= 1000;
    else if (age >= 51 && age <= 70)
        calcuim = 1200;
    else
        calcuim = 1200;
}


std::string Female::display_name()
{
    return name;
}
int Female::display_age()
{
    return age;
}
float Female::display_height()
{
    return  height;
}
float Female::display_weight()
{
    return weight;
}
float Female::display_calories()
{
    return calories;
}
float Female::display_carbs()
{
    return carbs;
}
float Female::display_protein()
{
    return protein;
}
int Female::display_calcuim()
{
    return calcuim;

}
float Female::display_fiber()
{
    return fiber;
}
std::string Female::display_body_status()
{
    return body_status;
}

void Female::body_stat()
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

