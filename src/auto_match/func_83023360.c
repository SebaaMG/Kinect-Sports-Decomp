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
extern int fn_82F691F0();
extern int fn_82FA5060();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_83264AA4;


undefined8 fn_83023360(int param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lbl_83264AA4 = param_2;
  if ((*(int *)(param_1 + 0x28) == 3) || (*(int *)(param_1 + 0x28) == 0x3f)) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x24) & 0x3fff;
    *(short *)(param_1 + 0x4a) = (short)(uVar2 << 2);
    lVar1 = uVar2 << 0xd;
    uVar2 = fn_82FA5060(lbl_831BC770,lVar1);
    *(int *)(param_1 + 0x38) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,lVar1);
    }
  }
  return 2;
}

