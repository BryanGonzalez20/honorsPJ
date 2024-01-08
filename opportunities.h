#ifndef OPPORTUNITIES_H
#define OPPORTUNITIES_H
#include <string>
using namespace std;

class Opportunities
{
protected:
    string opportunityName;
    string opportunityDescription;


public:
    Opportunities();
    void setOpportunityName(string opportunityName);
    void setOpportunityDescription(string opportunityDescription);

    string getOpportunityName();
    string getOpportunityDescription();

};

#endif // OPPORTUNITIES_H
