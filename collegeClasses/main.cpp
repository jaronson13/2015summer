#include <iostream>
#include <string>
#include <vector>

using namespace std;

class College
{
    public:
        College(string collegeName, string regionName,
                int tuitionCost);
        string getName() const;
        string getRegion() const;

        int getTuition() const;

        void setTuition(int newTuition);
    private:
        string name;
        string region;

        int *tuition = new int;
};
College::College(string collegeName, string regionName, int tuitionCost)
{
    name = collegeName;
    region = regionName;
    *tuition = tuitionCost;
}
string College::getName() const{
    return name;
}
string College::getRegion() const{
    return region;
}
int College::getTuition() const{
    return *tuition;
}
void College::setTuition(int newTuition){
    *tuition = newTuition;
}

class collegeGroup
{
    public:
        void UpdateTuition(const string &collegeName, int newTuition);

        vector<College> getCollegeList(const string &region, int low, int high);
        // returns array of colleges in region where low <= tuition <= high;
        // the size of the array returned is equal to
        // the number of colleges that meet the criteria

        void addCollege(College newCollege);

    private:
        vector<College> myColleges;
};
void collegeGroup::UpdateTuition(const string &collegeName, int newTuition)
{
    for (int i = 0; i< myColleges.size(); i++)
    {
        if (myColleges[i].getName() == collegeName)
        {
            myColleges[i].setTuition(newTuition);
        }
    }
}
void collegeGroup::addCollege(College newCollege)
{
    myColleges.push_back(newCollege);
}

int main()
{
//    vector<int> myTest;
//    int numOne = 1;
//    int numTwo = 2;
//    int numThree = 3;

//    myTest.push_back(numOne);
//    myTest.push_back(numTwo);
//    myTest.push_back(numThree);
//
//    for (int i = 0; i< myTest.size(); i++)
//    {
//        cout << myTest[i] << endl;
//    }

    collegeGroup myCollegeGroup;

    College wheaton = College("Wheaton College", "Northeast", 60000);
    College trinity = College("Trinity University", "Midwest", 62000);

    myCollegeGroup.addCollege(wheaton);
    myCollegeGroup.addCollege(trinity);

    cout << wheaton.getTuition() << endl;
    cout << trinity.getTuition() << endl;

    cout << "After changing tuition" << endl;
    cout << "--------------------------------" << endl;


    myCollegeGroup.UpdateTuition("Trinity University", 80000);

    cout << wheaton.getTuition() << endl;
    cout << trinity.getTuition() << endl;

    return 0;
}
