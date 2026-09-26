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
extern int fn_82F68CC0();
extern int fn_830A81D8();


void fn_830A8900(uint *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar3 = *param_1;
  uVar13 = (ulonglong)uVar3;
  uVar4 = *param_3;
  uVar1 = param_1[2];
  uVar5 = param_1[0xb];
  uVar2 = param_1[1];
  uVar6 = param_1[7];
  uVar10 = (ulonglong)param_1[9];
  *(undefined1 *)(uVar4 + 3) = 0x1f;
  *(uint *)(uVar4 + 0x18) = uVar2;
  *(uint *)(uVar4 + 0x1c) = uVar1;
  *(short *)(uVar4 + 4) = (short)uVar3;
  *(uint *)(uVar4 + 8) = uVar5;
  lVar8 = uVar13 + 1;
  *(uint *)(uVar4 + 0x10) = (uVar3 & 0xffff) * 0x534 + 0x53 & 0xfffffff0;
  if (lVar8 != 0) {
    puVar7 = (undefined4 *)((uVar3 & 0xffff) * 0x4f0 + uVar4 + 0x3c);
    puVar9 = (undefined4 *)(uVar6 - 4);
    do {
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar9;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar12 = (uint)*(ushort *)(uVar4 + 4) * 0x4f4 + uVar4 + 0x44;
  uVar11 = uVar13;
  if (0 < (int)uVar3) {
    do {
      fn_82F68CC0(iVar12,uVar10,0x40);
      uVar11 = uVar11 - 1;
      iVar12 = iVar12 + 0x40;
      uVar10 = uVar10 + 0x40;
    } while (uVar11 != 0);
  }
  *(uint *)(uVar4 + 0x14) = param_1[10];
  *(uint *)(uVar4 + 8) = param_1[0xb];
  fn_830A81D8(*param_1,param_1 + 3,param_1[9],(ulonglong)*param_3 + 0x20,
                    (uVar13 + ((ulonglong)uVar3 & 0x1fffffff) * 8 & 0xfffffff) * 0x10 +
                    (ulonglong)*param_3 + 0x20,(uint)*(ushort *)(uVar4 + 4) * 0x4f0 + uVar4 + 0x40,
                    param_1[8],(uint)*(ushort *)(uVar4 + 4) * 0xf0 + uVar4 + 0x20);
  *param_3 = *(int *)(uVar4 + 0x10) + *param_3;
  return;
}

