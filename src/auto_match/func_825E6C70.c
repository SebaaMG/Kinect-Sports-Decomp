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
extern int fn_82522838();
extern int fn_82522BC8();
extern int fn_82522D98();
extern unsigned int lbl_832767CC;


void fn_825E6C70(int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1[1] == param_1[2]) {
    iVar2 = *param_1;
    iVar1 = param_1[1] - iVar2 >> 2;
    uVar3 = (ulonglong)(uint)param_1[3] + (longlong)iVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98((uVar3 & 0x3fffffff) << 2);
    }
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    iVar2 = fn_82522BC8(lbl_832767CC,iVar2,lVar4);
    *param_1 = iVar2;
    param_1[1] = iVar1 * 4 + iVar2;
    param_1[2] = (int)lVar4 + iVar2;
  }
  param_1[1] = param_1[1] + 4;
  param_1[4] = param_1[4] + 1;
  return;
}

