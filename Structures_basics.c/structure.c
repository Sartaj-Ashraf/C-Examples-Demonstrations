// A variable declaration with structure declaration.
struct Point
{
   int x, y;
} p1;  // The variable p1 is declared with 'Point'
  
  
// A variable declaration like basic data types
struct Point
{
   int x, y;
}; 
  
int main()
{
   struct Point p1;  // The variable p1 is declared like a normal variable
}




struct address
{
   char name[50];
   char street[100];
   char city[50];
   char state[20];
   int pin;
};