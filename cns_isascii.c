#include "cns_chr_hdl.h"

int cns_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
