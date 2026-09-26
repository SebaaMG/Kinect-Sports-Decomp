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
extern int fn_82ACA920();
extern int fn_82AD1B28();
extern int fn_82AD35E8();
extern int fn_82AE93B0();
extern int fn_82B83FE0();
extern int fn_82B89410();


void fn_82B894C8(int param_1,ulonglong param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  char cVar3;
  uint uVar2;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  puVar1 = (uint *)fn_82ACA920(param_1,param_4,param_4[3]);
  uVar13 = *param_4;
  uVar10 = 0;
  uVar14 = 0;
  if ((uVar13 & 0xe000000) != 0) {
    uVar8 = 0;
    do {
      uVar14 = uVar14 + 1;
      uVar10 = (uint)(1 << ((uVar13 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3)) | uVar10;
      uVar8 = uVar8 + 2;
    } while (uVar14 < (uVar13 >> 0x19 & 7));
  }
  uVar13 = 0;
  uVar14 = 0;
  *puVar1 = (uint)((((0x8da691691448U >> (uVar10 & 0x7f)) >> (uVar10 & 0x7f)) >> (uVar10 & 0x7f) &
                   0xffffffff) << 0x19) & 0xe000000 | *puVar1 & 0xf1ffffff;
  iVar6 = 0;
  if (uVar10 != 0) {
    uVar8 = 0;
    do {
      uVar4 = uVar10 & ~(uVar10 - 1);
      uVar10 = uVar10 - uVar4;
      uVar4 = 0x1f - LZCOUNT((int)uVar4);
      uVar2 = (uint)((uVar4 & 0xffffffff) << 1);
      uVar13 = uVar13 & ~(3 << (uVar8 & 0x3f)) | (int)uVar4 << (uVar8 & 0x3f);
      uVar14 = uVar14 & ~(3 << (uVar2 & 0x3e)) | iVar6 << (uVar2 & 0x3e);
      iVar6 = iVar6 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar10 != 0);
  }
  uVar8 = param_4[3];
  if (((*(uint *)(param_1 + 0x28) & 0x80000) != 0) &&
     ((ulonglong)*(uint *)(uVar8 + 0x1c) == (param_2 & 0xffffffff))) {
    for (puVar12 = *(uint **)(uVar8 + 4); puVar12 != (uint *)0x0; puVar12 = (uint *)puVar12[2]) {
      uVar2 = puVar12[4];
      if (((uVar2 != 0) && ((*(uint *)(uVar2 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar12 & 0xe000000) != 0)) goto LAB_82b89634;
    }
    uVar2 = 0;
LAB_82b89634:
    if ((uVar2 != 0) && (cVar3 = fn_82B89410(param_1,uVar2,param_3), cVar3 != '\0')) {
      if ((*puVar1 & 0xe000000) != 0) {
        uVar9 = 0;
        uVar10 = (ulonglong)(*puVar1 >> 0x19) & 7;
        do {
          piVar5 = (int *)(uVar2 + 0x2c);
          for (uVar7 = 0; uVar7 < (*(uint *)(uVar2 + 8) >> 0x13 & 7); uVar7 = uVar7 + 1) {
            if ((((uint *)*piVar5)[3] == uVar8) &&
               (((uVar13 >> (uVar9 & 0x3f) ^ *(uint *)*piVar5 >> 5) & 3) == 0)) {
              uVar13 = uVar13 & ~(3 << (uVar9 & 0x3f)) | uVar7 << (uVar9 & 0x3f);
              break;
            }
            piVar5 = piVar5 + 1;
          }
          uVar9 = uVar9 + 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar11 = (uint *)(puVar1[3] + 4);
      for (puVar12 = (uint *)*puVar11; puVar12 != puVar1; puVar12 = (uint *)puVar12[2]) {
        puVar11 = puVar12 + 2;
      }
      *puVar11 = puVar1[2];
      puVar1[2] = *(uint *)(uVar2 + 4);
      *(uint **)(uVar2 + 4) = puVar1;
      puVar1[3] = uVar2;
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  *puVar1 = (uVar13 & 0xff) << 5 | *puVar1 & 0xffffe01f;
  uVar2 = fn_82AD35E8(param_1,param_2,0,puVar1,puVar1);
  fn_82B83FE0(param_1,uVar2,param_3);
  puVar12 = (uint *)(param_4[3] + 4);
  uVar13 = (uint)((ulonglong)*param_4 & 0xffffffe0);
  *param_4 = ((((uVar14 >> (uVar13 >> 10 & 6) & 3) << 2 | uVar14 >> (uVar13 >> 8 & 6) & 3) << 2 |
              uVar14 >> (uVar13 >> 6 & 6) & 3) << 2 |
             uVar14 >> ((uint)(((ulonglong)*param_4 & 0xffffffe0) >> 4) & 6) & 3) << 5 |
             uVar13 & 0xffffe01f;
  for (puVar1 = (uint *)*puVar12; puVar1 != param_4; puVar1 = (uint *)puVar1[2]) {
    puVar12 = puVar1 + 2;
  }
  *puVar12 = param_4[2];
  param_4[2] = *(uint *)(uVar2 + 4);
  *(uint **)(uVar2 + 4) = param_4;
  param_4[3] = uVar2;
  if ((*(uint *)(uVar8 + 8) & 0x1e) != 0) {
    fn_82AD1B28(uVar2);
  }
  if ((*(byte *)(uVar8 + 8) & 1) != 0) {
    fn_82AE93B0(uVar2);
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 0x1000000;
  }
  return;
}

