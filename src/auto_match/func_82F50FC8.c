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
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern int fn_82A1DD38();
extern int fn_82F53548();
extern int fn_82F59D58();
extern int fn_82F59E40();
extern int fn_82F59F48();
extern int fn_8306ED28();
extern int fn_8306ED30();
extern unsigned int lbl_821AAD20;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82F50FC8(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  fn_82A1DD38(param_3,param_2,0x1c0);
  if (*param_2 == 2) {
    puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    dVar6 = (double)lbl_821AAD20;
    puVar1 = (undefined4 *)((uint)(param_2 + 0x28) & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    fStack_4c = lbl_821AAD20;
    fn_8306ED30();
    puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    fStack_5c = (float)dVar6;
    fn_82F53548();
    puVar1 = (undefined4 *)((uint)(param_2 + 0x48) & 0xfffffff0);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    fn_8306ED30();
    puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    fStack_5c = (float)dVar6;
    fn_82F53548();
    fn_8306ED28();
    fn_82F53548();
    fn_82F59F48();
    lVar4 = param_3 + 0x20;
    lVar5 = 0x14;
    do {
      iVar3 = (int)lVar4;
      puVar1 = (undefined4 *)((int)param_2 + (iVar3 - (int)param_3) & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
      puVar2 = (undefined4 *)((int)in_r0 + iVar3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      fn_82F59E40();
      puVar1 = (undefined4 *)((int)in_r0 + iVar3 & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      fn_82F59D58();
      puVar1 = (undefined4 *)((int)in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 != 0);
  }
  return;
}

