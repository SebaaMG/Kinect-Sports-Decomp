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
extern int fn_829EC5E8();


undefined8 fn_829E9078(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff80004005;
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if ((*(int *)(param_1 + 0x20) != 0) && (iVar1 = fn_829EC5E8(), -1 < iVar1)) {
      *param_2 = iVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

