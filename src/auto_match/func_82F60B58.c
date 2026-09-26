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


undefined8 fn_82F60B58(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_3 == (int *)0x0) || (param_2 < *(uint *)(param_1 + 0x58))) ||
     (*(uint *)(param_1 + 0x5c) < param_2)) {
    return 0xffffffff82240403;
  }
  iVar3 = *(uint *)(param_1 + 0x5c) - param_2;
  uVar2 = 0;
  if (param_3 == (int *)0x0) {
    return 0xffffffff82240403;
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (iVar3 < 0) {
      return uVar2;
    }
    if (*(int *)(param_1 + 0x20) <= iVar3) {
      return uVar2;
    }
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar4 = *(int *)(param_1 + 0x1c) - iVar3;
    trapWord(6,(ulonglong)uVar1,0);
    *param_3 = (uVar4 - (uVar4 / uVar1) * uVar1) * *(int *)(param_1 + 0x2c) +
               *(int *)(param_1 + 0x54);
    return uVar2;
  }
  return 0xffffffff82240406;
}

