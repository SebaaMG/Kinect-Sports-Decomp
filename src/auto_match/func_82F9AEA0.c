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


void fn_82F9AEA0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if ((*param_2 & 1) == 0) {
    *param_2 = *param_2 + 1;
  }
  uVar1 = *param_2;
  do {
    bVar2 = false;
    uVar3 = 3;
    if (3 < (int)SQRT((double)uVar1) + 1) {
      do {
        trapWord(6,uVar3,0);
        if ((ulonglong)*param_2 ==
            (longlong)(int)((ulonglong)*param_2 / (uVar3 & 0xffffffff)) * (longlong)(int)uVar3) {
          bVar2 = true;
          break;
        }
        uVar3 = uVar3 + 2;
      } while ((int)uVar3 < (int)SQRT((double)uVar1) + 1);
    }
    if (!bVar2) {
      return;
    }
    *param_2 = *param_2 + 2;
  } while( true );
}

