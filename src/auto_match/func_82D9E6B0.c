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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_90;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_a0;
extern int fn_830A6E50();
extern int fn_830A6FF8();
extern int fn_830A7130();
extern unsigned int iStack_7c;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_78;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D9E6B0(undefined8 param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,
                  int param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fStack_a0;
  undefined1 auStack_90 [20];
  int iStack_7c;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  
  uVar7 = ZEXT48(&stack0x00000000);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = *(int *)(param_6 + 0x4c);
  iVar1 = (int)*(float *)*param_3;
  *param_3 = (float *)*param_3 + 4;
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  iVar4 = *(int *)(iVar1 * 4 + *(int *)(param_4 + 0x34));
  puVar5 = (undefined4 *)((iVar2 + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar9 = puVar5[1];
  uVar10 = puVar5[2];
  uVar11 = puVar5[3];
  puVar6 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar9;
  puVar6[2] = uVar10;
  puVar6[3] = uVar11;
  uVar9 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0xa0);
  *(undefined4 *)(uVar7 - 0xa0) = uVar9;
  if (iVar4 != 0) {
    uVar9 = *param_7;
    dVar8 = (double)lbl_821AAD20;
    uStack_78 = CONCAT44(lbl_821AAD20,lbl_821AAD20);
    fn_830A6FF8(uVar7 - 0x90,param_5 + 0x10,param_6,uVar9,uVar7 - 0x80);
    fStack_a0 = (float)(iVar1 >> 0x1f);
    fStack_6c = -fStack_a0;
    uStack_78 = *(undefined8 *)(*(int *)(param_5 + 0xb8) * 8 + iVar3);
    fStack_70 = (float)dVar8;
    iStack_7c = param_6;
    fn_830A6E50(iVar4,uVar7 - 0x80,uVar7 - 0x60);
    fn_830A7130(uVar7 - 0x60,param_6,uVar9,param_7);
  }
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

