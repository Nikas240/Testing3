#ifndef TETRISMODULE_H
#define TETRISMODULE_H
struct Point
{int x,y;} a[4], b[4];
void cleararray(int field[20][10]);
int calculate(int sum, int k);
int check(int field[20][10]);
#endif 
