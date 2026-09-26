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
extern unsigned int *auStack_30;
extern int fn_8304DE60();
extern unsigned int uStack_28;


undefined8 fn_8304DF58(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x3c) = iVar1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar2 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
  }
  if (*(uint *)(param_1 + 0x44) < uVar2) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    *(uint *)(param_1 + 0x3c) = (iVar1 - *(uint *)(param_1 + 0x44)) + uVar2;
    if (*(short *)(param_1 + 0x1c) == 1) {
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      iVar1 = fn_8304DE60(param_1,*(undefined4 *)(param_1 + 0x4c));
      if (iVar1 != 1) {
        return 2;
      }
      if (1 < *(ushort *)(param_1 + 0x1c)) {
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) - 1;
      }
      *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + '\x01';
      if (*(short *)(param_1 + 0x1c) == 1) {
        (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_30);
        uStack_28 = 0;
        (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_30);
      }
    }
  }
  return 1;
}

