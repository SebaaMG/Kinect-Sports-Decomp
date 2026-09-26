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


undefined8
fn_82C94E60(int param_1,uint *param_2,int param_3,int param_4,int param_5,int *param_6,
             uint *param_7,int *param_8)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  bVar4 = true;
  uVar5 = 0;
  iVar10 = 0;
  iVar9 = 0;
  if (param_5 != 0) {
    iVar9 = *(int *)(param_1 + 0x78c);
    iVar10 = param_3 + (*(uint *)(param_1 + 0x88) & 0x7ffffff) * -0x20;
  }
  iVar8 = iVar10;
  if (param_4 != 0) {
    iVar9 = *(int *)(param_1 + 0x788);
    iVar8 = param_3 + -0x20;
    if (iVar8 == 0) goto LAB_82c94f38;
    if ((iVar10 != 0) &&
       (sVar1 = *(short *)((*(int *)(param_1 + 0x784) + -0x10) * 2 + iVar10),
       uVar7 = (int)sVar1 - (int)*(short *)(*(int *)(param_1 + 0x780) * 2 + iVar8),
       uVar6 = (int)sVar1 - (int)*(short *)(*(int *)(param_1 + 0x784) * 2 + iVar10),
       uVar2 = (int)uVar7 >> 0x1f, uVar3 = (int)uVar6 >> 0x1f,
       (int)((uVar7 ^ uVar2) - uVar2) < (int)((uVar6 ^ uVar3) - uVar3))) {
      iVar9 = *(int *)(param_1 + 0x78c);
      iVar8 = iVar10;
    }
  }
  if (iVar8 != 0) {
    uVar5 = 1;
    bVar4 = (*param_2 & 0x18) != 0;
  }
LAB_82c94f38:
  *param_8 = iVar8;
  if (!bVar4) {
    iVar9 = -1;
  }
  *param_7 = (uint)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar9) >> 5;
  *param_6 = iVar9;
  return uVar5;
}

