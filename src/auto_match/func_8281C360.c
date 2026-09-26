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


undefined8 fn_8281C360(int param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x50)) ||
     ((ulonglong)*(uint *)(param_1 + 0x54) < (param_2 & 0xffffffff))) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
      uVar2 = param_2 - *(uint *)(param_1 + 0x78);
    }
    uVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 4))(uVar2,param_1);
  }
  if ((int)uVar3 != 0) {
    if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
      param_2 = param_2 - *(uint *)(param_1 + 0x78);
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x28);
    if (pcVar1 == (code *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = (*pcVar1)(param_1,param_2);
    }
  }
  return uVar3;
}

