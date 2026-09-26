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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82687270();
extern int fn_826C8C70();
extern int fn_826D6290();
extern int fn_826DC448();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E8488();
extern int fn_826E8FF0();
extern int fn_826E9188();
extern int fn_826E9530();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int uStack_60;


void fn_82724BE0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar9;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar12;
  ulonglong uVar10;
  undefined1 *puVar11;
  int iVar13;
  ulonglong uStack_60;
  int iStack_58;
  int iStack_54;
  
  iVar13 = *(int *)(param_2 + 0x314);
  if (iVar13 == 0) {
    iVar13 = param_2 + 0x28;
  }
  fn_826E8FF0(iVar13,param_1 + 0x1c);
  fn_826C8C70(iVar13,0xffffffff82010e48,(double)*(float *)(param_1 + 0x1c),
                    (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                    (double)*(float *)(param_1 + 0x28));
  *(undefined1 *)(iVar13 + 0x15) = 0;
  lVar4 = fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xfffe;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) | 1;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xfffd;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) | 2;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xfffb;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) | 4;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x50) & 0xfff7;
  }
  else {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x50) | 8;
  }
  *(short *)(param_1 + 0x50) = (short)uVar10;
  fn_826C8C70(iVar13,0xffffffff82010e08,uVar10 & 1,uVar10 >> 1 & 1,uVar10 >> 2 & 1,
                    uVar10 >> 3 & 1);
  lVar5 = fn_826E8488(iVar13,1);
  lVar6 = fn_826E8488(iVar13,1);
  lVar7 = fn_826E8488(iVar13,1);
  fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xffef;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) | 0x10;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  lVar8 = fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) | 0x20;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xffdf;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xffbf;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) | 0x40;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  fn_826E8488(iVar13,1);
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar12 = *(ushort *)(param_1 + 0x50) & 0xff7f;
  }
  else {
    uVar12 = *(ushort *)(param_1 + 0x50) | 0x80;
  }
  *(ushort *)(param_1 + 0x50) = uVar12;
  iVar9 = fn_826E8488(iVar13,1);
  if (iVar9 == 0) {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x50) | 0x100;
  }
  else {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x50) & 0xfeff;
  }
  *(short *)(param_1 + 0x50) = (short)uVar10;
  fn_826C8C70(iVar13,0xffffffff82010db8,uVar10 >> 4 & 1,uVar10 >> 5 & 1,uVar10 >> 6 & 1,
                    uVar10 >> 7 & 1,uVar10 >> 8 & 1);
  if (lVar7 != 0) {
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    *(uint *)(param_1 + 0x18) = (uint)CONCAT11(uVar1,uVar2);
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (ulonglong)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x2c) = (float)uStack_60;
    fn_826C8C70(iVar13,0xffffffff82010d98,*(undefined2 *)(param_1 + 0x1a));
    iStack_58 = 0;
    iStack_54 = 0;
    uStack_60 = CONCAT44(*(undefined4 *)(param_1 + 0x18),(((U64)(uStack_60) >> 32) & 0xFFFFFFFF));
    fn_826DC448(*(undefined4 *)(param_2 + 0x20),&iStack_58,&uStack_60);
    fn_826D6290(param_1 + 0x10,&iStack_58);
    if ((iStack_58 == 0) && (iStack_54 != 0)) {
      fn_82687270();
    }
  }
  if (lVar5 != 0) {
    fn_826E9188(iVar13,param_1 + 0x30);
    fn_826C8C70(iVar13,0xffffffff82010d8c);
  }
  if (lVar6 != 0) {
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    *(uint *)(param_1 + 0x34) = (uint)CONCAT11(uVar1,uVar2);
    fn_826C8C70(iVar13,0xffffffff82010d70);
  }
  if (lVar8 != 0) {
    *(ushort *)(param_1 + 0x50) = *(ushort *)(param_1 + 0x50) | 0x200;
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 1) {
      fn_826E7990(iVar13);
    }
    bVar3 = *(byte *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 1;
    *(uint *)(param_1 + 0x54) = (uint)bVar3;
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (ulonglong)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x38) = (float)uStack_60;
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (ulonglong)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x3c) = (float)uStack_60;
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (ulonglong)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x40) = (float)(longlong)uStack_60;
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
      fn_826E7800(iVar13,2);
    }
    puVar11 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar1 = puVar11[1];
    uVar2 = *puVar11;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
    uStack_60 = (ulonglong)CONCAT11(uVar1,uVar2);
    *(float *)(param_1 + 0x44) = (float)(longlong)uStack_60;
    fn_826C8C70(iVar13,0xffffffff82010d18,*(undefined4 *)(param_1 + 0x54),
                      (double)*(float *)(param_1 + 0x38),(double)*(float *)(param_1 + 0x3c),
                      (double)*(float *)(param_1 + 0x40),(double)(longlong)uStack_60);
  }
  fn_826E9530(iVar13,(uint *)(param_1 + 0x4c));
  if (lVar4 != 0) {
    fn_826E9530(iVar13,param_1 + 0x48);
  }
  fn_826C8C70(iVar13,0xffffffff82010cf0,
                    ((ulonglong)*(uint *)(param_1 + 0x4c) & 0xfffffffc) + 8,
                    ((ulonglong)*(uint *)(param_1 + 0x48) & 0xfffffffc) + 8);
  return;
}

