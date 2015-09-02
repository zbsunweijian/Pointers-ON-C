typedef enum __BOOL{FALSE,TRUE}BOOL;
void Welcome();
extern int GetYear();
extern int GetMonth();
void PrintCalendar(int year,int month);
BOOL IsLeapYear(int year);
extern int CalculateDaysbefore(int year);
int CalculateDaysOfMonth(int year,int month);
int CalculateFirstWeekday(int year,int month);