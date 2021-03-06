#ifndef MALE_H
#define MALE_H

#include "patient.h"

class Male : public Patient
{
private:
    std::string name;
    int age;
    float height;
    float weight;
    std::string diseases;
    float bp;
    int exercise_days_per_week;
    std::string body_status;
    //float activity_factor;
    float calories;
    float carbs;
    float protein;
    int calcuim;
    float fiber;


public:
    Male();
    Male(std::string name, int age, float height, float weight, float bp,int exercise_days_per_week = 0, std::string diseases = "Healthy");
    float activity_factor = Patient::activity_rate();
    void cal_per_day();
    void fiber_per_day();
    void carbs_per_day();
    void protein_per_day();
    void calcuim_per_day();
    std::string display_patient();
    std::string display_name();
    int display_age();
    float display_height();
    float display_weight();
    float display_calories();
    float display_carbs();
    float display_protein();
    int display_calcuim();
    float display_fiber();
    std::string display_body_status();
    void body_stat();
};

#endif // MALE_H
