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


void fn_825E7B28(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1[1] == param_1[2]) {
    iVar3 = *param_1;
    iVar1 = (param_1[1] - iVar3) / 0x34;
    lVar4 = (ulonglong)(uint)param_1[3] + (longlong)iVar1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98(lVar4 * 0x34);
    }
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    lVar4 = lVar4 * 0x34;
    iVar3 = fn_82522BC8(lbl_832767CC,iVar3,lVar4);
    *param_1 = iVar3;
    param_1[1] = iVar1 * 0x34 + iVar3;
    param_1[2] = (int)lVar4 + iVar3;
  }
  puVar2 = (undefined4 *)param_1[1];
  param_1[1] = (int)(puVar2 + 0xd);
  param_1[4] = param_1[4] + 1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  return;
}

