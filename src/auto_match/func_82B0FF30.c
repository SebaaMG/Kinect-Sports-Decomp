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


void fn_82B0FF30(undefined8 param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  puVar11 = (uint *)(param_2 + 4);
  uVar5 = *(uint *)(param_3 + 8) >> 0x13 & 7;
  do {
    puVar1 = (uint *)*puVar11;
    if (puVar1 == (uint *)0x0) {
      return;
    }
    if (puVar1[4] != 0) {
      uVar7 = *puVar1 >> 0x19;
      uVar8 = (ulonglong)uVar7 & 7;
      uVar12 = *puVar1 >> 5 & 0xff;
      if ((uVar7 & 7) != 0) {
        uVar7 = 0;
        do {
          uVar6 = 0;
          puVar2 = *(uint **)(((uVar12 >> (uVar7 & 0x3f) & 3) + 0xb) * 4 + param_2);
          if (uVar5 != 0) {
            piVar9 = (int *)(param_3 + 0x2c);
            uVar6 = 0;
            do {
              if ((puVar2[3] == ((uint *)*piVar9)[3]) &&
                 (((*(uint *)*piVar9 ^ *puVar2) & 0x60) == 0)) break;
              uVar6 = uVar6 + 1;
              piVar9 = piVar9 + 1;
            } while (uVar6 < uVar5);
          }
          uVar3 = uVar7 & 0x3f;
          uVar4 = uVar7 & 0x3f;
          uVar7 = uVar7 + 2;
          uVar12 = uVar12 & ~(3 << uVar4) | uVar6 << uVar3;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (uint *)(puVar1[3] + 4);
      for (puVar2 = (uint *)*puVar10; puVar2 != puVar1; puVar2 = (uint *)puVar2[2]) {
        puVar10 = puVar2 + 2;
      }
      *puVar10 = puVar1[2];
      puVar1[2] = *(uint *)(param_3 + 4);
      *(uint **)(param_3 + 4) = puVar1;
      puVar1[3] = param_3;
      *puVar1 = (uVar12 & 0xff) << 5 | *puVar1 & 0xffffe01f;
    }
    if ((uint *)*puVar11 == puVar1) {
      puVar11 = puVar1 + 2;
    }
  } while( true );
}

