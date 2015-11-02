#include <stdio.h>
#include <stdlib.h>
//#ifndef __MYCOORDS__ 
//#define __MYCOORDS__


struct point
{
  int x;
  int y;
};

typedef struct rectangle {
  struct point topleft;
  struct point bottomrt;
} rectangle;


int area(const struct rectangle *r)
{
    double height, width, area;
    height = ((r->topleft.y) - (r->bottomrt.y));
    width = ((r->topleft.x) - (r->bottomrt.x));
    area = height*width;
    return (area);
    
}

struct point center(const struct rectangle *r)
{
  struct point *p = malloc(sizeof(rectangle));
  p->x = (r->bottomrt.x - r->topleft.x)/2;
  p->y = (r->bottomrt.x - r->topleft.x)/2;
  return *p;
}


int inside(const struct rectangle *r, const struct point *p)
{
 
  return ((p->x >= r->topleft.x ) &&
  (p->x <= r->bottomrt.x) &&
  (p->y >= r->topleft.y ) &&
  (p->y <= r->bottomrt.y));

}


struct rectangle move(struct rectangle *r, int addx, int addy)
{

  r->topleft.x = r->topleft.x + addx;
  r->topleft.y = r->topleft.y + addy;
  r->bottomrt.x = r->bottomrt.x + addx;
  r->bottomrt.y = r->bottomrt.y + addy;
  return *r;
}

int main(){
  struct rectangle box = {{2,8},{10,3}};
  struct point p = {3,6};
  printf("area is %d\n", area(&box));
  struct point c = center(&box);
  printf("center is (%d,%d)\n", c.x, c.y);
  struct rectangle box2 = move(&box, 3, 6);
  printf("moved to (%d,%d) and (%d,%d)\n", box2.topleft.x, box2.topleft.y,
  box2.bottomrt.x, box2.bottomrt.y);
  printf("inside function test result is %d\n", inside(&box,&p));
}



