#include "./inc/cns_chr_hdl.h"

int	cns_isalnum(int c)
{
	return (cns_isalpha(c) || cns_isdigit(c));
}
