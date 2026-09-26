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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_68;
extern int fn_824731D8();
extern int fn_82536690();
extern int fn_8265CA20();
extern int fn_82837D98();
extern int fn_82F63CA0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


void fn_82473038(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar7;
  ulonglong uVar6;
  uint uVar8;
  int iVar9;
  double dVar10;
  longlong lStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  piVar7 = (int *)(param_1 + 0x1c);
  uStack_60 = 0;
  uVar8 = 0;
  uStack_58 = 0;
  do {
    if ((*piVar7 != 0) && (param_2 != uVar8)) {
      lStack_70 = CONCAT44(uVar8,(((U64)(lStack_70) >> 32) & 0xFFFFFFFF));
      fn_82536690(&uStack_60,&lStack_70);
    }
    uVar8 = uVar8 + 1;
    piVar7 = piVar7 + 0x41;
  } while (uVar8 < 6);
  iVar2 = *(int *)(param_2 * 0x104 + param_1 + 0x1c);
  if (iVar2 != 0) {
    fn_82837D98(*(undefined4 *)(iVar2 + 0x14),0,&lStack_70);
    fn_824731D8(param_1,0,(((U64)(lStack_70) >> 0) & 0xFFFFFFFF));
  }
  iVar2 = (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
  uVar6 = 1;
  if ((((U64)(uStack_60) >> 0) & 0xFFFFFFFF) != (((U64)(uStack_60) >> 32) & 0xFFFFFFFF)) {
    iVar5 = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_60) >> 0) & 0xFFFFFFFF);
    dVar10 = (double)lbl_821CA460;
    iVar9 = (((U64)(uStack_60) >> 32) & 0xFFFFFFFF);
    do {
      if ((ulonglong)*(uint *)(param_1 + 0xc) <= (uVar6 & 0xffffffff)) break;
      uStack_60 = (longlong)(iVar5 >> 2);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar1 = (int)((float)uStack_60 *
                   (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar10));
      lStack_70 = (longlong)iVar1;
      iVar1 = iVar1 * 4;
      iVar3 = iVar1 + iVar2;
      iVar1 = *(int *)(iVar1 + iVar2);
      iVar4 = iVar3 + 4;
      fn_82F63CA0(iVar3,iVar4,(iVar9 - iVar4 >> 2) << 2);
      iVar9 = iVar9 + -4;
      iVar5 = iVar5 + -4;
      fn_82837D98(*(undefined4 *)(*(int *)(iVar1 * 0x104 + param_1 + 0x1c) + 0x14),0,auStack_68);
      fn_824731D8(param_1,uVar6,auStack_68[0]);
      uVar6 = uVar6 + 1;
    } while (iVar2 != iVar9);
  }
  if (iVar2 != 0) {
    fn_8265CA20(iVar2);
  }
  return;
}

