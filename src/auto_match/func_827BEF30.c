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
extern int fn_827BEEA0();


void fn_827BEF30(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[0xf];
  uVar6 = (ulonglong)uVar1;
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (uVar1 == 3) {
    if (param_1[0x10] == 3) {
      lVar7 = 10;
      goto LAB_827befac;
    }
  }
  else if (4 < (int)uVar1) {
    lVar7 = uVar6 * 6;
    goto LAB_827befac;
  }
  lVar7 = ((ulonglong)uVar1 & 0x3fffffff) * 4 + 2;
LAB_827befac:
  iVar4 = (int)lVar7;
  if ((param_1[0x58] == 0) || (param_1[0x59] < iVar4)) {
    if (iVar4 < 0xb) {
      lVar7 = 10;
    }
    param_1[0x59] = (int)lVar7;
    iVar2 = (**(code **)param_1[1])(param_1,0,lVar7 * 0x24);
    param_1[0x58] = iVar2;
  }
  iVar2 = param_1[0x58];
  param_1[0x2a] = iVar4;
  param_1[0x2b] = iVar2;
  if ((uVar1 == 3) && (param_1[0x10] == 3)) {
    puVar3 = (undefined4 *)fn_827BEEA0(iVar2,3,0,1);
    uVar5 = 1;
    puVar3[6] = 5;
    *puVar3 = 1;
    puVar3[1] = 0;
    puVar3[5] = 1;
    puVar3[7] = 0;
    puVar3[8] = 2;
    puVar3[9] = 1;
    puVar3[10] = 2;
    puVar3[0xe] = 1;
    puVar3[0xf] = 0x3f;
    puVar3[0x10] = 0;
    puVar3[0x11] = 1;
    puVar3[0x12] = 1;
    puVar3[0x13] = 1;
    puVar3[0x17] = 1;
    puVar3[0x18] = 0x3f;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 1;
    puVar3[0x1b] = 1;
    puVar3[0x1c] = 0;
    puVar3[0x20] = 6;
    puVar3[0x21] = 0x3f;
    puVar3[0x22] = 0;
    puVar3[0x23] = 2;
    puVar3[0x24] = 1;
    puVar3[0x25] = 0;
    puVar3[0x29] = 1;
    puVar3[0x2a] = 0x3f;
    puVar3[0x2b] = 2;
    puVar3[0x2c] = 1;
    puVar3 = (undefined4 *)fn_827BEEA0(puVar3 + 0x2d);
    *puVar3 = uVar5;
    puVar3[1] = 2;
    puVar3[5] = uVar5;
    puVar3[6] = 0x3f;
    puVar3[7] = uVar5;
    puVar3[8] = 0;
    puVar3[9] = uVar5;
    puVar3[10] = uVar5;
    puVar3[0xe] = uVar5;
    puVar3[0xf] = 0x3f;
    puVar3[0x10] = uVar5;
    puVar3[0x11] = 0;
    puVar3[0x12] = uVar5;
    puVar3[0x13] = 0;
    puVar3[0x17] = uVar5;
    puVar3[0x18] = 0x3f;
    puVar3[0x19] = uVar5;
    puVar3[0x1a] = 0;
  }
  else {
    puVar3 = (undefined4 *)fn_827BEEA0(iVar2,uVar6,0,1);
    uVar5 = 1;
    iVar4 = 0;
    uVar8 = uVar6;
    if (0 < (int)uVar1) {
      do {
        puVar3[1] = iVar4;
        *puVar3 = 1;
        iVar4 = iVar4 + 1;
        puVar3[5] = 1;
        puVar3[6] = 5;
        puVar3[7] = 0;
        puVar3[8] = 2;
        puVar3 = puVar3 + 9;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar4 = 0;
    uVar8 = uVar6;
    if (0 < (int)uVar1) {
      do {
        puVar3[1] = iVar4;
        *puVar3 = 1;
        iVar4 = iVar4 + 1;
        puVar3[5] = 6;
        puVar3[6] = 0x3f;
        puVar3[7] = 0;
        puVar3[8] = 2;
        puVar3 = puVar3 + 9;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar4 = 0;
    uVar8 = uVar6;
    if (0 < (int)uVar1) {
      do {
        puVar3[1] = iVar4;
        iVar4 = iVar4 + 1;
        *puVar3 = 1;
        puVar3[5] = 1;
        puVar3[6] = 0x3f;
        puVar3[7] = 2;
        puVar3[8] = 1;
        puVar3 = puVar3 + 9;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar4 = fn_827BEEA0(puVar3,uVar6,1,0);
    iVar2 = 0;
    if (0 < (int)uVar1) {
      puVar3 = (undefined4 *)(iVar4 + -4);
      do {
        puVar3[2] = iVar2;
        iVar2 = iVar2 + 1;
        puVar3[1] = uVar5;
        puVar3[6] = uVar5;
        puVar3[7] = 0x3f;
        puVar3[8] = uVar5;
        puVar3 = puVar3 + 9;
        *puVar3 = 0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

