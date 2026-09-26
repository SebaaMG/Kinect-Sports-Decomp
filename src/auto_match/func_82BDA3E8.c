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
extern int fn_82A1F2F8();


undefined4 fn_82BDA3E8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0xc);
    do {
      iVar1 = (**(code **)(*(int *)*puVar3 + 0x24))();
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        iVar1 = fn_82A1F2F8();
        *(int *)(param_1 + 0x38) = (*(int *)(param_1 + 0x3c) - iVar1) + *(int *)(param_1 + 0x38);
      }
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 200;
  }
  uVar2 = fn_82A1F2F8();
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  return *(undefined4 *)(param_1 + 0x34);
}

