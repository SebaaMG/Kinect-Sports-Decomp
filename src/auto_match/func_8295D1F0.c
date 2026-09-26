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
extern int fn_8295A330();


uint fn_8295D1F0(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = fn_8295A330(param_1,param_2 | param_3);
  uVar2 = (int)uVar2 >> 0x1f & uVar2;
  if (-1 < (int)uVar2) {
    if ((param_4 & 0xffffffff) != 0) {
      uVar2 = fn_8295A330(param_1,param_4);
      uVar2 = (int)uVar2 >> 0x1f & uVar2;
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar1 = *(int *)(param_1 + 0x11c) * 4;
      *(uint *)(iVar1 + *(int *)(param_1 + 0x110)) =
           *(uint *)(iVar1 + *(int *)(param_1 + 0x110)) | 0x10000000;
    }
    uVar2 = 0;
  }
  return uVar2;
}

