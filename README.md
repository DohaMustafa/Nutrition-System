# Nutrition-System

A c++ platform that generates a nutrition plan for users based on their personal and health information 
The platform consists of two software applications 

---
## Patient Software (Client)
A GUI implemented using QT C++ in which patients can fill their personal info -such as Name, Age and Gender- as well as their health info -such as Height, Weight, Diseases, Number of exercise days per week, Blood Pressure and Blood Type.
Upon recieving the patient's info, He recieves a nutrition plan that fits his nutrition needs.
The patient can then send feedback rating the nutrition plan. 
 
 ---
 ## Nutrition Software (Server)
 C++ program that saves patients's personal and health info as data members of a class. 
 Patient class which is the base class and two derived classes Male and Female classes. 
 Upon recieving the patient's info, the data is stored and then used by member function of these classes o generate an appropriate nutrition plan for the patient. 

---
## Nutrition Plan 
- First Part <br />
  Using the patient's info to calculate the daily intake of calories, carbohydrates, protein, calcuim, fibers in a week. <br />
  Determining the body-status of the patient and deciding whether the patient needs to lose weight gain weight or maintain his weight. <br />
  Sending our recommendation to the patient based on the data calculated and the info collected.  <br />
  
- Second Part: <br />
   Populating a map data structure with food items of each food category, each item and its corresponding amount of carbs or protein or calcuim or fibers  <br />
   The map data structures are used to decide which food items are suitable for the patient and that would help him acheive the correct amount of his daily intake from each food      category. <br />
   
   
  
  


