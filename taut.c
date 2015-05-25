#include "types.h"
#include "stat.h"
#include "user.h"

void
is_true(char * first, char * last)
{
  if(strcmp(first, last) == 0) {
    printf(1, "%s == %s is true.\n", first, last);
  } else {
    printf(1, "%s == %s is false.\n", first, last);
  }
}

void
is_greater_than(int first, int last)
{
  if(first > last) {
    printf(1, "%d > %d is true.\n", first, last);
  } else {
    printf(1, "%d > %d is false.\n", first, last);
  }
}

void
is_less_than(int first, int last)
{
  if(first < last) {
    printf(1, "%d < %d is true.\n", first, last);
  } else {
    printf(1, "%d < %d is false.\n", first, last);
  }
}

void
is_greater_than_or_equal(int first, int last)
{
  if(first >= last) {
    printf(1, "%d >= %d is true.\n", first, last);
  } else {
    printf(1, "%d >= %d is false.\n", first, last);
  }
}

void
is_less_than_or_equal(int first, int last)
{
  if(first <= last) {
    printf(1, "%d <= %d is true.\n", first, last);
  } else {
    printf(1, "%d <= %d is false.\n", first, last);
  }
}

void
play(char * operand, char * first, char * last)
{
  int first_d, last_d;
  first_d = atoi(first);
  last_d = atoi(last);

  if(strcmp(operand, "==") == 0 || strcmp(operand, "eq") == 0) {
    is_true(first, last);
  }
  else if(strcmp(operand, "gte") == 0) {
    is_greater_than_or_equal(first_d, last_d);
  }
  else if(strcmp(operand, "lte") == 0) {
    is_less_than_or_equal(first_d, last_d);
  }
  else if(strcmp(operand, "gt") == 0) {
    is_greater_than(first_d, last_d);
  }
  else if(strcmp(operand, "lt") == 0) {
    is_less_than(first_d, last_d);
  }
  else {
    printf(1, "No such operand: %s\n", operand);
  }
}

int
main(int argc, char *argv[])
{

  if(argc < 4 || argc > 4) {
    printf(1, "invalid arguments:\n");
    printf(1, "tautology: <first> <operand> <last>\n");
    exit();
  }

  play(argv[2], argv[1], argv[3]);
  exit();
}
