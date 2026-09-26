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
extern int fn_82BA02A8();


void fn_82BA8A58(char *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  *(int *)(param_1 + 0x870) = *(int *)(param_2 + 0x4c) + *(int *)(param_1 + 0x870);
  *(int *)(param_1 + 0x874) = *(int *)(param_1 + 0x874) + *(int *)(param_2 + 0x50);
  *(int *)(param_1 + 0x878) = *(int *)(param_2 + 0x54) + *(int *)(param_1 + 0x878);
  *(int *)(param_1 + 0x87c) = *(int *)(param_2 + 0x58) + *(int *)(param_1 + 0x87c);
  if (0 < *(int *)(param_2 + 0x4c)) {
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df230,*(undefined4 *)(param_2 + 0x4c))
    ;
  }
  if (0 < *(int *)(param_2 + 0x50)) {
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df1f0);
  }
  if (0 < *(int *)(param_2 + 0x54)) {
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df1c4);
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df1a0);
  }
  uVar1 = *(uint *)(param_2 + 0x38);
  lVar2 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df158,lVar2,
                (ulonglong)*(uint *)(param_2 + 0x40),
                (ulonglong)*(uint *)(param_2 + 0x3c) - (ulonglong)*(uint *)(param_2 + 0x40),
                (ulonglong)*(uint *)(param_2 + 0x3c) + lVar2);
  uVar1 = *(uint *)(param_2 + 0x38);
  fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df120,
                (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0),
                *(undefined4 *)(param_2 + 0x3c));
  if (*param_1 == '\0') {
    uVar1 = *(uint *)(param_2 + 0x48);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      iVar4 = 0;
    }
    else {
      trapWord(6,uVar3,0);
      uVar5 = *(int *)(param_2 + 0x44) * 100;
      iVar4 = (int)uVar5 / (int)uVar1;
      trapWord(5,uVar3 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),
               0xffff);
    }
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820df0d8,uVar3,
                  *(undefined4 *)(param_2 + 0x44),iVar4);
  }
  return;
}

