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
extern int fn_829C0738();
extern int fn_82F68CC0();


void fn_829B7AB0(int *param_1)

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
  ulonglong uVar14;
  
  uVar1 = param_1[9];
  uVar14 = (ulonglong)uVar1;
  do {
    uVar11 = (ulonglong)(uint)param_1[0x19];
    uVar12 = ((uint)param_1[0xd] - uVar11) - (ulonglong)(uint)param_1[0x1b];
    if (uVar12 == 0) {
      if ((uVar11 != 0) || (uVar13 = uVar14, (ulonglong)(uint)param_1[0x1b] != 0)) {
LAB_829b7b04:
        uVar13 = uVar12;
        if (((uVar14 + (uint)param_1[9]) - 0x106 & 0xffffffff) <= uVar11) {
          fn_82F68CC0((ulonglong)(uint)param_1[0xc],(uint)param_1[0xc] + uVar14,uVar14);
          uVar11 = (ulonglong)(uint)param_1[0x11];
          puVar10 = (ushort *)(param_1[0xf] + param_1[0x11] * 2);
          param_1[0x19] = param_1[0x19] - uVar1;
          param_1[0x15] = param_1[0x15] - uVar1;
          param_1[0x1a] = param_1[0x1a] - uVar1;
          do {
            puVar10 = puVar10 + -1;
            uVar9 = *puVar10 - (short)uVar1;
            if (*puVar10 < uVar14) {
              uVar9 = 0;
            }
            uVar11 = uVar11 - 1;
            *puVar10 = uVar9;
          } while (uVar11 != 0);
          puVar10 = (ushort *)(param_1[0xe] + uVar1 * 2);
          uVar11 = uVar14;
          do {
            puVar10 = puVar10 + -1;
            uVar9 = *puVar10 - (short)uVar1;
            if (*puVar10 < uVar1) {
              uVar9 = 0;
            }
            uVar11 = uVar11 - 1;
            *puVar10 = uVar9;
          } while (uVar11 != 0);
          uVar13 = uVar12 + uVar14;
        }
      }
    }
    else {
      if ((int)uVar12 != -1) goto LAB_829b7b04;
      uVar13 = 0xfffffffffffffffe;
    }
    piVar2 = (int *)*param_1;
    if (piVar2[1] == 0) {
      return;
    }
    uVar8 = param_1[0x1b];
    uVar3 = param_1[0x19];
    uVar4 = param_1[0xc];
    uVar5 = piVar2[1];
    uVar11 = (ulonglong)uVar5;
    if ((uVar13 & 0xffffffff) < (ulonglong)uVar5) {
      uVar11 = uVar13;
    }
    if ((uVar11 & 0xffffffff) == 0) {
      uVar11 = 0;
    }
    else {
      iVar6 = (int)uVar11;
      piVar2[1] = uVar5 - iVar6;
      if (*(int *)(piVar2[7] + 0x18) == 0) {
        iVar7 = fn_829C0738(piVar2[0xc],*piVar2,uVar11);
        piVar2[0xc] = iVar7;
      }
      fn_82F68CC0((ulonglong)uVar8 + (ulonglong)uVar3 + (ulonglong)uVar4,*piVar2,uVar11);
      *piVar2 = *piVar2 + iVar6;
      piVar2[2] = iVar6 + piVar2[2];
    }
    uVar11 = (uint)param_1[0x1b] + uVar11;
    param_1[0x1b] = (int)uVar11;
    if (2 < (uVar11 & 0xffffffff)) {
      uVar8 = (uint)*(byte *)(param_1[0x19] + param_1[0xc]);
      param_1[0x10] = uVar8;
      param_1[0x10] =
           (uVar8 << (param_1[0x14] & 0x3fU) ^ (uint)((byte *)(param_1[0x19] + param_1[0xc]))[1]) &
           param_1[0x13];
    }
    if (0x105 < (uVar11 & 0xffffffff)) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}

