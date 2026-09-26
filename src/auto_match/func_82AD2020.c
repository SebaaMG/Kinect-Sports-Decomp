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


uint fn_82AD2020(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0x28) & 0x80000) == 0) {
    if ((*(uint *)(param_2 + 0x24) & 1) == 0) {
      uVar1 = *(uint *)(param_2 + 0x20);
LAB_82ad2058:
      uVar3 = (uVar1 & 0xfffffffe) - 0x28;
      if (uVar3 == 0) {
        return 0;
      }
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) - 0x20) >> 7 & 0x7f;
      if ((((uVar1 == 0x56) || (uVar1 == 0x57)) || (uVar1 == 0x59)) ||
         (((uVar1 == 0x5a || (uVar1 == 0x54)) || (bVar2 = 0, uVar1 == 0x55)))) {
        bVar2 = 1;
      }
      return -(uint)bVar2 & uVar3;
    }
  }
  else if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    goto LAB_82ad2058;
  }
  return 0;
}

