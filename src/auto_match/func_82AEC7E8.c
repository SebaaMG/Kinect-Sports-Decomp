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
extern int fn_82ACB0F8();
extern int fn_82B0FD38();


void fn_82AEC7E8(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  
  uVar11 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x1000000;
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) & 0xffffe000 | param_3 & 0x1fff;
  if (uVar11 == 0x6e) {
    piVar12 = (int *)(param_2 + 0x2c);
    for (uVar11 = 0; uVar11 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
      uVar1 = *(uint *)(*piVar12 + 0xc);
      puVar13 = (uint *)(uVar1 + 4);
      while (puVar2 = (uint *)*puVar13, puVar2 != (uint *)0x0) {
        uVar6 = puVar2[4];
        if ((((uVar6 != 0) && ((*puVar2 & 0xe000000) != 0)) && (uVar6 != param_2)) &&
           (((*(byte *)(uVar6 + 0x10) & 1) != 0 && (cVar5 = fn_82ACB0F8(param_2), cVar5 != '\0'))))
        {
          uVar6 = 0;
          piVar8 = (int *)(param_2 + 0x2c);
          for (uVar9 = 0; uVar9 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar9 = uVar9 + 1) {
            if (((uint *)*piVar8)[3] == uVar1) {
              uVar7 = *(uint *)*piVar8 >> 4 & 6;
              uVar6 = uVar6 & ~(3 << uVar7) | uVar9 << uVar7;
            }
            piVar8 = piVar8 + 1;
          }
          if ((*puVar2 >> 0x1e & 1) != 0) {
            for (puVar3 = *(uint **)(param_2 + 4);
                (puVar3 != (uint *)0x0 && ((puVar3[4] == 0 || ((*puVar3 & 0xe000000) == 0))));
                puVar3 = (uint *)puVar3[2]) {
            }
            uVar9 = *puVar2;
            *puVar2 = uVar9 & 0xbfffffff;
            *puVar2 = uVar9 & 0xbe001fff | *puVar3 & 0x1ffe000 | 0x40000000;
          }
          puVar10 = (uint *)(puVar2[3] + 4);
          for (puVar3 = (uint *)*puVar10; puVar3 != puVar2; puVar3 = (uint *)puVar3[2]) {
            puVar10 = puVar3 + 2;
          }
          *puVar10 = puVar2[2];
          puVar2[2] = *(uint *)(param_2 + 4);
          *(uint **)(param_2 + 4) = puVar2;
          uVar9 = *puVar2 >> 5;
          uVar7 = uVar9 & 0xff;
          puVar2[3] = param_2;
          *puVar2 = ((((uVar6 >> (uVar7 >> 5 & 6) & 3) << 2 | uVar6 >> (uVar7 >> 3 & 6) & 3) << 2 |
                     uVar6 >> (uVar7 >> 1 & 6) & 3) << 2 | uVar6 >> ((uVar9 & 3) << 1) & 3) << 5 |
                    *puVar2 & 0xffffe01e;
        }
        if ((uint *)*puVar13 == puVar2) {
          puVar13 = puVar2 + 2;
        }
      }
      piVar12 = piVar12 + 1;
    }
    return;
  }
  if ((uVar11 < 0x20) || (bVar4 = true, 0x52 < uVar11)) {
    bVar4 = false;
  }
  if (!bVar4) {
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x380000) < 0x80001) {
    return;
  }
  piVar12 = *(int **)(*(int *)(param_2 + 0x30) + 0xc);
  if (((uint)piVar12[2] >> 0x17 & 1) == 0) {
    while( true ) {
      fn_82B0FD38(param_1,piVar12);
      if ((piVar12[2] & 0x3f80U) == 0x3700) {
        for (puVar13 = (uint *)*piVar12; puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[1]) {
          if ((((*puVar13 & 0xe000000) != 0) && ((*(uint *)(puVar13[3] + 8) >> 0x17 & 1) == 0)) &&
             ((*(uint *)(puVar13[3] + 8) >> 0x18 & 1) != 0)) {
            fn_82B0FD38(param_1);
          }
        }
        return;
      }
      puVar13 = (uint *)piVar12[1];
      while( true ) {
        if (puVar13 == (uint *)0x0) {
          return;
        }
        piVar12 = (int *)puVar13[4];
        if (((piVar12 != (int *)0x0) && ((*puVar13 & 0xe000000) != 0)) &&
           (uVar11 = piVar12[2], (uVar11 & 0x3f80) == 0x3700)) break;
        puVar13 = (uint *)puVar13[2];
      }
      if ((uVar11 >> 0x17 & 1) != 0) break;
      if ((uVar11 >> 0x18 & 1) == 0) {
        return;
      }
    }
    return;
  }
  return;
}

