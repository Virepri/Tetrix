#ifndef PHASE2_H
#define PHASE2_H
#include <unistd.h>//For sleep()
#include <random>//for generating random numbers
#include <cstdlib>//For system().

int rando(int min, int max); //range : [min, max)



class phase2 {
 private:
 public:
  int execute();
  phase2();
  ~phase2();
};
#endif
