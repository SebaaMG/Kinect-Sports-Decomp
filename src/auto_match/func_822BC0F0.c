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
extern int fn_822C69F0();
extern int fn_822C6D68();
extern unsigned int lbl_82193AF0;
extern V16 vectorSubtractFloatingPoint();


bool fn_822BC0F0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  int in_r0;
  longlong lVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar7;
  float fVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float afStack_50 [20];
  
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x114) + 0x50;
  fn_822C6D68(lVar6,param_1 + 0x80,param_1 + 0xc0);
  fn_822C69F0(lVar6,param_1 + 0x80,param_1 + 0xc0);
  fVar5 = lbl_82193AF0;
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar7 = *(float *)(uVar2 + 4);
  fVar8 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar7 = fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
  pfVar3 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar7;
  pfVar3[1] = fVar7;
  pfVar3[2] = fVar7;
  pfVar3[3] = fVar7;
  if (afStack_50[0] < fVar5) {
    iVar1 = *(int *)(param_1 + 0x114);
    puVar4 = (undefined4 *)(in_r0 + iVar1 + 0x50 & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
  }
  return afStack_50[0] < fVar5;
}

