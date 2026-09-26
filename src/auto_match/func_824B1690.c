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
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_824B1A08();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_824B1690(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint auStack_40 [2];
  uint *puStack_38;
  undefined8 *puStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  auStack_40[1] = 200;
  if ((param_1[1] - *param_1 & 0xffffffe0) != 0x1900) {
    puVar2 = (undefined8 *)fn_8265C9E0(0x1900);
    if (puVar2 == (undefined8 *)0x0) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    auStack_40[0] = param_1[4];
    puVar5 = (undefined8 *)0x0;
    if (auStack_40[0] != 0) {
      puVar5 = (undefined8 *)param_1[2];
    }
    puVar4 = auStack_40;
    if (199 < auStack_40[0]) {
      puVar4 = auStack_40 + 1;
    }
    uVar3 = *puVar4;
    puVar6 = puVar2;
    puStack_38 = param_1;
    if ((int)uVar3 < 1) {
      puStack_34 = puVar5;
      if ((int)uVar3 < 0) {
        fn_824B1A08(&puStack_38,-uVar3);
      }
    }
    else {
      if ((int)(param_1[1] - (int)puVar5) >> 5 <= (int)uVar3) {
        uVar3 = uVar3 - ((int)(param_1[1] - *param_1) >> 5);
      }
      puStack_34 = puVar5 + uVar3 * 4;
      if (puVar5 + uVar3 * 4 == (undefined8 *)param_1[3]) {
        puStack_34 = (undefined8 *)0x0;
      }
    }
    for (; puVar5 != puStack_34;
        puVar5 = (undefined8 *)(-(uint)((undefined8 *)param_1[3] != puVar5) & (uint)puVar5)) {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
      }
      puVar5 = puVar5 + 4;
      if (puVar5 == (undefined8 *)param_1[1]) {
        puVar5 = (undefined8 *)*param_1;
      }
      puVar6 = puVar6 + 4;
    }
    uVar3 = 0;
    if (param_1[4] != 0) {
      do {
        uVar1 = param_1[2];
        uVar3 = uVar3 + 1;
        param_1[2] = uVar1 + 0x20;
        if (uVar1 + 0x20 == param_1[1]) {
          param_1[2] = *param_1;
        }
      } while (uVar3 < param_1[4]);
    }
    if (*param_1 != 0) {
      fn_8265CA20();
    }
    *param_1 = (uint)puVar2;
    param_1[2] = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + 800);
    param_1[4] = (int)puVar6 - (int)puVar2 >> 5;
    if (puVar6 == puVar2 + 800) {
      puVar6 = puVar2;
    }
    param_1[3] = (uint)puVar6;
  }
  return;
}

