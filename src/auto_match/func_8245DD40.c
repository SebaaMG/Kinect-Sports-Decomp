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
extern int fn_82522ED8();
extern int fn_8262FEC8();
extern int fn_82A1E658();
extern int fn_82E230A8();


undefined8 fn_8245DD40(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  
  piVar4 = (int *)(param_1 + 0x84);
  piVar6 = (int *)(param_1 + 0x3c);
  lVar5 = 3;
  do {
    if (piVar6[-3] != 0) {
      fn_8262FEC8();
    }
    if (*piVar6 != 0) {
      fn_82522ED8();
      *piVar6 = 0;
    }
    if (*piVar4 != -1) {
      fn_82A1E658();
      *piVar4 = -1;
    }
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 7;
  } while (lVar5 != 0);
  if (*(int *)(param_1 + 0x68) != -1) {
    fn_82A1E658();
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_82522ED8();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_82522ED8();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82522ED8();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = fn_82E230A8(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  lVar5 = 3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  do {
    puVar3[4] = 0;
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    puVar2[9] = 0;
    puVar2 = puVar2 + 7;
    *puVar2 = 0xffffffff;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return uVar1;
}

