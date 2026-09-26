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


void fn_82AEA520(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  
  piVar11 = (int *)(param_2 + 0x2c);
  for (uVar10 = 0; uVar10 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar10 = uVar10 + 1) {
    uVar1 = *(uint *)(*piVar11 + 0xc);
    puVar12 = (uint *)(uVar1 + 4);
    while( true ) {
      puVar2 = (uint *)*puVar12;
      if (puVar2 == (uint *)0x0) break;
      uVar5 = puVar2[4];
      if (uVar5 != 0) {
        if ((((*puVar2 & 0xe000000) != 0) && (uVar5 != param_2)) &&
           ((*(byte *)(uVar5 + 0x10) & 1) != 0)) {
          cVar4 = fn_82ACB0F8(param_2);
          if (cVar4 != '\0') {
            uVar5 = 0;
            piVar7 = (int *)(param_2 + 0x2c);
            for (uVar8 = 0; uVar8 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar8 = uVar8 + 1) {
              if (((uint *)*piVar7)[3] == uVar1) {
                uVar6 = *(uint *)*piVar7 >> 4 & 6;
                uVar5 = uVar5 & ~(3 << uVar6) | uVar8 << uVar6;
              }
              piVar7 = piVar7 + 1;
            }
            if ((*puVar2 >> 0x1e & 1) != 0) {
              for (puVar3 = *(uint **)(param_2 + 4);
                  (puVar3 != (uint *)0x0 && ((puVar3[4] == 0 || ((*puVar3 & 0xe000000) == 0))));
                  puVar3 = (uint *)puVar3[2]) {
              }
              uVar8 = *puVar2;
              *puVar2 = uVar8 & 0xbfffffff;
              *puVar2 = uVar8 & 0xbe001fff | *puVar3 & 0x1ffe000 | 0x40000000;
            }
            puVar9 = (uint *)(puVar2[3] + 4);
            for (puVar3 = (uint *)*puVar9; puVar3 != puVar2; puVar3 = (uint *)puVar3[2]) {
              puVar9 = puVar3 + 2;
            }
            *puVar9 = puVar2[2];
            puVar2[2] = *(uint *)(param_2 + 4);
            *(uint **)(param_2 + 4) = puVar2;
            uVar8 = *puVar2 >> 5;
            uVar6 = uVar8 & 0xff;
            puVar2[3] = param_2;
            *puVar2 = ((((uVar5 >> (uVar6 >> 5 & 6) & 3) << 2 | uVar5 >> (uVar6 >> 3 & 6) & 3) << 2
                       | uVar5 >> (uVar6 >> 1 & 6) & 3) << 2 | uVar5 >> ((uVar8 & 3) << 1) & 3) << 5
                      | *puVar2 & 0xffffe01e;
          }
        }
      }
      if ((uint *)*puVar12 == puVar2) {
        puVar12 = puVar2 + 2;
      }
    }
    piVar11 = piVar11 + 1;
  }
  return;
}

