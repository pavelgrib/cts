
typedef struct date {
	unsigned int year, month, day, hour, minute, second, millisecond;
} date;

int date_compare(const date d1, const date d2);
