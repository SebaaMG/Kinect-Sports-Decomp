typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)


undefined8 fn_82FBC800(ulonglong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 != 2) {
    if ((param_1 & 1) == 0) {
      return 0;
    }
    uVar2 = 3;
    if (3 < (int)SQRT((float)(longlong)iVar1) + 1) {
      do {
        trapWord(6,uVar2,0);
        trapWord(5,uVar2 & ~(((param_1 & 0x7fffffff) << 1 | (param_1 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (param_1 == (longlong)(iVar1 / (int)uVar2) * (longlong)(int)uVar2) {
          return 0;
        }
        uVar2 = uVar2 + 2;
      } while ((int)uVar2 < (int)SQRT((float)(longlong)iVar1) + 1);
    }
  }
  return 1;
}

