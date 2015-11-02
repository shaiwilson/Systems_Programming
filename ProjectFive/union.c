#include <stdio.h>

#define M_PI 3.14159265358979323846

struct point { int x, y; }; 

struct shape {
  enum {RECTANGLE, CIRCLE} shapetype;
  struct point center; //coordinates of center union {
  union {
    struct {
      int height, width;
    } rectangle; 
    struct {
      int radius; 
    } circle;
  } u; 
};

void display(const struct shape s);
double area(struct shape* s);
struct shape move(const struct shape* s, int addx, int addy);
struct shape scale(const struct shape* s, double c);

int main(void) {

  struct shape a={RECTANGLE, {0,0}, {3,4}}; 
  struct shape b={CIRCLE, {0,0}, {5}}; 
  printf("\n");

  display(a); 
  display(b); 

  printf("\n");
  printf("a area is %f\n", area(&a)); 
  printf("b area is %f\n", area(&b)); 
  printf("\n");
  
  display(move(&a, -5, -2)); 
  display(move(&b, -5, -2)); 
  printf("\n");

  display(scale(&a,1.5)); 
  display(scale(&b,0.8));

  return 0;
}

void display(const struct shape s) {

  if(s.shapetype == RECTANGLE) {
    printf("Center: %d %d\n", s.center.x, s.center.y);
    printf("Rectangle height: %d Rectangle width: %d\n", s.u.rectangle.height, s.u.rectangle.width);
  }
  else {
    printf("Center: %d %d\n", s.center.x, s.center.y);
    printf("Circle Radius %d \n", s.u.circle.radius);
  }

}

double area(struct shape* s) {

  double area = 0.0;

  if(s->u.rectangle.height && s->u.rectangle.width) {
    return area = s->u.rectangle.height * s->u.rectangle.width;
  }
  else if(s->u.circle.radius) {
    return area = M_PI * (s->u.circle.radius * s->u.circle.radius);
  }
  return 0;
}


struct shape move(const struct shape* s, int addx, int addy) {

  struct shape d = *s;
  d.center.x = s->center.x+addx;
  d.center.y = s->center.y+addy;

  return d;
}

struct shape scale(const struct shape* s, double c) {

  struct shape f = *s;
  f.u.rectangle.height = (double)s->u.rectangle.height *c;
  f.u.rectangle.width = (double)s->u.rectangle.width *c;
  f.u.circle.radius = (double)s->u.circle.radius *c;

  return f;
}

}

