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
extern int fn_82ABE5F8();
extern int fn_82AD17B0();
extern int fn_82B894C8();


uint fn_82B8A4C0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  puVar9 = (uint *)(param_4 + 4);
  uVar11 = 0;
  for (puVar3 = *(uint **)(param_4 + 4); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
    if (puVar3[4] != 0) {
      uVar6 = *puVar3 >> 0x19 & 7;
      if (uVar6 != 0) {
        uVar4 = 0;
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar8 = 0;
          do {
            uVar10 = uVar10 + 1;
            uVar4 = (uint)(1 << ((*puVar3 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3)) | uVar4;
            uVar8 = uVar8 + 2;
          } while (uVar10 < uVar6);
        }
        uVar11 = uVar4 | uVar11;
      }
    }
  }
  puVar3 = (uint *)fn_82AD17B0(param_1,param_4);
  uVar6 = 0;
  uVar10 = 0;
  iVar5 = 0;
  *puVar3 = (uint)((((0x8da691691448U >> (uVar11 & 0x7f)) >> (uVar11 & 0x7f)) >> (uVar11 & 0x7f) &
                   0xffffffff) << 0x19) & 0xe000000 | *puVar3 & 0xf1ffffff;
  if (uVar11 != 0) {
    uVar8 = 0;
    do {
      uVar4 = uVar11 & ~(uVar11 - 1);
      uVar11 = uVar11 - uVar4;
      uVar4 = 0x1f - LZCOUNT((int)uVar4);
      uVar2 = (uint)((uVar4 & 0xffffffff) << 1);
      uVar6 = uVar6 & ~(3 << (uVar8 & 0x3f)) | (int)uVar4 << (uVar8 & 0x3f);
      uVar10 = uVar10 & ~(3 << (uVar2 & 0x3e)) | iVar5 << (uVar2 & 0x3e);
      iVar5 = iVar5 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar11 != 0);
  }
  *puVar3 = (uVar6 & 0xff) << 5 | *puVar3 & 0xffffe01f;
  fn_82B894C8(param_1,param_2,param_3,puVar3);
  uVar6 = puVar3[3];
  puVar12 = (uint *)(uVar6 + 4);
  puVar7 = puVar12;
  for (puVar1 = *(uint **)(uVar6 + 4); puVar1 != puVar3; puVar1 = (uint *)puVar1[2]) {
    puVar7 = puVar1 + 2;
  }
  *puVar7 = puVar1[2];
  fn_82ABE5F8(param_1,puVar3,0x14,0x1a);
  while( true ) {
    puVar3 = (uint *)*puVar9;
    if (puVar3 == (uint *)0x0) break;
    if (puVar3[4] != 0) {
      uVar8 = *puVar3;
      if (((uVar8 & 0xe000000) != 0) && (puVar3[4] != uVar6)) {
        puVar7 = (uint *)(puVar3[3] + 4);
        *puVar3 = ((((uVar10 >> (uVar8 >> 10 & 6) & 3) << 2 | uVar10 >> (uVar8 >> 8 & 6) & 3) << 2 |
                   uVar10 >> (uVar8 >> 6 & 6) & 3) << 2 | uVar10 >> (uVar8 >> 4 & 6) & 3) << 5 |
                  uVar8 & 0xffffe01f;
        for (puVar1 = *(uint **)(puVar3[3] + 4); puVar1 != puVar3; puVar1 = (uint *)puVar1[2]) {
          puVar7 = puVar1 + 2;
        }
        *puVar7 = puVar3[2];
        puVar3[2] = *puVar12;
        *puVar12 = (uint)puVar3;
        puVar3[3] = uVar6;
      }
    }
    if ((uint *)*puVar9 == puVar3) {
      puVar9 = puVar3 + 2;
    }
  }
  return uVar6;
}

