#ifndef RECCHECK
// For debugging
#include <iostream>
// For std::remove
#include <algorithm> 
#include <map>
#include <set>
#endif

#include "wordle.h"
#include "dict-eng.h"
using namespace std;


// Add prototypes of helper functions here
//need to track position
void help(std::string in,int hold, std::string rem, const std::set<std::string>& dict, std::set<std::string>& holder){
    int numDash=0;
    int numFloat=rem.size();
    // for(int i=0; i<(in.size());i++){
    //     if(in[i]=='-'){
    //         numDash++;
    //     }
    // }
    //std::set<std::string> holder;

    //for the case when when no empty
    //if(in.size()==hold){
     //   return;
    //}

    //
    if(in.size()==hold && dict.find(in)!=dict.end() && rem.size()==0){
        holder.insert(in);
        return;
    }
    if(in.size()==hold){
        return;
    }
    if(in[hold]!='-'){
        //hold+=1;'
        help(in,hold+1,rem,dict,holder);
        //do i return?
        return;
    }
    //for(int i=0; i<in.size();i++){
    if(in[hold]=='-'){
        int dashC=0;
        for(int i=hold;i<in.size();i++){
            if(in[i]=='-'){
                dashC++;
            }
        }
        if(dashC>numFloat){
            for(char i=97; i<=122;i++){
                in[hold]=i;
                help(in,hold+1,rem,dict,holder);
                in[hold]='-';
            }
        }
        // for(int i=hold;i<in.size();i++
        for(int i=0; i<rem.size();i++){
            //if(in.size)
            std::string copy=in;
            copy[hold]=rem[i];
            std::string newRem=rem;
            newRem.erase(i,1);
            help(copy,hold+1,newRem,dict,holder);
        }
    }
    
}
// std::string remHelper(std::string rem, int i){
//     std::string newRem=rem;
//     for(int z=0; z<i;z++){

//     }
// }


// Definition of primary wordle function
std::set<std::string> wordle(
    const std::string& in,
    const std::string& floating,
    const std::set<std::string>& dict)
{
    // Add your code here
    std::set<std::string> res;
    help(in,0,floating,dict,res);
    return res;

}

// Define any helper functions here
