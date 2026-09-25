typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef long long longlong;

longlong fn_82CFFEB8(uint *base, ulonglong index)
{
    return (index & 0x1fffffff) * 8 + (ulonglong)*base;
}
