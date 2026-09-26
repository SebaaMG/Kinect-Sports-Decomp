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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82011638;
extern unsigned int lbl_8201435C;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_82016250;
extern unsigned int uStack_2;
extern unsigned int uStack_9;


void fn_827B58E0(double param_1,double param_2,double param_3,int param_4,undefined8 param_5,
                  ulonglong param_6,undefined8 param_7,undefined8 param_8,int param_9,int param_10,
                  ushort *param_11)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort *in_stack_00000054;
  undefined1 uStack_9;
  undefined2 uStack_2;
  
  *(char *)(param_10 + 6) = (char)param_6;
  *(undefined1 *)(param_10 + 7) = *(undefined1 *)(param_9 + 7);
  fVar9 = lbl_82002AE0;
  *(undefined1 *)(param_10 + 10) = *(undefined1 *)(param_9 + 10);
  *param_11 = (ushort)((param_6 & 0xffffffff) << 4);
  fVar11 = lbl_8200D8DC;
  fVar1 = (float)((double)(param_6 & 0xffffffff) / param_1);
  if (fVar1 < fVar9) {
    fVar1 = fVar9;
  }
  bVar2 = *(byte *)(param_9 + 8);
  bVar3 = *(byte *)(param_9 + 9);
  uVar4 = *(uint *)(param_4 + 0x10);
  iVar5 = *(int *)(param_4 + 0xc);
  *in_stack_00000054 = 0x100;
  fVar10 = lbl_82002C5C;
  fVar8 = (float)((iVar5 + (uVar4 & 0x7fffffff) * -2) - 2);
  fVar7 = (float)((double)((float)bVar2 * fVar1) * param_2) * fVar11;
  fVar6 = (float)((double)((float)bVar3 * fVar1) * param_2) * fVar11;
  fVar1 = (float)((double)(float)((double)(param_6 & 0xffffffff) * (double)lbl_820143E0) * param_3 +
                 (double)(fVar6 * lbl_82005344));
  if (fVar8 < fVar1) {
    fVar8 = fVar8 / fVar1;
    fVar7 = fVar7 * fVar8;
    fVar6 = fVar6 * fVar8;
    uStack_2 = (ushort)(longlong)(fVar8 * lbl_8201435C + lbl_82002C5C);
    uVar12 = uStack_2;
    uStack_2 = (ushort)(longlong)((float)*param_11 * fVar8);
    *param_11 = uStack_2;
    *in_stack_00000054 = uVar12;
    *(byte *)(param_10 + 7) = *(byte *)(param_10 + 7) & 0xfd;
  }
  if (lbl_82016250 < fVar7) {
    fVar7 = lbl_82016250;
  }
  if (lbl_82016250 < fVar6) {
    fVar6 = lbl_82016250;
  }
  fVar1 = fVar6 * lbl_82011638;
  uStack_2 = ((((U64)(uStack_2)) & (~(((U64)0xFF) << 8))) | ((((U64)((undefined1)(longlong)(fVar7 * lbl_82011638 + fVar10))) & ((U64)0xFF)) << 8));
  *(undefined1 *)(param_10 + 8) = (undefined1)uStack_2;
  uStack_9 = (byte)(longlong)(fVar1 + fVar10);
  *(byte *)(param_10 + 9) = uStack_9;
  if ((*(byte *)(param_9 + 7) & 0x80) != 0) {
    return;
  }
  if ((*(byte *)(param_9 + 7) & 1) != 0) {
    return;
  }
  uVar13 = (longlong)((float)uStack_9 * fVar11 + fVar10) & 0xffffffff;
  if ((uVar13 == 0) && (uStack_9 != 0)) {
    uVar13 = 1;
  }
  if (fVar6 <= (float)uVar13) {
    return;
  }
  uStack_2 = (ushort)(longlong)((float)((uint)*param_11 * (int)uVar13) * (fVar9 / fVar6));
  *param_11 = uStack_2;
  uStack_2 = (ushort)(longlong)((float)((uint)*in_stack_00000054 * (int)uVar13) * (fVar9 / fVar6));
  *in_stack_00000054 = uStack_2;
  return;
}

