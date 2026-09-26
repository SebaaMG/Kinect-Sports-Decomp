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
extern int fn_82BEB230();


int fn_82BEF458(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((*(int *)(param_1 + 0x34) == 2) || (iVar1 = *(int *)(param_1 + 0x2c), iVar1 == 0)) ||
      (*(int *)(param_1 + 0x3c) == 0)) || (*(short *)(*(int *)(param_1 + 0x3c) + 0xd8) == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  iVar3 = *(int *)(iVar1 + 0x4c);
  if (iVar2 == 2) {
    if ((1 < *(uint *)(param_1 + 0x58)) && (*(uint *)(iVar1 + 0x50) < *(uint *)(iVar3 + 0x1c))) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
    if (((iVar2 != 0x11) && (iVar2 != 0x12)) && (iVar2 != 0x13)) goto LAB_82bef544;
  }
  if (((((1 < *(uint *)(param_1 + 0x58)) || (*(int *)(param_1 + 0x34) == 0x10)) && (iVar3 != 0)) &&
      ((*(uint *)(iVar3 + 0x18) != 0 && (*(uint *)(iVar3 + 0x18) < *(uint *)(iVar3 + 0x20))))) &&
     (fn_82BEB230(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0x14)),
     *(int *)(param_1 + 0x10) == 2)) {
    iVar4 = 1;
  }
LAB_82bef544:
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x14;
  }
  return iVar4;
}

