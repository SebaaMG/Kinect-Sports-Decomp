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
extern int fn_82C53960();
extern int fn_82F691F0();


undefined8 fn_82C44D10(undefined4 *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  param_1[3] = param_4;
  lVar3 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    lVar2 = ((param_3 - 1 & 0xffffffff) >> 7) + 1;
    do {
      dataCacheBlockFlush(lVar3 + param_2);
      lVar3 = lVar3 + 0x80;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if ((param_3 & 0xffffffff) != 0) {
      dataCacheBlockFlush((param_3 - 1) + param_2);
    }
  }
  param_1[1] = (int)param_2;
  *param_1 = (int)param_2;
  param_1[2] = (int)param_3;
  if ((param_2 & 0xffffffff) == 0) {
    param_1[4] = 0;
  }
  else {
    piVar4 = param_1 + 4;
    if (piVar4 != (int *)0x0) {
      uVar1 = fn_82C53960(0x1c,0);
      if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar1,0,0x1c);
      }
      *piVar4 = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
        RtlInitializeCriticalSection(uVar1);
      }
    }
    if (*piVar4 == 0) {
      return 0xfffffffffffffff7;
    }
  }
  return 0;
}

