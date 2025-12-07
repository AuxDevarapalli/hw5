#ifndef RECCHECK
#include <set>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
// add or remove necessary headers as you please

#endif

#include "schedwork.h"

using namespace std;

// a constant that can be used to indicate an INVALID 
// worker ID if that is useful to your implementation.
// Feel free to not use or delete.
static const Worker_T INVALID_ID = (unsigned int)-1;


// Add prototypes for any helper functions here
void workerPut(bool ret, size_t day, size_t pos, std::vector<size_t> holder, 
  const AvailabilityMatrix& avail,
  const size_t dailyNeed, const size_t maxShifts,DailySchedule* sched){
    if(ret){
      return;
    }
    if(avail.size()==day){
      ret=true;
      return;
    }
    if(dailyNeed==pos){
      pos=0;
      return;
    }
    for(int i=0;i<avail[0].size();i++){
      //if(avail[day][i]==true &&sched[pos]!=i)
    }
  }

// Add your implementation of schedule() and other helper functions here

bool schedule(
    const AvailabilityMatrix& avail,
    const size_t dailyNeed,
    const size_t maxShifts,
    DailySchedule& sched
)
{
    if(avail.size() == 0U){
        return false;
    }
    sched.clear();
    // Add your code below




}

