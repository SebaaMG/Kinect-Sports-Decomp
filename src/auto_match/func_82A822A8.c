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
extern int fn_82A84B10();
extern int fn_82A84B80();
extern unsigned int lbl_8322344C;


undefined8 fn_82A822A8(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar2;
  undefined8 uVar1;
  char cVar3;
  
  if ((lbl_8322344C == '\0') || (iVar2 = fn_82A84B10(), *(int *)(iVar2 + 0x14) == 0)) {
    uVar1 = 0xffffffff8000ffff;
  }
  else if (((param_4 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) < 0x2000)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82A84B10();
    cVar3 = fn_82A84B80(uVar1,param_3,param_4,param_1,param_2);
    if (cVar3 != '\0') {
      return 0;
    }
    uVar1 = 0xffffffff80004005;
  }
  thunk_FUN_82a2b748(uVar1);
  return 0x65b;
}

