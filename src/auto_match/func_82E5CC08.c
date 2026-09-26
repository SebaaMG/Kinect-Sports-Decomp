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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();


undefined8 fn_82E5CC08(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (((param_2 & 0xffffffff) == 0) && ((param_3 & 0xffffffff) != 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 0) {
      fn_82E4FE40();
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar2 = fn_82E50BE8(param_3,0,0,0,0);
      *(int *)(param_1 + 0x78) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
      fn_82F68CC0(uVar2,param_2,param_3);
      *(int *)(param_1 + 0x7c) = (int)param_3;
    }
    uVar1 = 0;
  }
  return uVar1;
}

