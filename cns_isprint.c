#include "cns_chr_hdl.h"

int	cns_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
