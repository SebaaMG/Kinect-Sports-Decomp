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


void fn_82F6FDB0(short *param_1,int param_2,ulonglong param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  psVar2 = param_1;
  do {
    psVar3 = psVar2;
    sVar1 = *(short *)((param_2 - (int)param_1) + (int)psVar3);
    *psVar3 = sVar1;
    if (sVar1 == 0) break;
    param_3 = param_3 - 1;
    psVar2 = psVar3 + 1;
  } while (param_3 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  param_3 = param_3 - 1;
  if (param_3 != 0) {
    if ((param_3 & 0xffffffff) != 0) {
      do {
        psVar3 = psVar3 + 1;
        *psVar3 = 0;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
  return;
}

