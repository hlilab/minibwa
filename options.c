#include <string.h>
#include "minibwa.h"

void mb_mopt_init(mb_mopt_t *opt)
{
	memset(opt, 0, sizeof(*opt));
	// seeding options
	opt->min_len = 19;
	opt->max_sub_occ = 10;
	opt->max_occ = 500;
	// general algorithm options
	opt->bw = 500, opt->bw_long = 20000;
	opt->max_gap = 5000;
	// chaining options
	opt->max_chain_skip = 25;
	opt->max_chain_iter = 5000;
	opt->min_chain_score = 40;
	opt->rmq_inner_dist = 1000;
	opt->rmq_size_cap = 100000;
	opt->chn_pen_gap = 0.1f;
	opt->chn_pen_skip = 0.05f;
	// I/O options
	opt->n_thread = 4;
	opt->mb_size = 500000000;
}
