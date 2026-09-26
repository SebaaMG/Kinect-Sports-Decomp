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
extern int fn_82F41C68();
extern int fn_82F64CE0();


undefined8 fn_82F417A0(int param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xffffffff) == 0) {
    param_2 = 0xffffffff820e975c;
  }
  lVar1 = fn_82F64CE0(param_2);
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    uVar2 = fn_82F41C68(param_2,(lVar1 + 1U & 0x7fffffff) << 1,*(undefined4 *)(param_1 + 0x60),
                          *(undefined4 *)(param_1 + 100));
  }
  return uVar2;
}

