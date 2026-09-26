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


ulonglong fn_82F8A9B0(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
     (((iVar2 = *(int *)(iVar1 + 4), iVar2 != 0x2a &&
       (((iVar2 != 0x45 && (iVar2 != 0x49)) && (iVar2 != 0x5b)))) &&
      (((iVar2 != 0x67 && (iVar2 != 0x71)) && (iVar2 != 0x29a)))))) {
    uVar3 = 0xfffffffffffffffe;
  }
  else {
    if (*(int *)(iVar1 + 8) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x44) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x40) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar3 = -(ulonglong)(iVar2 == 0x71) & 0xfffffffffffffffd;
  }
  return uVar3;
}

