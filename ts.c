#include "ts.h"
#include "date.h"

double ts_av

double ts_mean(const series * ts) {
	double mean = 0;

	for ( int i = 0; i < ts->length; ++i ) {
		mean += ()
	}
}


unsigned int ts_value_at_date(const series * ts, const date * d) {
	unsigned int guess_idx, start_idx, end_idx;
	start_idx = 0;
	end_idx = ts->length;
	guess_idx = (end_idx - start_idx) / 2;
	date * guess = ts->dates[guess_idx];
	int date_comp = date_compare(d, guess);
	while ( end_idx - start_idx > 1 ) {
		if (!date_comp) {
			return guess;
		}
		if (date_comp > 0) {
			start_idx = guess_idx;
		} else {
			end_idx = guess_idx;
		}

		guess_idx = (end_idx - start_idx) / 2;
		guess = ts->dates[guess_idx];
		date_comp = date_compare(d, guess);
	}

	return ;
}