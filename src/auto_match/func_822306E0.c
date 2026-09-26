extern const unsigned int GSysAlloc_vftable[];
#pragma comment(linker, "/alternatename:GSysAlloc_vftable=??_7GSysAlloc@@6B@")

void fn_822306E0(unsigned int *object)
{
    *object = (unsigned int)GSysAlloc_vftable;
}
