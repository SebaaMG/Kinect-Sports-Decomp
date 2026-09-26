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
extern int fn_82AB15D0();
extern int fn_82F68CC0();


undefined8 fn_82AB8340(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  puVar1 = (undefined4 *)0x0;
  uVar5 = 0;
  uVar8 = 0;
  uVar6 = 0;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6f98,0xffffffff820d6fa0,0x191);
  }
  if (param_2 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7018,0xffffffff820d6fa0,0x192);
  }
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar5 = 0x19;
  }
  else {
    puVar2 = param_1 + 4;
    lVar9 = 0x20;
    puVar3 = puVar2;
    do {
      if ((*puVar3 & 0xf00000) != 0) {
        uVar8 = uVar8 + 1;
      }
      puVar3 = puVar3 + 9;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar4 = param_1 + 0x124;
    lVar9 = 0x80;
    puVar3 = puVar4;
    do {
      if ((*puVar3 & 0x800000) != 0) {
        uVar6 = uVar6 + 1;
      }
      puVar3 = puVar3 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if (((uVar8 & 0xffffffff) != 0) || ((uVar6 & 0xffffffff) != 0)) {
      puVar1 = (undefined4 *)(*(code *)param_1[1])(*param_1,(uVar8 * 3 + uVar6) * 0xc + 0x10);
      if (puVar1 == (undefined4 *)0x0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7010,0xffffffff820d6fa0,0x1bb);
        uVar5 = 0x10;
      }
      else {
        *puVar1 = *param_1;
        puVar1[1] = param_1[2];
        puVar1[2] = (int)uVar8;
        puVar1[3] = (int)uVar6;
        if ((uVar8 & 0xffffffff) != 0) {
          puVar7 = puVar1 + 4;
          puVar3 = puVar2;
          do {
            if ((*puVar3 & 0xf00000) != 0) {
              fn_82F68CC0(puVar7,puVar3,0x24);
              puVar7 = puVar7 + 9;
              uVar8 = uVar8 - 1;
            }
            puVar3 = puVar3 + 9;
          } while ((uVar8 & 0xffffffff) != 0);
        }
        if ((uVar6 & 0xffffffff) != 0) {
          puVar3 = puVar1 + puVar1[2] * 9 + 4;
          if ((uVar8 & 0xffffffff) != 0) {
            do {
              if ((*puVar2 & 0xf00000) != 0) {
                *puVar3 = *puVar4;
                puVar3[1] = puVar4[1];
                puVar3[2] = puVar4[2];
                puVar3 = puVar3 + 3;
              }
              puVar2 = puVar2 + 9;
              puVar4 = puVar4 + 3;
            } while( true );
          }
        }
      }
    }
    *param_2 = puVar1;
  }
  return uVar5;
}

