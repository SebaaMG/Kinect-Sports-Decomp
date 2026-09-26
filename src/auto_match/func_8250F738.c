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
extern int fn_8250FDA0();


uint * fn_8250F738(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar4;
  undefined8 uVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar5 = param_3 + -4;
  uVar9 = (int)param_3 - (int)param_2 >> 5;
  iVar1 = (int)puVar5 - (int)param_2 >> 5;
  puVar10 = param_2 + (((int)param_3 - (int)param_2 >> 6) +
                      (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) * 4;
  puVar4 = param_2;
  if (0x28 < iVar1) {
    uVar9 = iVar1 + 1;
    uVar9 = ((int)uVar9 >> 3) + (uint)((int)uVar9 < 0 && (uVar9 & 7) != 0);
    fn_8250FDA0(param_2,param_2 + uVar9 * 4,param_2 + uVar9 * 8);
    fn_8250FDA0(puVar10 + (uVar9 & 0x7ffffff) * -4,puVar10,puVar10 + uVar9 * 4);
    fn_8250FDA0(puVar5 + (uVar9 & 0x3ffffff) * -8,puVar5 + (uVar9 & 0x7ffffff) * -4,puVar5);
    puVar4 = param_2 + uVar9 * 4;
    puVar5 = puVar5 + (uVar9 & 0x7ffffff) * -4;
  }
  fn_8250FDA0(puVar4,puVar10,puVar5);
  puVar4 = puVar10 + 4;
  for (; param_2 < puVar10; puVar10 = puVar10 + -4) {
    if ((*(float *)(puVar10 + -2) < *(float *)(puVar10 + 2)) ||
       (*(float *)(puVar10 + 2) < *(float *)(puVar10 + -2))) break;
  }
  puVar5 = puVar10;
  puVar8 = puVar4;
  if (puVar4 < param_3) {
    do {
      puVar8 = puVar4;
      if ((*(float *)(puVar4 + 2) < *(float *)(puVar10 + 2)) ||
         (*(float *)(puVar10 + 2) < *(float *)(puVar4 + 2))) break;
      puVar4 = puVar4 + 4;
      puVar8 = puVar4;
    } while (puVar4 < param_3);
  }
LAB_8250f8d8:
  do {
    puVar2 = puVar10;
    puVar6 = puVar5;
    if (puVar4 < param_3) {
      if (*(float *)(puVar4 + 2) <= *(float *)(puVar10 + 2)) {
        if (*(float *)(puVar4 + 2) < *(float *)(puVar10 + 2)) goto joined_r0x8250f8e4;
        uVar3 = *puVar8;
        uVar13 = puVar8[1];
        uVar12 = puVar8[2];
        uVar11 = puVar8[3];
        *puVar8 = *puVar4;
        puVar8[1] = puVar4[1];
        puVar8[2] = puVar4[2];
        puVar8[3] = puVar4[3];
        *puVar4 = uVar3;
        puVar4[1] = uVar13;
        puVar4[2] = uVar12;
        puVar4[3] = uVar11;
        goto LAB_8250f8d0;
      }
LAB_8250f8d4:
      puVar4 = puVar4 + 4;
      goto LAB_8250f8d8;
    }
joined_r0x8250f8e4:
    for (; param_2 < puVar5; puVar5 = puVar5 + -4) {
      puVar7 = puVar6 + -4;
      puVar10 = puVar2;
      if (*(float *)(puVar2 + 2) <= *(float *)(puVar6 + -2)) {
        if (*(float *)(puVar2 + 2) < *(float *)(puVar6 + -2)) break;
        puVar10 = puVar2 + -4;
        uVar3 = *puVar10;
        uVar13 = puVar2[-3];
        uVar12 = puVar2[-2];
        uVar11 = puVar2[-1];
        *puVar10 = *puVar7;
        puVar2[-3] = puVar6[-3];
        puVar2[-2] = puVar6[-2];
        puVar2[-1] = puVar6[-1];
        *puVar7 = uVar3;
        puVar6[-3] = uVar13;
        puVar6[-2] = uVar12;
        puVar6[-1] = uVar11;
      }
      puVar2 = puVar10;
      puVar6 = puVar7;
    }
    if (puVar5 == param_2) {
      if (puVar4 == param_3) {
        *param_1 = (uint)puVar2;
        param_1[1] = (uint)puVar8;
        return param_1;
      }
      if (puVar8 != puVar4) {
        uVar11 = *puVar2;
        uVar3 = puVar2[1];
        uVar13 = puVar2[2];
        uVar12 = puVar2[3];
        *puVar2 = *puVar8;
        puVar2[1] = puVar8[1];
        puVar2[2] = puVar8[2];
        puVar2[3] = puVar8[3];
        *puVar8 = uVar11;
        puVar8[1] = uVar3;
        puVar8[2] = uVar13;
        puVar8[3] = uVar12;
      }
      uVar3 = *puVar2;
      puVar10 = puVar2 + 4;
      *puVar2 = *puVar4;
      uVar13 = puVar2[1];
      uVar12 = puVar2[2];
      uVar11 = puVar2[3];
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      *puVar4 = uVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar12;
      puVar4[3] = uVar11;
LAB_8250f8d0:
      puVar8 = puVar8 + 4;
      goto LAB_8250f8d4;
    }
    if (puVar4 != param_3) {
      puVar6 = puVar5 + -4;
      uVar12 = *puVar4;
      uVar11 = puVar4[1];
      uVar3 = puVar4[2];
      uVar13 = puVar4[3];
      *puVar4 = *puVar6;
      puVar4[1] = puVar5[-3];
      puVar4[2] = puVar5[-2];
      puVar4[3] = puVar5[-1];
      *puVar6 = uVar12;
      puVar5[-3] = uVar11;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar13;
      puVar10 = puVar2;
      puVar5 = puVar6;
      goto LAB_8250f8d4;
    }
    puVar6 = puVar5 + -4;
    puVar10 = puVar2 + -4;
    if (puVar6 != puVar10) {
      uVar11 = *puVar6;
      uVar3 = puVar5[-3];
      uVar13 = puVar5[-2];
      uVar12 = puVar5[-1];
      *puVar6 = *puVar10;
      puVar5[-3] = puVar2[-3];
      puVar5[-2] = puVar2[-2];
      puVar5[-1] = puVar2[-1];
      *puVar10 = uVar11;
      puVar2[-3] = uVar3;
      puVar2[-2] = uVar13;
      puVar2[-1] = uVar12;
    }
    puVar7 = puVar8 + -4;
    uVar12 = *puVar10;
    uVar11 = puVar2[-3];
    uVar3 = puVar2[-2];
    uVar13 = puVar2[-1];
    *puVar10 = *puVar7;
    puVar2[-3] = puVar8[-3];
    puVar2[-2] = puVar8[-2];
    puVar2[-1] = puVar8[-1];
    *puVar7 = uVar12;
    puVar8[-3] = uVar11;
    puVar8[-2] = uVar3;
    puVar8[-1] = uVar13;
    puVar5 = puVar6;
    puVar8 = puVar7;
  } while( true );
}

