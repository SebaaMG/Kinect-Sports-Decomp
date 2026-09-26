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
extern unsigned int fStack_9c;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825456F0();
extern int fn_8262FE50();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263E9F0();
extern int fn_82837D98();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B1C8;
extern unsigned int uRam83282200;
extern unsigned int uRam83282228;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_825B0068(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  double dVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int aiStack_70 [28];
  
  piVar6 = aiStack_70;
  lVar5 = 6;
  do {
    iVar2 = fn_8251F720((param_1 - (int)aiStack_70) + (int)piVar6,0);
    *piVar6 = iVar2;
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (lVar5 != 0);
  iVar2 = *(int *)(lbl_8320A898 + 0x3148);
  if (iVar2 != 0) {
    fn_8262FE50(iVar2);
  }
  uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220))) & ((U64)0xFFFFFFFF)) << 32));
  uStack_88 = (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  uStack_c0 = (longlong)*(float *)(lbl_8320A898 + 0x3218);
  uStack_b8 = ((((U64)(uStack_b8)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3224))) & ((U64)0xFFFFFFFF)) << 32));
  uStack_84 = (((U64)(uStack_b8) >> 32) & 0xFFFFFFFF);
  uStack_b8 = (longlong)*(float *)(lbl_8320A898 + 0x321c);
  uStack_80 = *(undefined4 *)(lbl_8320A898 + 0x3228);
  uStack_7c = *(undefined4 *)(lbl_8320A898 + 0x322c);
  uStack_90 = (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  uStack_8c = (((U64)(uStack_b8) >> 32) & 0xFFFFFFFF);
  fn_8263A1B8(lbl_8320A898,0,lbl_8326B1C8);
  uStack_a8 = 0x80;
  uStack_b0 = 0;
  dVar7 = (double)lbl_821CA460;
  uStack_ac = 0;
  uStack_a0 = lbl_821CC160;
  uStack_a4 = 0x80;
  fStack_9c = lbl_821CA460;
  fn_82639EA8(lbl_8320A898,&uStack_b0);
  iVar1 = lbl_8320A898;
  iVar4 = 0;
  iVar3 = -0x7ce2b090;
  *(uint *)(lbl_8320A898 + 0x480) = *(uint *)(lbl_8320A898 + 0x480) & 0xffffe3ff | 0x800;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  iVar1 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x480) = *(uint *)(lbl_8320A898 + 0x480) & 0xffff1fff | 0x4000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  do {
    iVar1 = *(int *)((int)aiStack_70 + iVar4);
    fn_82837D98(*(undefined4 *)(iVar1 + 0x14),0,&uStack_c0);
    fn_825456F0((((U64)(uStack_c0) >> 0) & 0xFFFFFFFF));
    fn_8263E9F0(dVar7,lbl_8320A898,0,0,0,0,uRam83282200,0,0);
    if (*(int *)(iVar4 + -0x7cd7ddf0) != 0) {
      fn_8251FA58();
    }
    iVar3 = iVar3 + 0x30;
    *(int *)(iVar4 + -0x7cd7ddf0) = iVar1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < -0x7ce2af70);
  uRam83282228 = 3;
  fn_8263A1B8(lbl_8320A898,0,iVar2);
  fn_82639EA8(lbl_8320A898,&uStack_90);
  return;
}

