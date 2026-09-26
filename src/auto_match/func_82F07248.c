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
extern unsigned int *auStack_40;
extern int fn_82ED41C8();
extern int fn_82F06DA0();
extern int fn_82F65350();


void fn_82F07248(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint auStack_40 [16];
  
  *(undefined4 *)(param_1 + 0x97c) = 0;
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0x980) = 0;
  if ((*(char *)(param_1 + 0x7b30) == '\0') || (bVar5 = true, *(int *)(param_1 + 0xaf0) != 0)) {
    bVar5 = false;
  }
  if (((*(byte *)(param_1 + 0x7b31) == 0) || (*(int *)(param_1 + 0xaf0) != 1)) ||
     (bVar1 = true, *(byte *)(param_1 + 0x7b32) < *(byte *)(param_1 + 0x7b31))) {
    bVar1 = false;
  }
  if (((bVar5) || (bVar1)) &&
     (uVar2 = fn_82ED41C8(*(undefined4 *)(param_1 + 0x7b40),auStack_40),
     (uVar2 & 0xffffffff) != 0)) {
    *(undefined4 *)(param_1 + 0x97c) = 1;
    *(undefined4 *)(param_1 + 0x984) = 0;
    if ((uVar2 & 0xffffffff) != 1) {
      iVar4 = 0;
      *(char *)(param_1 + 0x980) = (char)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        do {
          iVar6 = *(int *)(param_1 + 0x588);
          if (0x1f < iVar6) {
            iVar6 = 0x1f;
          }
          *(char *)(param_1 + 0x981 + iVar4) = (char)iVar6;
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      goto LAB_82f073e8;
    }
  }
  else {
    if (((*(char *)(param_1 + 0x7b30) != '\0') && (*(int *)(param_1 + 0x7b2c) == 0)) ||
       (*(int *)(*(int *)(param_1 + 0x7b40) + 0x3c) == 0)) goto LAB_82f073e8;
    if ((*(int *)(param_1 + 0xaf0) == 1) || (*(int *)(param_1 + 0xaf0) == 2)) {
      uVar3 = fn_82F06DA0(param_1);
    }
    if (((*(int *)(param_1 + 0x978) == 2) || (*(int *)(param_1 + 0xaf0) == 0)) ||
       (*(int *)(param_1 + 0xaf0) == 4)) {
      uVar3 = *(int *)(param_1 + 0x588) + 7;
      *(undefined4 *)(param_1 + 0x984) = 0xf;
      uVar3 = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    }
    if ((*(int *)(param_1 + 0x984) != 0) && (*(int *)(param_1 + 0x7914) < 2)) {
      *(undefined4 *)(param_1 + 0x97c) = 1;
      goto LAB_82f073e8;
    }
    if (*(int *)(param_1 + 0x7914) != 2) {
      if (*(int *)(param_1 + 0x7914) != 3) {
        return;
      }
      *(undefined4 *)(param_1 + 0x97c) = 1;
      *(undefined4 *)(param_1 + 0x984) = 0;
      *(undefined1 *)(param_1 + 0x980) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x97c) = 1;
    auStack_40[0] = 4;
    *(undefined4 *)(param_1 + 0x984) = 0;
  }
  *(undefined1 *)(param_1 + 0x980) = 1;
  uVar3 = auStack_40[0];
LAB_82f073e8:
  if (*(char *)(param_1 + 0x980) == '\x01') {
    if (*(int *)(param_1 + 0x1a74) == 0) {
      iVar4 = *(int *)(param_1 + 0x588) + uVar3;
      if (0x1f < iVar4) {
        iVar4 = 0x1f;
      }
      *(char *)(param_1 + 0x981) = (char)iVar4;
    }
    else {
      if ((*(uint *)(param_1 + 0x1dd0) & 0xf) == 0) {
        iVar4 = fn_82F65350();
        uVar3 = iVar4 + *(int *)(param_1 + 0x588) & 0x1f;
        *(char *)(param_1 + 0x981) = (char)uVar3;
        if (uVar3 == 0) {
          *(undefined1 *)(param_1 + 0x981) = 1;
        }
      }
      if (*(byte *)(param_1 + 0x981) < 5) {
        *(undefined1 *)(param_1 + 0x981) = 4;
      }
    }
  }
  return;
}

