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
extern unsigned int *auStack_50;
extern int fn_82FF2D40();
extern unsigned int lbl_8217BB40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83000688(int param_1,uint param_2,undefined8 param_3,ushort *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  undefined4 auStack_50 [20];
  
  uVar3 = param_2 & 0xffff;
  if ((uVar3 != 0) && (uVar3 < *param_4)) {
    uVar2 = (uint)*param_4 - (param_2 & 0xffff) & 0xffff;
    if ((int)(param_4[1] - uVar3) <= (int)uVar2) {
      uVar2 = param_4[1] - uVar3;
    }
    if ((uVar2 & 0xffff) != 0) {
      uVar3 = 0;
      dVar4 = (double)lbl_8217BB40;
      iVar1 = param_1;
      do {
        auStack_50[0] = 0;
        iVar1 = fn_82FF2D40(dVar4,iVar1,param_3,*(undefined4 *)(param_1 + 0xc),
                                  *(byte *)(param_1 + 0x3d) >> 7,auStack_50);
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < (uVar2 & 0xffff));
    }
  }
  param_4[1] = (ushort)param_2;
  return;
}

