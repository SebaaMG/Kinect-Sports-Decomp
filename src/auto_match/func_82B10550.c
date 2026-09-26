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


int fn_82B10550(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  
  uVar8 = 0;
  piVar9 = (int *)(param_4 + 0x2c);
  do {
    uVar10 = *(uint *)(param_4 + 8) >> 0x13 & 7;
    if (uVar10 <= uVar8) {
      return param_3;
    }
    puVar1 = (uint *)*piVar9;
    uVar2 = puVar1[3];
    piVar7 = (int *)(param_4 + 0x2c);
    for (uVar6 = 0; uVar6 < uVar10; uVar6 = uVar6 + 1) {
      puVar4 = (uint *)*piVar7;
      if (puVar1 == puVar4) goto LAB_82b105d0;
      if (puVar4[3] == uVar2) goto LAB_82b105c8;
      piVar7 = piVar7 + 1;
    }
    puVar4 = (uint *)0x0;
LAB_82b105c8:
    if (puVar1 == puVar4) {
LAB_82b105d0:
      for (iVar5 = *param_2; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if (*(uint *)(iVar5 + 0xc) == uVar2) goto LAB_82b10684;
      }
      piVar7 = param_2 + param_3 + 10;
      for (uVar10 = *(uint *)(uVar2 + 8) >> 1 & 0xf; uVar10 != 0;
          uVar10 = uVar10 - (uVar10 & ~(uVar10 - 1))) {
        puVar4 = (uint *)fn_82AD17B0(param_1,uVar2);
        uVar3 = (uint)((0x1fU - LZCOUNT(uVar10 & ~(uVar10 - 1)) & 0xffffffff) << 5);
        uVar6 = *puVar4;
        *puVar4 = uVar3 & 0x360 | 0x2001c80 | uVar6 & 0xf3fffc9f;
        *puVar4 = uVar3 & 0x360 | 0x2001c80 | uVar6 & 0xf3fffc80 | *puVar1 & 0x1f;
        iVar5 = fn_82AD1978(param_2,puVar4);
        piVar7 = piVar7 + 1;
        *piVar7 = iVar5;
        param_3 = param_3 + 1;
      }
    }
LAB_82b10684:
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 1;
  } while( true );
}

