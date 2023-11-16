### C Library - <time.h>
The time.h header defines: four variable types + two macro + various functions -> for manipulating date and time.

**1. Library Variables**
|  No |       Variable     |                                    Description                                     | 
| :---| :------------------|------------------------------------------------------------------------------------| 
|  1  |   **size_t**       |  *This is the unsigned integral type and is the **result of the sizeof keyword***  | 
|  2  |   **clock_t**      |  *This is a type suitable for storing the **processor time***                      | 
|  3  |   **time_t is**    |  *This is a type suitable for storing the **calendar time***                       | 
|  4  |   **struct tm**    |  *This is a **structure** used to hold the **time and date***                      | 

The tm structure has the following definition
                struct tm {
                   int tm_sec;         /* seconds,  range 0 to 59          */
                   int tm_min;         /* minutes, range 0 to 59           */
                   int tm_hour;        /* hours, range 0 to 23             */
                   int tm_mday;        /* day of the month, range 1 to 31  */
                   int tm_mon;         /* month, range 0 to 11             */
                   int tm_year;        /* The number of years since 1900   */
                   int tm_wday;        /* day of the week, range 0 to 6    */
                   int tm_yday;        /* day in the year, range 0 to 365  */
                   int tm_isdst;       /* daylight saving time             */
                };
              
**2. Library Macros**
|  No |          Macro        |                             Description                                         | 
| :---| :---------------------|---------------------------------------------------------------------------------| 
|  1  |   **NULL**            |  *This macro is the value of a **null pointer constant***                       | 
|  2  |   **CLOCKS_PER_SEC**  |  *This macro represents the **number of processor clocks per second***          | 

**3. Library Functions** 
|  No |          Function             |                                 Description                              | 
| :---| :------------------|-----------------------------------------------------------------------------------------------------| 
|  1  | ```char *asctime(const struct tm *timeptr)```  |  *This is the unsigned integral type and is the **result of the sizeof*** | 
|  2  | ```clock_t clock(void)```  |  *This is a type suitable for storing the **processor time***|
|  3  | ```char *ctime(const time_t *timer)```  |  *This is the unsigned integral type and is the **result of the sizeof***| 
|  4  | ```double difftime(time_t time1, time_t time2)```  |  *This is a type suitable for storing the **processor time***|
|  5  | ```struct tm *gmtime(const time_t *timer)```  |  *This is the unsigned integral type and is the **result of the sizeof***| 
|  6  | ```struct tm *localtime(const time_t *timer)```  |  *This is a type suitable for storing the **processor time***|
|  7  | ```time_t mktime(struct tm *timeptr)```  |  *This is the unsigned        integral type and is the **result of the sizeof***| 
|  8  | ```size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr)```  |  *This is a type suitable for storing the **processor time***|
|  9  | ```char *asctime(const struct tm *timeptr)```  |  *This is the unsigned integral type and is the **result of the sizeof***| 



