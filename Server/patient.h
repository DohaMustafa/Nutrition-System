#ifndef PATIENT_H
#define PATIENT_H

#include<iostream>
#include<math.h>
#include<string>
#include<map>

class Patient
{
private:
    //personal info
    std::string name;
    int age;
    float height;
    float weight;
    std::string diseases;
    float bp;
    int exercise_days_per_week;
    float activity_factor;
    std::string body_status;
    std::string activity;

public:
    Patient();
    virtual ~Patient();
    Patient(std::string name, int age, float height, float weight, float bp, std::string diseases = "Healthy", int exercise_days_per_week = 0);

    virtual void cal_per_day() = 0;
    virtual void carbs_per_day() = 0;
    virtual void protein_per_day() = 0;
    virtual void calcuim_per_day() = 0;
    virtual void fiber_per_day() = 0;
    virtual int display_age() = 0;
    virtual std::string display_name() = 0;
    virtual float display_height() = 0;
    virtual	float display_weight() = 0;
    virtual float display_carbs() = 0;
    virtual float display_protein() = 0;
    virtual int display_calcuim() = 0;
    virtual float display_calories() = 0;
    virtual float display_fiber() = 0;
    virtual	std::string display_body_status() = 0;

    virtual void body_stat()= 0;
    float activity_rate();
    std::string get_activity();


};

#endif // PATIENT_H
