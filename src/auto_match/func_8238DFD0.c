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
extern unsigned int lbl_821CA460;


undefined8 fn_8238DFD0(int param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0xa00) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      uVar3 = 6;
      fVar2 = lbl_821CA460 / *(float *)(iVar1 + 0x9a0);
      *(float *)(iVar1 + 0x9a8) = lbl_821CA460;
      *(float *)(iVar1 + 0x9a4) = fVar2;
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    else {
      if ((*(int *)(param_1 + 0x1c) == 0) && (iVar4 = fn_82372ED8(iVar1), iVar4 != 0)) {
        uVar5 = 1;
        uVar3 = 8;
      }
      else {
        if ((*(int *)(param_1 + 0x18) == 0) &&
           ((iVar4 = fn_82372DE8(iVar1,0), iVar4 != 0 ||
            (iVar4 = fn_82372DE8(iVar1,1), iVar4 != 0)))) {
          *(undefined4 *)(param_1 + 0x18) = 1;
          return 9;
        }
        if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(iVar1 + 0x348) != 0)) {
          *(undefined4 *)(param_1 + 0x14) = 1;
          return 7;
        }
        if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(iVar1 + 0x218) == 0)) {
          *(undefined4 *)(param_1 + 0x20) = 1;
          return 0xb;
        }
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        uVar3 = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 1;
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xa00) = 0;
    fVar2 = lbl_821CA460;
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = 5;
    *(float *)(iVar1 + 0x9a8) = lbl_821CA460;
    *(float *)(iVar1 + 0x9a4) = fVar2 / *(float *)(iVar1 + 0x9a0);
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return uVar3;
}

