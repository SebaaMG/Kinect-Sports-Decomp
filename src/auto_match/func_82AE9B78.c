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
extern unsigned int *auStack_2c;
extern int fn_82AE9218();
extern unsigned int uStack_30;


byte fn_82AE9B78(uint param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_30;
  uint auStack_2c [11];
  
  puVar1 = *(uint **)(param_1 + 0x30);
  uVar2 = **(uint **)(param_1 + 0x2c);
  uVar7 = (*(uint **)(param_1 + 0x2c))[3];
  uVar6 = puVar1[3];
  if (((uVar2 >> 0x1e & 1) == 0) ||
     ((*(uint *)(*(int *)(*(int *)(param_1 & 0xfffff000) + 0x94) + 0x2c) >> 7 & 1) == 0)) {
    uVar8 = 0;
    uVar10 = *(uint *)(uVar7 + 8) >> 7 & 0x7f;
    if ((uVar10 == 0x13) || ((uVar10 == 0x1d || (uVar10 == 0x71)))) {
      uVar10 = uVar2 >> 0x19 & 7;
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar9 = 0;
        do {
          if (((uVar2 >> 5 & 0xff) >> (uVar9 & 0x3f) & 3) != uVar11) {
            bVar3 = true;
            goto LAB_82ae9cac;
          }
          uVar11 = uVar11 + 1;
          uVar9 = uVar9 + 2;
        } while (uVar11 < uVar10);
      }
      bVar3 = false;
LAB_82ae9cac:
      if ((bVar3) || ((*(uint *)(uVar6 + 8) & 0x3f80) != 0x3e00)) goto LAB_82ae9dd4;
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar9 = 0;
        do {
          if (((uVar2 >> 5 & 0xff ^ *puVar1 >> 5 & 0xff) >> (uVar9 & 0x3f) & 3) == 0)
          goto LAB_82ae9dd4;
          uVar11 = uVar11 + 1;
          uVar9 = uVar9 + 2;
        } while (uVar11 < uVar10);
      }
      *param_2 = 0;
    }
    uStack_30 = 0;
    auStack_2c[0] = 0;
    if ((*(uint *)(uVar6 + 8) & 0x3f80) == 0x3e00) {
      uStack_30 = 0;
      uVar2 = *puVar1 >> 0x19 & 7;
      if (uVar2 != 0) {
        uVar6 = 0;
        do {
          uVar8 = uVar8 + 1;
          uVar10 = uVar6 & 0x3f;
          uVar6 = uVar6 + 2;
          uStack_30 = 1 << ((*puVar1 >> 5 & 0xff) >> uVar10 & 3) | uStack_30;
        } while (uVar8 < uVar2);
      }
    }
    else {
      auStack_2c[0] = *puVar1 >> 0x19 & 7;
    }
    uVar4 = fn_82AE9218(uVar7,&uStack_30,auStack_2c);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_82AE9218(uVar4,&uStack_30,auStack_2c);
    }
    uVar4 = (ulonglong)uStack_30;
    bVar5 = -((((0x8da691691448U >> (uVar4 & 0x7f)) >> (uVar4 & 0x7f)) >> (uVar4 & 0x7f) & 7) +
              (ulonglong)auStack_2c[0] < 4) & 1;
  }
  else {
    uVar7 = uVar2 >> 0x19 & 7;
    uVar6 = 0;
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        uVar10 = uVar10 + 1;
        uVar11 = uVar8 & 0x3f;
        uVar8 = uVar8 + 2;
        uVar6 = 1 << ((uVar2 >> 5 & 0xff) >> uVar11 & 3) | uVar6;
      } while (uVar10 < uVar7);
    }
    uVar7 = 0;
    uVar10 = 0;
    uVar2 = *puVar1 >> 0x19 & 7;
    if (uVar2 != 0) {
      uVar8 = 0;
      do {
        uVar10 = uVar10 + 1;
        uVar11 = uVar8 & 0x3f;
        uVar8 = uVar8 + 2;
        uVar7 = 1 << ((*puVar1 >> 5 & 0xff) >> uVar11 & 3) | uVar7;
      } while (uVar10 < uVar2);
    }
    if ((uVar7 & uVar6) == 0) {
      *param_2 = 0;
      return 1;
    }
LAB_82ae9dd4:
    bVar5 = 0;
  }
  return bVar5;
}

