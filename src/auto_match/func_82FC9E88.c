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


void fn_82FC9E88(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  do {
    iVar2 = (int)param_1;
    if (iVar2 == 2) {
      bVar1 = true;
    }
    else if ((param_1 & 1) == 0) {
LAB_82fc9f1c:
      bVar1 = false;
    }
    else {
      uVar3 = 3;
      if (3 < (int)SQRT((float)(longlong)iVar2) + 1) {
        do {
          trapWord(6,uVar3,0);
          trapWord(5,uVar3 & ~(((param_1 & 0x7fffffff) << 1 | (param_1 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          if (param_1 == (longlong)(iVar2 / (int)uVar3) * (longlong)(int)uVar3) goto LAB_82fc9f1c;
          uVar3 = uVar3 + 2;
        } while ((int)uVar3 < (int)SQRT((float)(longlong)iVar2) + 1);
      }
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
    param_1 = param_1 + 2;
  } while( true );
}

