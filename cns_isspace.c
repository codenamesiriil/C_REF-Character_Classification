#include "cns_chr_hdl.h"

int	cns_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}