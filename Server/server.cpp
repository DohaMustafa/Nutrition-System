#include "server.h"
#include "patient.h"
#include "male.h"
#include "female.h"
#include <sstream>
#include <vector>
std::string  combination_sum(std::map<std::string, int> m)
{
   std::map<std::string, int>::iterator it;
    std::string result="";
    for (it = m.begin(); it != m.end(); ++it)
    {
        result += it->first + "  "
            +std::to_string(it->second)+"gm"+"<br />";

    }
    return result;
}
template <typename T>
std::string to_string(const T& value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}
Server::Server(QObject *parent) : QObject(parent)
{
    server= new QTcpServer(this);
    connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    if(!server->listen(QHostAddress::Any,2020)){
        qDebug()<<"Server Failed To Start";
    }else
    {
        qDebug()<< "Server Started";
    }
}

void Server::newConnection()
{
    ServerSocket= server->nextPendingConnection();
    connect(ServerSocket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    if(ServerSocket->isOpen()){
            qDebug()<<"Socket is open";
    }
    else
    {qDebug()<<"Socket cannot be opened"<<ServerSocket->errorString();}
    ServerSocket->waitForBytesWritten(20000);
    //ServerSocket-> write("DataFromServerToClient");
    //ServerSocket->flush();
    //qDebug()<< "WroteFromServerToClient";
}

void Server::readyRead()
{
    qDebug()<<"Reading Server";
    QString Info= QString(ServerSocket->readAll());
    //qDebug() << Info;
    ServerSocket->flush();
    std::vector<std::string> result;
    std::stringstream ss(Info.toUtf8().constData());
    carb.insert(std::pair<std::string, int>("Bowl of Pasta", 40));
    carb.insert(std::pair<std::string, int>("Bowl of Noodles", 50));
    carb.insert(std::pair<std::string, int>("Bowl of Rice", 51));
    carb.insert(std::pair<std::string, int>("Meduim slice of Bread", 14));
    carb.insert(std::pair<std::string, int>("A piece of Bagel", 50));
    carb.insert(std::pair<std::string, int>("Oven Potatoes", 30));
    carb.insert(std::pair<std::string, int>("Mashed Potatoes", 55));
    carb.insert(std::pair<std::string, int>("Slice of Apple Pie", 26));
    carb.insert(std::pair<std::string, int>("Slice of Cheesecake", 35));
    carb.insert(std::pair<std::string, int>("A cup of GrapeFruit Juice", 12));
    carb.insert(std::pair<std::string, int>("A cup of Apple Juice", 16));
    carb.insert(std::pair<std::string, int>("A cup of Cola", 31));
    carb.insert(std::pair<std::string, int>("A cup of Hot Chocolate ", 39));


    protein.insert(std::pair<std::string, int>("Salmon", 45));
    protein.insert(std::pair<std::string, int>("85 gm of Shrimp", 20));
    protein.insert(std::pair<std::string, int>("1 piece of Beef", 29));
    protein.insert(std::pair<std::string, int>("1 piece of Beef Burger", 22));
    protein.insert(std::pair<std::string, int>("Turkey Breast", 51));
    protein.insert(std::pair<std::string, int>("Chicken Thigh", 32));
    protein.insert(std::pair<std::string, int>("Chicken Drumstick", 25));
    protein.insert(std::pair<std::string, int>(" 1 Egg", 6));
    protein.insert(std::pair<std::string, int>("28 gm of Almonds", 6));
    protein.insert(std::pair<std::string, int>("1 Tbsop of Peanut Butter", 7));
    protein.insert(std::pair<std::string, int>("A cup of Greek Yogurt", 18));
    protein.insert(std::pair<std::string, int>("A cup of Skimmed Milk", 7));


    Fiber.insert(std::pair<std::string, int>("Meduim Pear", 6));
    Fiber.insert(std::pair<std::string, int>("1 cup Strawberries", 3));
    Fiber.insert(std::pair<std::string, int>("1 cup Avocado", 10));
    Fiber.insert(std::pair<std::string, int>("Meduim Apple ", 5));
    Fiber.insert(std::pair<std::string, int>("Broccoli", 2));
    Fiber.insert(std::pair<std::string, int>(" 1 cup of Lentils", 13));
    Fiber.insert(std::pair<std::string, int>("Meduim Sweet Potato", 4));
    Fiber.insert(std::pair<std::string, int>("A piece of Dark Chocolate", 3));

    while (ss.good())
    {
       std::string substr;
       getline(ss, substr, ',');
       result.push_back(substr);
    }

        std::string name = result[0];
        int age = std::stoi(result[1]);
        std::string gender = result[2];
        float height = std::stof(result[3]);
        float weight = std::stof(result[4]);
        float bp = std::stof(result[5]);
        int exercise_per_week = stoi(result[6]);
    //qDebug() << "parsed";
    Patient* p = nullptr;
    if (gender == "Male")
    {
        qDebug()<< "Gender Received Male";
        p = new Male(name, age, height, weight, bp,exercise_per_week);
        //std::string Output= p->display_patient();
    }
    else if (gender == "Female")
    {
        qDebug()<< "Gender Received Female" ;
        p = new Female(name, age, height, weight, bp,exercise_per_week);
    }
    else{
         qDebug()<< Info;
    }
    p->cal_per_day();
    p->calcuim_per_day();
    p->carbs_per_day();
    p->fiber_per_day();
    p->protein_per_day();
    p->body_stat();
    //qDebug()<<p->display_body_status().c_str();
    std::string output;
    if (p->display_body_status() == "Fit")
    {
                output = " Hello <b>" + p->display_name() + "</b>,  Welcome to the Smart Nutrition System " + "<br />" +
                    " According to your submitted data, We have concluded that you are  " + p->display_body_status() + "<br />" +
                    " You need " + std::to_string(p->display_calories()) + "  calories per day to maintain your healthy weight,To achieve that" + "<br />" +
                    " You need " + std::to_string(p->display_carbs()) + "gm of Carbohydrates per day." + "<br />" +
                    " You need " + std::to_string(p->display_calcuim()) + "mg of Calcuim per day." + "<br />" +
                    " You need " + std::to_string(p->display_fiber()) + "gm of Fiber per day." + "<br />" +
                    " You need " + std::to_string(p->display_protein()) + "gm of Protein per day." + "<br />" +
                    " Below are some suggestions of food items representing your daily intake from each category for one week" + "<br />" +"<br />"+
                    " For Carbohydrates :"+"<br />"+
                    combination_sum(carb) + "<br />" +
                    "For Protein :" + "<br />" +
                    combination_sum(protein) + "<br />" +
                    " For Fibers: " + "<br />" +
                    combination_sum(Fiber);

            }
            else if (p->display_body_status() == "Underweight")
            {
                output= " Hello <b>" + p->display_name() + "</b>, Welcome to the Smart Nutrition System " + "<br />" +
                    " According to your submitted data, We have concluded that you are " + p->display_body_status() + "<br />" +
                    " You need " + std::to_string(p->display_calories()) + "  calories per day ,Our recommendation is to increase your daily calories by 300 to " + to_string(p->display_calories() + 300) + " to gain 0.25kg/week" + "<br />" +
                    " You need " + std::to_string(p->display_carbs()) + "gm of Carbohydrates per day." + "<br />" +
                    " You need " + std::to_string(p->display_calcuim()) + "mg of Calcuim per day." + "<br />" +
                    " You need " + std::to_string(p->display_fiber()) + "gm of Fiber per day." + "<br />" +
                    " You need " + std::to_string(p->display_protein()) + "gm of Protein per day." + "<br />" +
                    " Below are some suggestions of food items representing your daily intake from each category for one week" + "<br />" +"<br />" +
                    " For Carbohydrates :" + "<br />" +
                    combination_sum(carb) + "<br />" +
                    "For Protein :" + "<br />" +
                    combination_sum(protein) + "<br />" +
                    " For Fibers: " + "<br />" +
                    combination_sum(Fiber);
            }
            else if (p->display_body_status() == "Overweight")
            {
                output = " Hello <b>" + p->display_name() + "</b>,  Welcome to the Smart Nutrition System " + "<br />" +
                    " According to your submitted data, We have concluded that you are " + p->display_body_status() + "<br />" +
                    " You need " + std::to_string(p->display_calories()) + "  calories per day ,Our recommendation is to reduce your daily calories by 300 to " + to_string(p->display_calories()-300) +" to lose 0.25kg/week" + "<br />" +
                    " You need " + std::to_string(p->display_carbs()) + "gm of Carbohydrates per day." + "<br />" +
                    " You need " + std::to_string(p->display_calcuim()) + "mg of Calcuim per day." + "<br />" +
                    " You need " + std::to_string(p->display_fiber()) + "gm of Fiber per day." + "<br />" +
                    " You need " + std::to_string(p->display_protein()) + "gm of Protein per day." + "<br />" +
                    " Below are some suggestions of food items representing your daily intake from each category for one week" + "<br />" + "<br />" +
                    " For Carbohydrates :" + "<br />" +
                    combination_sum(carb) + "<br />" +
                    "For Protein :" + "<br />" +
                    combination_sum(protein) + "<br />" +
                    " For Fibers: " + "<br />" +
                    combination_sum(Fiber);
    }
    ServerSocket->write(output.c_str());
    delete p;
    //ServerSocket->write("output");
    ServerSocket->flush();
    //qDebug()<< output.c_str() ;
    qDebug() << "closing";
    //ServerSocket->write("DietPlan");

    ServerSocket->close();

}
