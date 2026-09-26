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
extern unsigned int *auStack_20;


undefined8 fn_82E6FE08(int *param_1)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  uint auStack_20 [4];
  
  if (param_1[0x17] == 0) {
    uVar1 = 0xffffffffc00d36b2;
  }
  else {
    auStack_20[0] = 0;
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,auStack_20);
    if (-1 < (int)uVar1) {
      if (auStack_20[0] == 0) {
        iVar3 = 500;
      }
      else {
        trapDoubleWordImmediate(6,(ulonglong)auStack_20[0],0);
        uVar2 = 4000000000 / (ulonglong)auStack_20[0];
        iVar3 = (int)uVar2;
        if (0xffffffff < uVar2) {
          iVar3 = -1;
        }
      }
      param_1[0x18] = iVar3;
      uVar1 = 0;
    }
  }
  return uVar1;
}

