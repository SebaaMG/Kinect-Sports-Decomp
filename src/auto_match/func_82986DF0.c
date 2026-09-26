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
extern int fn_82980328();
extern int fn_82986C50();


undefined8 fn_82986DF0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = fn_82986C50();
  if ((((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 0x10), iVar1 != 0)) && (*(int *)(iVar1 + 4) == 9))
     && (*(int *)(iVar1 + 0x10) == 0)) {
    uVar2 = fn_82980328(param_1,param_3,(ulonglong)*(uint *)(*(int *)(iVar3 + 0x20) + 8) + 0x10,
                          iVar3 + 0x30);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    return 0;
  }
  return 0xffffffff80004005;
}

