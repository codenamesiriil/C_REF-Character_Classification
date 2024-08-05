#include "./inc/cns_chr_hdl.h"

int	cns_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
