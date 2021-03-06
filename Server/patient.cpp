#include "patient.h"
#include <string>
Patient::Patient()
{    
}

Patient::Patient(std::string name, int age, float height, float weight, float bp, std::string diseases, int exercise_days_per_week) :
    name(name), age(age), height(height), weight(weight), bp(bp), diseases(diseases), exercise_days_per_week(exercise_days_per_week)
{}

float Patient::activity_rate()
{

    if (exercise_days_per_week < 2)
    {
        activity_factor = 1.2;
        activity = "Low Activity";

    }


    else if (exercise_days_per_week >= 2 && exercise_days_per_week < 5)
    {
        activity_factor = 1.3;
        activity = "Moderate Activity";

    }

    else if (exercise_days_per_week >= 5)
    {
        activity_factor = 1.4;
        activity = "High Activity";

    }
    return activity_factor;

}

std::string Patient::get_activity()
{
    return activity;
}
Patient::~Patient() {}

