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


void fn_829AF8C8(uint *param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined1 uVar3;
  int iVar2;
  uint uVar4;
  undefined1 uVar6;
  undefined1 *puVar5;
  undefined1 uVar7;
  undefined1 uVar9;
  undefined1 *puVar8;
  
  uVar4 = *param_1;
  uVar6 = (undefined1)((ulonglong)param_3 >> 8);
  uVar9 = (undefined1)param_3;
  if (*(char *)(param_1 + 2) == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar8 = (undefined1 *)(uVar4 + param_2);
      puVar5 = puVar8 + uVar4;
      uVar1 = uVar4;
      if ((param_4 & 0x80) != 0) {
        if (1 < uVar4) {
          iVar2 = uVar4 - 1;
          do {
            puVar5[-1] = uVar9;
            puVar8 = puVar8 + -1;
            puVar5 = puVar5 + -2;
            *puVar5 = *puVar8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        puVar5[-1] = uVar9;
        uVar6 = 2;
        uVar9 = 0x10;
        uVar4 = uVar4 << 1;
LAB_829af930:
        *(undefined1 *)((int)param_1 + 10) = uVar6;
        *(undefined1 *)((int)param_1 + 0xb) = uVar9;
        goto LAB_829afb84;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar8 = puVar8 + -1;
        puVar5[-1] = *puVar8;
        puVar5 = puVar5 + -2;
        *puVar5 = uVar9;
      }
      uVar9 = 2;
      uVar6 = 0x10;
      uVar4 = uVar4 << 1;
    }
    else {
      if (*(char *)((int)param_1 + 9) != '\x10') {
        return;
      }
      puVar5 = (undefined1 *)(uVar4 * 2 + param_2);
      puVar8 = puVar5 + uVar4 * 2;
      uVar1 = uVar4;
      if ((param_4 & 0x80) != 0) {
        if (1 < uVar4) {
          iVar2 = uVar4 - 1;
          do {
            puVar8[-1] = uVar6;
            puVar8[-2] = uVar9;
            puVar8[-3] = puVar5[-1];
            puVar5 = puVar5 + -2;
            puVar8 = puVar8 + -4;
            *puVar8 = *puVar5;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        uVar7 = 2;
        uVar3 = 0x20;
        uVar4 = uVar4 << 2;
LAB_829af9bc:
        puVar8[-1] = uVar6;
        puVar8[-2] = uVar9;
        *(undefined1 *)((int)param_1 + 10) = uVar7;
        *(undefined1 *)((int)param_1 + 0xb) = uVar3;
        goto LAB_829afb84;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar8[-1] = puVar5[-1];
        puVar5 = puVar5 + -2;
        puVar8[-2] = *puVar5;
        puVar8[-3] = uVar6;
        puVar8 = puVar8 + -4;
        *puVar8 = uVar9;
      }
      uVar9 = 2;
      uVar6 = 0x20;
      uVar4 = uVar4 << 2;
    }
  }
  else {
    if (*(char *)(param_1 + 2) != '\x02') {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar8 = (undefined1 *)(uVar4 * 3 + param_2);
      puVar5 = puVar8 + uVar4;
      uVar1 = uVar4;
      if ((param_4 & 0x80) != 0) {
        if (1 < uVar4) {
          iVar2 = uVar4 - 1;
          do {
            puVar5[-1] = uVar9;
            puVar5[-2] = puVar8[-1];
            puVar5[-3] = puVar8[-2];
            puVar8 = puVar8 + -3;
            puVar5 = puVar5 + -4;
            *puVar5 = *puVar8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        puVar5[-1] = uVar9;
        uVar6 = 4;
        uVar9 = 0x20;
        uVar4 = uVar4 << 2;
        goto LAB_829af930;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar5[-1] = puVar8[-1];
        puVar5[-2] = puVar8[-2];
        puVar8 = puVar8 + -3;
        puVar5[-3] = *puVar8;
        puVar5 = puVar5 + -4;
        *puVar5 = uVar9;
      }
      uVar6 = 0x20;
      uVar4 = uVar4 << 2;
    }
    else {
      if (*(char *)((int)param_1 + 9) != '\x10') {
        return;
      }
      puVar5 = (undefined1 *)(uVar4 * 6 + param_2);
      puVar8 = puVar5 + uVar4 * 2;
      uVar1 = uVar4;
      if ((param_4 & 0x80) != 0) {
        if (1 < uVar4) {
          iVar2 = uVar4 - 1;
          do {
            puVar8[-1] = uVar6;
            puVar8[-2] = uVar9;
            puVar8[-3] = puVar5[-1];
            puVar8[-4] = puVar5[-2];
            puVar8[-5] = puVar5[-3];
            puVar8[-6] = puVar5[-4];
            puVar8[-7] = puVar5[-5];
            puVar5 = puVar5 + -6;
            puVar8 = puVar8 + -8;
            *puVar8 = *puVar5;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        uVar7 = 4;
        uVar3 = 0x40;
        uVar4 = uVar4 << 3;
        goto LAB_829af9bc;
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar8[-1] = puVar5[-1];
        puVar8[-2] = puVar5[-2];
        puVar8[-3] = puVar5[-3];
        puVar8[-4] = puVar5[-4];
        puVar8[-5] = puVar5[-5];
        puVar5 = puVar5 + -6;
        puVar8[-6] = *puVar5;
        puVar8[-7] = uVar6;
        puVar8 = puVar8 + -8;
        *puVar8 = uVar9;
      }
      uVar6 = 0x40;
      uVar4 = uVar4 << 3;
    }
    uVar9 = 4;
  }
  *(undefined1 *)((int)param_1 + 0xb) = uVar6;
  *(undefined1 *)((int)param_1 + 10) = uVar9;
LAB_829afb84:
  param_1[1] = uVar4;
  return;
}

