#include "date.h"

int date_compare(const date d1, const date d2) {
	if ( d1.year > d2. year) return 1;
	if ( d1.year < d2.year) return -1;
	if ( d1.month > d2.month) return 1;
	if ( d1.month < d2.month) return -1;
	if (d1.day > d2.day) return 1;
	if (d1.day < d2.day) return -1;
	if (d1.hour > d2.hour) return 1;
	if (d1.hour < d2.hour) return -1;
	if (d1.minute > d2.minute) return 1;
	if (d1.minute < d2.minute) return -1;
	if (d1.second > d2.second) return 1;
	if (d1.second < d2.second) return -1;
	if (d1.millisecond > d2.millisecond) return 1;
	if (d1.millisecond < d2.millisecond) return -1;
}

int date_is_leap(const int year) {
	return 0;
}