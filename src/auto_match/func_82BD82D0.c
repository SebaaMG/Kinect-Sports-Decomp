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


undefined4 fn_82BD82D0(int param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = fn_82A1F2F8();
    if (*(ulonglong *)(param_1 + 0x28) <=
        (((longlong)(int)(-(uint)(*(int *)(param_1 + 0x40) != 0) & 0x28) -
         *(longlong *)(param_1 + 0x18)) - *(longlong *)(param_1 + 0x10)) + (uVar1 & 0xffffffff)) {
      uVar2 = 1;
      *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x28);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return uVar2;
}

