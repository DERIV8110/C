#include <complex.h>    
#include <stdio.h>  
void main (void) 
{    
  complex double z = 1.0 + 3.0*I; 
  printf ("Phase is %f, modulus is %f\n", carg (z), cabs (z));        
}  