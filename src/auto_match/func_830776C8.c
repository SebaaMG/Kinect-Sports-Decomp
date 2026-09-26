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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8306E7D8();
extern int fn_8306E818();
extern int fn_83078F08();
extern int fn_83078F10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82186E68;


void fn_830776C8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 extraout_f1;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = fn_82F6A548();
  iVar2 = *(int *)(iVar5 + 0x14);
  if ((param_5 & 0xff) == 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x70d8);
    uVar4 = *(undefined4 *)(iVar2 + 0x70dc);
    fVar1 = *(float *)(iVar5 + 0x90);
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0x70b8);
    uVar4 = *(undefined4 *)(iVar2 + 0x70bc);
    fVar1 = *(float *)(iVar5 + 0x8c);
  }
  dVar9 = (double)fVar1;
  if ((param_5 & 0xff) == 0) {
    fVar1 = *(float *)(iVar5 + 0x7c);
  }
  else {
    fVar1 = *(float *)(iVar5 + 0x78);
  }
  uVar6 = fn_8306E818((double)(*(float *)(iVar5 + 0x88) * fVar1),extraout_f1,param_2);
  dVar7 = (double)fn_8306E7D8(uVar6,param_3);
  dVar7 = (double)fn_8306E7D8((double)(float)(dVar7 / (double)*(float *)(iVar5 + 0x24)),
                               (double)lbl_82186E68);
  dVar10 = (double)lbl_82002AE0;
  dVar8 = (double)(float)((double)(float)(dVar7 - dVar10) * (double)lbl_82002C28 + dVar10);
  fn_83078F10((double)(float)(dVar8 / dVar9),uVar3);
  dVar9 = (double)(float)(dVar10 / dVar8);
  fn_83078F08((double)(float)(dVar9 * dVar7),uVar4);
  fn_83078F10(dVar9,uVar4);
  fn_82F6A594();
  return;
}

