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
extern int fn_82AB71F0();


undefined8
fn_82B6C390(int param_1,undefined8 param_2,uint param_3,ulonglong param_4,uint *param_5,
             uint *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  iVar2 = 0;
  if (param_3 == 1) {
    iVar2 = fn_82AB71F0(param_2,0x28,param_4);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar5 = *(uint *)(param_1 + 0x4a4);
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9a24,0xffffffff820d9998,0x23b);
    }
    uVar5 = 0x20;
    uVar4 = 0x20 - *(int *)(param_1 + 0x4a4);
  }
  if (uVar4 < uVar5) {
    puVar6 = (uint *)(uVar4 * 0x24 + param_1 + 0x20);
    do {
      if (puVar6[-2] != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ad0,0xffffffff820d9998,0x243);
      }
      if ((puVar6[-1] == 1) && (uVar7 = 0, *puVar6 != 0)) {
        puVar8 = puVar6 + 4;
        do {
          if (puVar8[-3] == param_3) {
            if (param_3 == 1) {
              iVar3 = fn_82AB71F0(param_2,0x28,*puVar8);
              bVar1 = iVar2 == iVar3;
            }
            else {
              if (param_3 != 3) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9af4,0xffffffff820d9998,0x25e);
              }
              bVar1 = (ulonglong)*puVar8 == (param_4 & 0xffffffff);
            }
            if (bVar1) {
              *param_5 = uVar4;
              *param_6 = uVar7;
              return 1;
            }
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 < *puVar6);
      }
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 9;
    } while (uVar4 < uVar5);
  }
  return 0;
}

