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
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B0FF30();
extern int fn_82B84350();


uint fn_82B103B8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  
  uVar3 = fn_82B84350(param_1,*(undefined4 *)(param_2 + 0x1c),0,
                            *(uint *)(param_2 + 8) >> 0xe & 7);
  uVar14 = uVar3 & 0xfffffffe;
  puVar8 = (uint *)((param_2 & 0xfffffffe) + 0x24);
  iVar12 = 0;
  uVar10 = 0;
  *(uint *)(uVar14 + 0x24) = *puVar8;
  *(uint *)(*puVar8 & 0xfffffffe) = uVar14;
  *(uint *)(uVar14 + 0x28) = param_2 & 0xfffffffe;
  *puVar8 = uVar14 + 0x28;
  piVar11 = (int *)(param_2 + 0x2c);
  do {
    uVar14 = *(uint *)(param_2 + 8) >> 0x13 & 7;
    if (uVar14 <= uVar10) {
      fn_82B0FF30(param_1,param_2,uVar3);
      return uVar3;
    }
    puVar8 = (uint *)*piVar11;
    uVar1 = puVar8[3];
    piVar7 = (int *)(param_2 + 0x2c);
    for (uVar6 = 0; uVar6 < uVar14; uVar6 = uVar6 + 1) {
      puVar4 = (uint *)*piVar7;
      if (puVar8 == puVar4) goto LAB_82b10484;
      if (uVar1 == puVar4[3]) goto LAB_82b1047c;
      piVar7 = piVar7 + 1;
    }
    puVar4 = (uint *)0x0;
LAB_82b1047c:
    if (puVar8 == puVar4) {
LAB_82b10484:
      uVar6 = 0;
      uVar14 = *(uint *)(uVar1 + 8) >> 1 & 0xf;
      if ((*(uint *)(uVar1 + 8) & 0x1c000) != 0) {
        puVar13 = (undefined4 *)((iVar12 + 10) * 4 + uVar3);
        do {
          uVar9 = uVar14 & ~(uVar14 - 1);
          uVar14 = uVar14 - uVar9;
          puVar4 = (uint *)fn_82AD17B0(param_1,uVar1);
          uVar2 = (uint)((-LZCOUNT(uVar9) - 1U & 0xffffffff) << 5);
          uVar9 = *puVar4;
          *puVar4 = uVar2 & 0x360 | 0x2001c80 | uVar9 & 0xf3fffc9f;
          *puVar4 = uVar2 & 0x360 | 0x2001c80 | uVar9 & 0xf3fffc80 | *puVar8 & 0x1f;
          uVar5 = fn_82AD1978(uVar3,puVar4);
          puVar13 = puVar13 + 1;
          *puVar13 = uVar5;
          uVar6 = uVar6 + 1;
          iVar12 = iVar12 + 1;
        } while (uVar6 < (*(uint *)(uVar1 + 8) >> 0xe & 7));
      }
    }
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 1;
  } while( true );
}

