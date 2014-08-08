#include "ts.h"

double ts_mean(const series * ts) {
	double mean = 0;

	for ( int i = 0; i < ts->length; ++i ) {

	}
	return 0.0;
}


double ts_value_at_date(const series * s_ts, const date d) {
	unsigned int guess_idx, start_idx, end_idx;
	start_idx = 0;
	end_idx = s_ts->length;
	guess_idx = (end_idx - start_idx) / 2;
	date guess = s_ts->dates[guess_idx];
	int date_comp = date_compare(d, guess);
	while ( end_idx - start_idx > 1 ) {
		if (!date_comp) {
			return s_ts->data[guess_idx];
		}
		if (date_comp > 0) {
			start_idx = guess_idx;
		} else {
			end_idx = guess_idx;
		}

		guess_idx = (end_idx - start_idx) / 2;
		guess = s_ts->dates[guess_idx];
		date_comp = date_compare(d, guess);
	}

	return 0;
}