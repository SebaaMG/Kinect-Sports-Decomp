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
extern int fn_827D4370();
extern int fn_827D4EF8();
extern int fn_82F68CC0();


void fn_82F8AD98(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar1 = param_1[0xb];
  uVar13 = (ulonglong)uVar1;
  do {
    uVar12 = ((ulonglong)(uint)param_1[0xf] - (ulonglong)(uint)param_1[0x1d]) -
             (ulonglong)(uint)param_1[0x1b];
    if (((uVar13 + (uint)param_1[0xb]) - 0x106 & 0xffffffff) <= (ulonglong)(uint)param_1[0x1b]) {
      fn_82F68CC0((ulonglong)(uint)param_1[0xe],(uint)param_1[0xe] + uVar13,uVar13);
      uVar11 = (ulonglong)(uint)param_1[0x13];
      puVar10 = (ushort *)(param_1[0x11] + param_1[0x13] * 2);
      param_1[0x1b] = param_1[0x1b] - uVar1;
      param_1[0x17] = param_1[0x17] - uVar1;
      param_1[0x1c] = param_1[0x1c] - uVar1;
      do {
        puVar10 = puVar10 + -1;
        uVar9 = *puVar10 - (short)uVar1;
        if (*puVar10 < uVar13) {
          uVar9 = 0;
        }
        uVar11 = uVar11 - 1;
        *puVar10 = uVar9;
      } while (uVar11 != 0);
      puVar10 = (ushort *)(param_1[0x10] + uVar1 * 2);
      uVar11 = uVar13;
      do {
        puVar10 = puVar10 + -1;
        uVar9 = *puVar10 - (short)uVar1;
        if (*puVar10 < uVar1) {
          uVar9 = 0;
        }
        uVar11 = uVar11 - 1;
        *puVar10 = uVar9;
      } while (uVar11 != 0);
      uVar12 = uVar12 + uVar13;
    }
    piVar2 = (int *)*param_1;
    if (piVar2[1] == 0) {
      return;
    }
    uVar8 = param_1[0x1d];
    uVar3 = param_1[0x1b];
    uVar4 = param_1[0xe];
    uVar5 = piVar2[1];
    uVar11 = (ulonglong)uVar5;
    if ((uVar12 & 0xffffffff) < (ulonglong)uVar5) {
      uVar11 = uVar12;
    }
    if ((uVar11 & 0xffffffff) == 0) {
      uVar11 = 0;
    }
    else {
      iVar6 = (int)uVar11;
      piVar2[1] = uVar5 - iVar6;
      if (*(int *)(piVar2[7] + 0x18) == 1) {
        iVar7 = fn_827D4370(piVar2[0xc],*piVar2,uVar11);
LAB_82f8aef8:
        piVar2[0xc] = iVar7;
      }
      else if (*(int *)(piVar2[7] + 0x18) == 2) {
        iVar7 = fn_827D4EF8(piVar2[0xc],*piVar2,uVar11);
        goto LAB_82f8aef8;
      }
      fn_82F68CC0((ulonglong)uVar8 + (ulonglong)uVar3 + (ulonglong)uVar4,*piVar2,uVar11);
      *piVar2 = *piVar2 + iVar6;
      piVar2[2] = iVar6 + piVar2[2];
    }
    uVar11 = (uint)param_1[0x1d] + uVar11;
    param_1[0x1d] = (int)uVar11;
    if (2 < (uVar11 & 0xffffffff)) {
      uVar8 = (uint)*(byte *)(param_1[0x1b] + param_1[0xe]);
      param_1[0x12] = uVar8;
      param_1[0x12] =
           (uVar8 << (param_1[0x16] & 0x3fU) ^ (uint)((byte *)(param_1[0x1b] + param_1[0xe]))[1]) &
           param_1[0x15];
    }
    if (0x105 < (uVar11 & 0xffffffff)) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}

