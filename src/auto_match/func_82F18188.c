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
extern int fn_82F29E38();
extern unsigned int iStack00000024;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack0000001c;


undefined8
fn_82F18188(int param_1,longlong param_2,undefined8 param_3,uint *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  short sVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uStack0000001c;
  int iStack00000024;
  
  uVar10 = *param_4;
  uStack0000001c = (undefined4)param_2;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff;
  iStack00000024 = (int)param_3;
  *param_4 = uVar10 & 0xfffffff4;
  uVar17 = (longlong)((int)uVar8 * 2) * (longlong)iStack00000024 + param_2;
  iVar6 = (int)((uVar17 & 0x7fffffff) << 1);
  if (*(short *)(*(int *)(param_1 + 0x9f0) + iVar6) == 0x4000) {
    uVar9 = 1;
    *param_4 = uVar10 & 0xffff0000 | 4;
    *(undefined2 *)param_4 = 0;
  }
  else {
    uVar10 = fn_82F29E38(param_1,param_2,param_3,param_5,&stack0x0000001c,&stack0x00000024);
    *param_4 = uVar10 & 3 | *param_4 & 0xfffffffc;
    if ((uVar10 & 3) == 0) {
      sVar15 = (short)uStack0000001c;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x9f0);
      iVar2 = *(int *)(param_1 + 0x9f4);
      sVar15 = *(short *)(iVar1 + iVar6 + -2);
      iVar7 = (int)((uVar17 + uVar8 * -2 & 0x7fffffff) << 1);
      uVar12 = (int)*(short *)(iVar2 + iVar7) - (int)*(short *)(iVar2 + iVar6);
      uVar16 = (-(uint)(*(short *)(iVar7 + iVar1) != 0x4000) & (int)*(short *)(iVar7 + iVar1)) -
               (int)*(short *)(iVar1 + iVar6);
      uVar14 = (int)*(short *)(iVar2 + iVar6 + -2) - (int)*(short *)(iVar2 + iVar6);
      uVar11 = (-(uint)(sVar15 != 0x4000) & (int)sVar15) - (int)*(short *)(iVar1 + iVar6);
      uVar10 = (int)uVar12 >> 0x1f;
      uVar3 = (int)uVar16 >> 0x1f;
      uVar4 = (int)uVar14 >> 0x1f;
      uVar5 = (int)uVar11 >> 0x1f;
      if ((int)(((uVar14 ^ uVar4) - uVar4) + ((uVar11 ^ uVar5) - uVar5)) <
          (int)(((uVar12 ^ uVar10) - uVar10) + ((uVar16 ^ uVar3) - uVar3))) {
        *param_4 = *param_4 & 0xfffffffc | 1;
        sVar15 = *(short *)(*(int *)(param_1 + 0x9f0) + iVar6 + -2);
        sVar13 = *(short *)(*(int *)(param_1 + 0x9f4) + iVar6 + -2);
      }
      else {
        *param_4 = *param_4 & 0xfffffffc | 2;
        sVar15 = *(short *)(*(int *)(param_1 + 0x9f0) + iVar7);
        sVar13 = *(short *)(*(int *)(param_1 + 0x9f4) + iVar7);
      }
      iStack00000024 = (int)sVar13;
      if (sVar15 == 0x4000) {
        sVar15 = 0;
        iStack00000024 = 0;
      }
    }
    sVar13 = (short)*(undefined4 *)(param_1 + 0xa2c);
    *(ushort *)param_4 =
         ((*(short *)(*(int *)(param_1 + 0x9f0) + iVar6) - sVar15) + sVar13 &
         (ushort)*(undefined4 *)(param_1 + 0xa34)) - sVar13;
    uVar10 = *param_4;
    uVar3 = ((*(short *)(*(int *)(param_1 + 0x9f4) + iVar6) - iStack00000024) +
             *(uint *)(param_1 + 0xa30) & 0xfffffff & *(uint *)(param_1 + 0xa38) & 0xfffffff) * 0x10
            + (*(uint *)(param_1 + 0xa30) & 0xfffffff) * -0x10 & 0xfff0;
    *param_4 = uVar3 | uVar10 & 0xffff000b;
    if (((uVar10 & 0xffff0000) != 0) || (uVar9 = 0, uVar3 != 0)) {
      uVar9 = 1;
    }
    if ((*(int *)(param_1 + 0x89c) == 2) || (*(int *)(param_1 + 0x89c) == 3)) {
      *(short *)param_4 = (short)((int)*param_4 >> 0x11);
      *param_4 = *param_4 & 0xffff000f | (int)*param_4 >> 1 & 0xfff0U;
    }
  }
  return uVar9;
}

