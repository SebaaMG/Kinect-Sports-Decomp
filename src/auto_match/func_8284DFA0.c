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
extern int fn_82631738();
extern int fn_82631BF8();
extern int fn_82A938E8();
extern int fn_82A93980();


void fn_8284DFA0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar8 = 0;
    do {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar8);
      uVar2 = fn_82631BF8(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x1c)));
      iVar6 = iVar6 + 1;
      *puVar3 = uVar2;
      iVar8 = iVar8 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar8 = 0;
    do {
      fn_82631738(**(undefined4 **)(iVar8 + *(int *)(param_1 + 0xc)),
                        *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x10)));
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar8 = 0;
    do {
      puVar3 = (undefined4 *)(iVar8 + *(int *)(param_1 + 0x24));
      fn_82A938E8(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x24) + 8),
                        -(*(char *)(*(int *)(param_1 + 0x28) + iVar6) == '\x01') & 4,0,puVar3[1],
                        *(undefined4 *)*puVar3);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar6 < *(int *)(param_1 + 0x2c));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar8 = 0;
    do {
      puVar3 = (undefined4 *)(iVar8 + *(int *)(param_1 + 0x30));
      fn_82A93980(puVar3[2],0,puVar3[3],0,puVar3[1],*puVar3);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x34));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x40);
      iVar5 = 0;
      if (0 < *(int *)(iVar8 + iVar1 + 0x2c)) {
        iVar7 = 0;
        do {
          iVar1 = *(int *)(iVar8 + iVar1 + 0x20);
          if (iVar1 == 0) {
            iVar4 = iVar8 + *(int *)(param_1 + 0x40);
            iVar1 = *(int *)(iVar4 + 0x30);
            fn_82A93980(*(undefined4 *)(iVar4 + 0x24),0,6,0,*(undefined4 *)(iVar1 + iVar7 + 4)
                              ,*(undefined4 *)(iVar1 + iVar7));
          }
          else if (iVar1 == 1) {
            iVar4 = iVar8 + *(int *)(param_1 + 0x40);
            iVar1 = *(int *)(iVar4 + 0x30);
            fn_82A938E8(*(undefined4 *)(iVar4 + 0x24),0,0,*(undefined4 *)(iVar1 + iVar7 + 4),
                              *(undefined4 *)(iVar1 + iVar7));
          }
          iVar1 = *(int *)(param_1 + 0x40);
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 8;
        } while (iVar5 < *(int *)(iVar8 + iVar1 + 0x2c));
      }
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x40) + 0x34) = 0;
      iVar5 = iVar8 + *(int *)(param_1 + 0x40);
      iVar1 = *(int *)(iVar5 + 0x2c);
      iVar8 = iVar8 + 0x3c;
      *(int *)(iVar5 + 0x38) = 1 - (1 / iVar1) * iVar1;
    } while (iVar6 < *(int *)(param_1 + 0x3c));
  }
  return;
}

