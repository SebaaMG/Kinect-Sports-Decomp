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
extern int fn_82B8BCB0();


undefined8 fn_82AF5D98(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  if ((*(uint *)(param_2 + 8) & 0x1c000) != 0x4000) {
    puVar10 = *(uint **)(param_2 + 4);
    for (puVar7 = puVar10; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[2]) {
      uVar9 = puVar7[4];
      if (((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar7 & 0xe000000) != 0)) goto LAB_82af5e08;
    }
    uVar9 = 0;
LAB_82af5e08:
    if (uVar9 != 0) {
      for (; puVar10 != (uint *)0x0; puVar10 = (uint *)puVar10[2]) {
        uVar1 = puVar10[4];
        if (uVar1 != 0) {
          uVar3 = *puVar10 >> 0x19 & 7;
          if (((uVar3 != 0) && (uVar1 != uVar9)) && (uVar3 != 1)) {
            uVar5 = 0;
            uVar8 = 0;
            if (uVar3 != 0) {
              uVar6 = 0;
              do {
                uVar8 = uVar8 + 1;
                uVar2 = uVar6 & 0x3f;
                uVar6 = uVar6 + 2;
                uVar5 = 1 << ((*puVar10 >> 5 & 0xff) >> uVar2 & 3) | uVar5;
              } while (uVar8 < uVar3);
            }
            if (((1 << (param_3 & 0x3f) & uVar5) != 0) &&
               (cVar4 = fn_82B8BCB0(param_1,uVar9,uVar1,1), cVar4 == '\0')) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

