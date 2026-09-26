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


undefined8 fn_830491F8(int param_1,int *param_2,undefined1 *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  uVar3 = *param_2 + *(int *)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x3c) = uVar3;
  if (sVar1 == 1) {
    uVar2 = *(uint *)(param_1 + 0x34);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x24);
  }
  if (uVar3 < uVar2) {
    return 0x2d;
  }
  if (sVar1 != 1) {
    *(uint *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24)) + uVar3 + -1;
    if (sVar1 != 0) {
      *(short *)(param_1 + 0x1c) = sVar1 + -1;
    }
    *param_3 = 1;
    return 0x2d;
  }
  *param_2 = (*param_2 - *(int *)(param_1 + 0x3c)) + uVar2;
  *(uint *)(param_1 + 0x3c) = uVar2;
  return 0x11;
}

