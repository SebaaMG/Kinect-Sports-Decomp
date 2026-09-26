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


void fn_8251E450(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*param_1;
  uVar1 = param_1[1];
  lVar3 = (longlong)(int)(uint)*(ushort *)(param_1 + 3) * (longlong)param_2 + (uVar1 - uVar4);
  if (uVar4 != 0) {
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    uVar2 = fn_82522BC8(lbl_832767CC,uVar4,lVar3);
    *param_1 = uVar2;
    param_1[1] = uVar2 + (int)(uVar1 - uVar4);
    param_1[2] = uVar2 + (int)lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(lVar3);
}

