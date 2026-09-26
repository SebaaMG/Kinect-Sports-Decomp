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
extern int fn_82EEB368();
extern int fn_82F691F0();


void fn_82EEB4D8(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 3;
  piVar3 = param_1;
  do {
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      fn_82EEB368(param_1);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x34);
}

