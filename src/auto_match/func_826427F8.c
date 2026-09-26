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
extern int fn_82642670();
extern int fn_82642740();


void fn_826427F8(int param_1,undefined8 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  
  if (((*(uint *)(param_1 + 0x14) & 0x40000) == 0) &&
     ((param_4 == 0 || ((*(uint *)(param_4 + 0x14) & 0x20000) == 0)))) {
    uVar4 = (ulonglong)(*(uint *)(param_1 + 0x14) >> 5) & 0x1f;
    uVar6 = 0;
    puVar8 = (uint *)((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
    if (param_4 == 0) {
      puVar5 = (uint *)0x0;
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(param_4 + 0x14);
      puVar5 = (uint *)(param_4 + 0x20);
      uVar3 = uVar1 & 0x1f;
      uVar2 = (ulonglong)(uVar1 >> 5) & 0x1f;
      if ((uVar1 & 0x1f) != 0) {
        uVar3 = uVar3 - 1;
      }
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = *puVar5;
      for (; ((uVar6 & 0xffffffff) < uVar4 && ((byte)*puVar8 < (byte)uVar1)); puVar8 = puVar8 + 1) {
        fn_82642670(param_1,param_2,puVar8);
        uVar6 = uVar6 + 1;
      }
      if (((*puVar8 ^ *puVar5) & 0xf00) != 0) {
        fn_82642740(param_1,param_2,puVar8,puVar5);
      }
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    }
    if ((uVar6 & 0xffffffff) < uVar4) {
      lVar7 = uVar4 - uVar6;
      do {
        fn_82642670(param_1,param_2,puVar8);
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
    *param_3 = (uVar3 & 0xf) << 0x14 | *param_3 & 0xff0fffff;
  }
  return;
}

