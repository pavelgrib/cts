#include "date.h"

typedef struct series {
	unsigned int length;
	char * name;
	date * dates;
	double * data;
} series;

double ts_mean(const series * ts);
double ts_value_at_date(const series * ts, const date d);