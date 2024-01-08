#include "opportunities.h"

Opportunities::Opportunities() : opportunityName(""), opportunityDescription(""){

}

void Opportunities::setOpportunityName(string opportunityName){
    this -> opportunityName = opportunityName;

}
void Opportunities::setOpportunityDescription(string opportunityDescription){
    this -> opportunityDescription = opportunityDescription;

}

string Opportunities::getOpportunityName(){
    return opportunityName;

}
string Opportunities::getOpportunityDescription(){
    return opportunityDescription;

}
