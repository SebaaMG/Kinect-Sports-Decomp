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
extern int fn_828F9A60();
extern int fn_82F691F0();
extern unsigned int uStack_8c;


undefined8 fn_828FCAC0(ulonglong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piStack_90;
  undefined4 uStack_8c;
  
  if ((param_1 & 0x100000) == 0) {
    piStack_90 = (int *)0x0;
    uStack_8c = 0;
    uVar1 = fn_828F9A60(0x10000,&piStack_90);
    if (-1 < (int)uVar1) {
      uVar1 = (**(code **)(*piStack_90 + 0x10))();
      uVar2 = (**(code **)(*piStack_90 + 0xc))(piStack_90);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,uVar1);
    }
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

