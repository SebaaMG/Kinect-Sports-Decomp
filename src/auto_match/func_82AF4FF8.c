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


ulonglong fn_82AF4FF8(undefined8 param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    uVar2 = puVar1[4];
    if (((uVar2 != 0) && ((*puVar1 & 0xe000000) != 0)) && ((*(uint *)(uVar2 + 8) & 0x3f80) == 0x80))
    {
      for (puVar3 = *(uint **)(param_3 + 4); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
        uVar4 = puVar3[4];
        if (((uVar4 != 0) && ((*puVar3 & 0xe000000) != 0)) &&
           ((*(uint *)(uVar4 + 8) & 0x3f80) == 0x80)) {
          if (uVar2 == uVar4) {
            uVar9 = uVar9 | 4;
          }
          else {
            uVar5 = *(uint *)(*(int *)(uVar2 + 0x2c) + 0xc);
            uVar6 = *(uint *)(*(int *)(uVar4 + 0x2c) + 0xc);
            uVar7 = *(uint *)(*(int *)(uVar2 + 0x30) + 0xc);
            uVar8 = *(uint *)(*(int *)(uVar4 + 0x30) + 0xc);
            if ((((uVar5 == param_2) && (uVar6 == param_3)) && (uVar7 == uVar8)) ||
               (((uVar7 == param_2 && (uVar8 == param_3)) && (uVar5 == uVar6)))) {
              uVar9 = uVar9 | 2;
            }
            else if (uVar5 == uVar4) {
              uVar9 = uVar9 | 1;
            }
          }
        }
      }
    }
  }
  return uVar9;
}

