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
extern float fRam83263160;
extern float fRam83263164;
extern float fRam83263178;


undefined8 fn_82F5CD68(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = 0;
  iVar1 = (int)fRam83263164;
  iVar4 = iVar1 + 1;
  if (uVar2 < 2) {
    if ((*(int *)(param_1 + 0x34) < iVar4) || (ABS(*(float *)(param_1 + 0x10)) <= fRam83263178)) {
      if (*(int *)(param_1 + 0x34) < iVar1) {
        return uVar3;
      }
      if (ABS(*(float *)(param_1 + 0x10)) <= fRam83263160) {
        return uVar3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x18);
  }
  else if (uVar2 == 2) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 3) || (*(int *)(param_1 + 0x34) < iVar4)) ||
       (*(float *)(param_1 + 0x10) <= fRam83263178)) {
      if (*(int *)(param_1 + 0x34) < iVar1) {
        return uVar3;
      }
      if (*(float *)(param_1 + 0x10) <= fRam83263160) {
        return uVar3;
      }
    }
  }
  else {
    if (3 < uVar2) {
      return uVar3;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 2) || (*(int *)(param_1 + 0x34) < iVar4)) ||
       (-fRam83263178 <= *(float *)(param_1 + 0x10))) {
      if (*(int *)(param_1 + 0x34) < iVar1) {
        return uVar3;
      }
      if (-fRam83263160 <= *(float *)(param_1 + 0x10)) {
        return uVar3;
      }
    }
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return 1;
}

