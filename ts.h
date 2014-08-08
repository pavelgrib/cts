
typedef struct series {
	unsigned int length;
	char * name;
	datetree * dates;
	double * data;
} series;

double ts_mean(const series * ts);
unsigned int unsigned int ts_value_at_date(const series * ts, const date * d);