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
extern int fn_82AD18C0();
extern int fn_82AD1978();


int fn_82AF6BC8(undefined8 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar6 = 0;
  if ((*(uint *)(param_2 + 8) & 0x380000) != 0) {
    piVar7 = (int *)(param_2 + 0x2c);
    do {
      uVar5 = 0;
      uVar1 = *(uint *)(*piVar7 + 0xc);
      if (param_4 != 0) {
        piVar4 = (int *)(param_3 + 0x2c);
        iVar9 = param_4;
        do {
          if (((uint *)*piVar4)[3] == uVar1) {
            uVar5 = 1 << (*(uint *)*piVar4 >> 5 & 3) | uVar5;
          }
          piVar4 = piVar4 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      puVar8 = (undefined4 *)((param_4 + 10) * 4 + param_3);
      for (uVar5 = (*(uint *)(uVar1 + 8) >> 1 & 0xf) - uVar5; uVar5 != 0;
          uVar5 = uVar5 - (uVar5 & ~(uVar5 - 1))) {
        uVar2 = fn_82AD18C0(param_1,uVar1,0x1f - LZCOUNT(uVar5 & ~(uVar5 - 1)));
        uVar3 = fn_82AD1978(param_3,uVar2);
        puVar8 = puVar8 + 1;
        *puVar8 = uVar3;
        param_4 = param_4 + 1;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < (*(uint *)(param_2 + 8) >> 0x13 & 7));
  }
  return param_4;
}

