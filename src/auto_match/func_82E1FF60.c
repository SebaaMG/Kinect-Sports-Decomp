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
extern int fn_82E1FE58();


undefined8 fn_82E1FF60(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    uVar1 = 0xffffffff80004005;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((*(char *)(param_1 + 0x14) == '\0') &&
       (iVar2 = fn_82A1F2F8(), *(uint *)(param_1 + 0x10) < (uint)(iVar2 - *(int *)(param_1 + 4))))
    {
      uVar1 = fn_82E1FE58(param_1);
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  return uVar1;
}

