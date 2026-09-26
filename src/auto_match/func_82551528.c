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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82551D80();
extern int fn_82F68CC0();


uint * fn_82551528(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar6;
  int iVar7;
  ulonglong uVar5;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar12 = param_3 - 0x18;
  uVar14 = (int)(param_3 - param_2) / 0x18;
  iVar7 = (int)(iVar12 - param_2) / 0x18;
  uVar14 = (((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)) * 0x18 + param_2;
  uVar6 = param_2;
  if (0x28 < iVar7) {
    uVar6 = iVar7 + 1;
    iVar7 = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    uVar6 = iVar7 * 0x18 + param_2;
    fn_82551D80(param_2,uVar6,iVar7 * 0x30 + param_2);
    fn_82551D80(uVar14 + iVar7 * -0x18,uVar14,iVar7 * 0x18 + uVar14);
    iVar11 = iVar12 + iVar7 * -0x18;
    fn_82551D80(iVar12 + iVar7 * -0x30,iVar11,iVar12);
    iVar12 = iVar11;
  }
  fn_82551D80(uVar6,uVar14,iVar12);
  uVar6 = uVar14 + 0x18;
  if (param_2 < uVar14) {
    puVar3 = (uint *)(uVar14 - 8);
    do {
      uVar10 = *puVar3;
      uVar5 = (ulonglong)uVar10;
      uVar9 = puVar3[6];
      uVar4 = (ulonglong)uVar9;
      if (uVar10 == uVar9) {
        bVar15 = puVar3[7] <= puVar3[1];
        uVar13 = puVar3[7] ^ puVar3[1];
      }
      else {
        bVar15 = uVar4 <= uVar5;
        uVar13 = uVar9 ^ uVar10;
      }
      if ((((~(ulonglong)uVar13 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) != 0) break;
      if (uVar9 == uVar10) {
        uVar5 = (ulonglong)puVar3[1];
        uVar4 = (ulonglong)puVar3[7];
      }
      if ((((~(uVar5 ^ uVar4) & 0xffffffff) >> 0x1f) + (ulonglong)(uVar5 <= uVar4) & 1) != 0) break;
      uVar14 = uVar14 - 0x18;
      puVar3 = puVar3 + -6;
    } while (param_2 < uVar14);
  }
  uVar10 = uVar14;
  uVar9 = uVar6;
  if (uVar6 < param_3) {
    uVar13 = *(uint *)(uVar14 + 0x10);
    while( true ) {
      uVar8 = *(uint *)(uVar6 + 0x10);
      if (uVar8 == uVar13) {
        bVar15 = *(uint *)(uVar14 + 0x14) <= *(uint *)(uVar6 + 0x14);
        uVar1 = *(uint *)(uVar14 + 0x14) ^ *(uint *)(uVar6 + 0x14);
      }
      else {
        bVar15 = uVar13 <= uVar8;
        uVar1 = uVar13 ^ uVar8;
      }
      uVar9 = uVar6;
      if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) != 0) break;
      if (uVar13 == uVar8) {
        bVar15 = *(uint *)(uVar6 + 0x14) <= *(uint *)(uVar14 + 0x14);
        uVar8 = *(uint *)(uVar6 + 0x14) ^ *(uint *)(uVar14 + 0x14);
      }
      else {
        bVar15 = uVar8 <= uVar13;
        uVar8 = uVar8 ^ uVar13;
      }
      if (((((~(ulonglong)uVar8 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) != 0) ||
         (uVar6 = uVar6 + 0x18, uVar9 = uVar6, param_3 <= uVar6)) break;
    }
  }
LAB_825517c4:
  do {
    if (param_3 <= uVar6) {
LAB_825517cc:
      uVar13 = uVar14;
      if (param_2 < uVar10) {
        puVar3 = (uint *)(uVar10 - 8);
        do {
          uVar14 = *puVar3;
          uVar8 = *(uint *)(uVar13 + 0x10);
          if (uVar14 == uVar8) {
            bVar15 = *(uint *)(uVar13 + 0x14) <= puVar3[1];
            uVar1 = *(uint *)(uVar13 + 0x14) ^ puVar3[1];
          }
          else {
            bVar15 = uVar8 <= uVar14;
            uVar1 = uVar8 ^ uVar14;
          }
          if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) == 0) {
            if (uVar8 == uVar14) {
              bVar15 = puVar3[1] <= *(uint *)(uVar13 + 0x14);
              uVar14 = puVar3[1] ^ *(uint *)(uVar13 + 0x14);
            }
            else {
              bVar15 = uVar14 <= uVar8;
              uVar14 = uVar14 ^ uVar8;
            }
            if ((((~(ulonglong)uVar14 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) != 0) break;
            uVar13 = uVar13 - 0x18;
            fn_82F68CC0(auStack_90,uVar13,0x18);
            fn_82F68CC0(uVar13,puVar3 + -4,0x18);
            fn_82F68CC0(puVar3 + -4,auStack_90,0x18);
          }
          uVar10 = uVar10 - 0x18;
          puVar3 = puVar3 + -6;
        } while (param_2 < uVar10);
      }
      if (uVar10 == param_2) {
        if (uVar6 == param_3) {
          *param_1 = uVar13;
          param_1[1] = uVar9;
          return param_1;
        }
        if (uVar9 != uVar6) {
          fn_82F68CC0(auStack_d0,uVar13,0x18);
          fn_82F68CC0(uVar13,uVar9,0x18);
          fn_82F68CC0(uVar9,auStack_d0,0x18);
        }
        uVar14 = uVar13 + 0x18;
        fn_82F68CC0(auStack_130,uVar13,0x18);
        fn_82F68CC0(uVar13,uVar6,0x18);
        puVar2 = auStack_130;
        uVar13 = uVar6;
        uVar9 = uVar9 + 0x18;
        uVar6 = uVar6 + 0x18;
      }
      else {
        if (uVar6 != param_3) {
          uVar10 = uVar10 - 0x18;
          fn_82F68CC0(auStack_70,uVar6,0x18);
          fn_82F68CC0(uVar6,uVar10,0x18);
          puVar2 = auStack_70;
          uVar14 = uVar13;
          uVar13 = uVar10;
          uVar8 = uVar9;
          goto LAB_825517b8;
        }
        uVar10 = uVar10 - 0x18;
        uVar14 = uVar13 - 0x18;
        if (uVar10 != uVar14) {
          fn_82F68CC0(auStack_f0,uVar10,0x18);
          fn_82F68CC0(uVar10,uVar14,0x18);
          fn_82F68CC0(uVar14,auStack_f0,0x18);
        }
        uVar13 = uVar9 - 0x18;
        fn_82F68CC0(auStack_b0,uVar14,0x18);
        fn_82F68CC0(uVar14,uVar13,0x18);
        puVar2 = auStack_b0;
        uVar9 = uVar13;
      }
      fn_82F68CC0(uVar13,puVar2,0x18);
      goto LAB_825517c4;
    }
    uVar13 = *(uint *)(uVar14 + 0x10);
    uVar8 = *(uint *)(uVar6 + 0x10);
    if (uVar13 == uVar8) {
      bVar15 = *(uint *)(uVar6 + 0x14) <= *(uint *)(uVar14 + 0x14);
      uVar1 = *(uint *)(uVar6 + 0x14) ^ *(uint *)(uVar14 + 0x14);
    }
    else {
      bVar15 = uVar8 <= uVar13;
      uVar1 = uVar8 ^ uVar13;
    }
    if ((((~(ulonglong)uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) == 0) {
      if (uVar8 == uVar13) {
        bVar15 = *(uint *)(uVar14 + 0x14) <= *(uint *)(uVar6 + 0x14);
        uVar13 = *(uint *)(uVar14 + 0x14) ^ *(uint *)(uVar6 + 0x14);
      }
      else {
        bVar15 = uVar13 <= uVar8;
        uVar13 = uVar13 ^ uVar8;
      }
      if ((((~(ulonglong)uVar13 & 0xffffffff) >> 0x1f) + (ulonglong)bVar15 & 1) != 0)
      goto LAB_825517cc;
      uVar8 = uVar9 + 0x18;
      fn_82F68CC0(auStack_110,uVar9,0x18);
      fn_82F68CC0(uVar9,uVar6,0x18);
      puVar2 = auStack_110;
      uVar13 = uVar6;
LAB_825517b8:
      fn_82F68CC0(uVar13,puVar2,0x18);
      uVar9 = uVar8;
    }
    uVar6 = uVar6 + 0x18;
  } while( true );
}

