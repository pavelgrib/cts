
typedef struct date {
	unsigned int year, month, day, hour, minute, second, millisecond;
} date;

typedef struct diff {
	unsigned int years, months, days, hours, minutes, seconds, milliseconds;	
} diff;

int date_compare(const date * d1, const date * d2);
long date_millis(const * date);
int date_diff(const date * d1, const date * d2);