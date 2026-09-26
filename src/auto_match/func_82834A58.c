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
extern int fn_828348F0();


undefined4 * fn_82834A58(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  uVar1 = ((int)param_3 - (int)param_2) / 0xc;
  puVar11 = param_2 + (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 3;
  fn_828348F0(param_2,puVar11,param_3 + -3);
  puVar7 = puVar11 + 3;
  for (; ((param_2 < puVar11 && ((uint)puVar11[1] <= (uint)puVar11[-2])) &&
         ((uint)puVar11[-2] <= (uint)puVar11[1])); puVar11 = puVar11 + -3) {
  }
  puVar6 = puVar11;
  puVar8 = puVar7;
  if (puVar7 < param_3) {
    do {
      puVar8 = puVar7;
      if (((uint)puVar7[1] < (uint)puVar11[1]) || ((uint)puVar11[1] < (uint)puVar7[1])) break;
      puVar7 = puVar7 + 3;
      puVar8 = puVar7;
    } while (puVar7 < param_3);
  }
LAB_82834b50:
  do {
    puVar5 = puVar11;
    puVar10 = puVar6;
    if (puVar7 < param_3) {
      if ((uint)puVar7[1] <= (uint)puVar11[1]) {
        if ((uint)puVar7[1] < (uint)puVar11[1]) goto joined_r0x82834b5c;
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        *puVar8 = *puVar7;
        puVar8[1] = puVar7[1];
        puVar8[2] = puVar7[2];
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        goto LAB_82834b48;
      }
LAB_82834b4c:
      puVar7 = puVar7 + 3;
      goto LAB_82834b50;
    }
joined_r0x82834b5c:
    for (; param_2 < puVar6; puVar6 = puVar6 + -3) {
      puVar9 = puVar10 + -3;
      puVar11 = puVar5;
      if ((uint)puVar5[1] <= (uint)puVar10[-2]) {
        if ((uint)puVar5[1] < (uint)puVar10[-2]) break;
        puVar11 = puVar5 + -3;
        uVar4 = *puVar11;
        uVar2 = puVar5[-2];
        *puVar11 = *puVar9;
        uVar3 = puVar5[-1];
        puVar5[-2] = puVar10[-2];
        puVar5[-1] = puVar10[-1];
        *puVar9 = uVar4;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar3;
      }
      puVar5 = puVar11;
      puVar10 = puVar9;
    }
    if (puVar6 == param_2) {
      if (puVar7 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar8;
        return param_1;
      }
      if (puVar8 != puVar7) {
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        uVar4 = puVar5[2];
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        puVar5[2] = puVar8[2];
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
      }
      puVar11 = puVar5 + 3;
      uVar2 = *puVar5;
      *puVar5 = *puVar7;
      uVar3 = puVar5[1];
      uVar4 = puVar5[2];
      puVar5[1] = puVar7[1];
      puVar5[2] = puVar7[2];
      *puVar7 = uVar2;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
LAB_82834b48:
      puVar8 = puVar8 + 3;
      goto LAB_82834b4c;
    }
    puVar10 = puVar6 + -3;
    if (puVar7 != param_3) {
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      *puVar7 = *puVar10;
      puVar7[1] = puVar6[-2];
      puVar7[2] = puVar6[-1];
      *puVar10 = uVar2;
      puVar6[-2] = uVar3;
      puVar6[-1] = uVar4;
      puVar11 = puVar5;
      puVar6 = puVar10;
      goto LAB_82834b4c;
    }
    puVar11 = puVar5 + -3;
    if (puVar10 != puVar11) {
      uVar2 = *puVar10;
      uVar3 = puVar6[-2];
      uVar4 = puVar6[-1];
      *puVar10 = *puVar11;
      puVar6[-2] = puVar5[-2];
      puVar6[-1] = puVar5[-1];
      *puVar11 = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
    }
    puVar9 = puVar8 + -3;
    uVar2 = *puVar11;
    uVar3 = puVar5[-2];
    uVar4 = puVar5[-1];
    *puVar11 = *puVar9;
    puVar5[-2] = puVar8[-2];
    puVar5[-1] = puVar8[-1];
    *puVar9 = uVar2;
    puVar8[-2] = uVar3;
    puVar8[-1] = uVar4;
    puVar6 = puVar10;
    puVar8 = puVar9;
  } while( true );
}

