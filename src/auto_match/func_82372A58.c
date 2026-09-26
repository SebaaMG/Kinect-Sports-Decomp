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
extern int fn_82372DE8();
extern int fn_82372ED8();
extern int fn_82372F88();


longlong fn_82372A58(int param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    lVar3 = fn_82372F88();
    iVar4 = (int)(lVar3 + 1) - ((int)lVar3 + (uint)(lVar3 + 1 == 0));
  }
  else {
    iVar4 = *(int *)(param_1 + 0x658);
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((iVar1 == 0) || (bVar2 = 1, *(int *)(iVar1 + 0x40) != 1)) {
    bVar2 = 0;
  }
  if (*(int *)(param_1 + 0xa04) == 0) {
    if (*(int *)(param_1 + 0xa00) == 0) {
      if (iVar4 == 0) {
        if ((*(int *)(param_1 + 0x9e0) == 0) && ((iVar1 == 0 || (*(int *)(iVar1 + 0x40) != 1)))) {
          lVar3 = 6;
          *(undefined4 *)(param_1 + 0x9e0) = 1;
        }
        else if ((*(int *)(param_1 + 0x9f0) == 0) && (*(int *)(param_1 + 0x218) == 0)) {
          lVar3 = 0xb;
          *(undefined4 *)(param_1 + 0x9f0) = 1;
        }
        else if ((*(int *)(param_1 + 0x9e4) == 0) && (*(int *)(param_1 + 0x348) != 0)) {
          lVar3 = 7;
          *(undefined4 *)(param_1 + 0x9e4) = 1;
        }
        else if ((*(int *)(param_1 + 0x9ec) == 0) && (iVar4 = fn_82372ED8(param_1), iVar4 != 0)) {
          lVar3 = 8;
          *(undefined4 *)(param_1 + 0x9ec) = 1;
        }
        else if ((*(int *)(param_1 + 0x9e8) == 0) &&
                ((iVar4 = fn_82372DE8(param_1,0), iVar4 != 0 ||
                 (iVar4 = fn_82372DE8(param_1,1), iVar4 != 0)))) {
          lVar3 = 9;
          *(undefined4 *)(param_1 + 0x9e8) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x9e0) = 0;
          lVar3 = 2;
          *(undefined4 *)(param_1 + 0x9e4) = 0;
          *(undefined4 *)(param_1 + 0x9e8) = 0;
          *(undefined4 *)(param_1 + 0x9ec) = 0;
          *(undefined4 *)(param_1 + 0x9f0) = 0;
        }
      }
      else {
        lVar3 = (-(ulonglong)bVar2 << 0x20 | -(ulonglong)bVar2 & 0xfffffffd) + 0xf;
      }
    }
    else {
      lVar3 = 5;
      *(undefined4 *)(param_1 + 0xa00) = 0;
    }
  }
  else {
    lVar3 = 10;
    *(undefined4 *)(param_1 + 0xa04) = 0;
  }
  return lVar3;
}

