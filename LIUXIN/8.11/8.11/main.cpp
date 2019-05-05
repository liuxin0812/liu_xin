a) int *number;
cout << *number << endl;

b) double *realPtr;
long *integerPtr;
*inttegerPtr = *realPtr;

c) int *x,y;
*x=y;

d) char *s[] = "this is a character array";
forb( ;*s !='\0'; ++s)
   cout << *s <<'';

e) short *numPtr,result;
void *genericPtr = *numPtr;
result = *genericPtr + 7;

f) double &x= 19.34;
double xPtr = &x;
cout <<xPtr<<endl;
