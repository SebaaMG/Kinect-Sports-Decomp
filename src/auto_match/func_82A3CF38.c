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
extern unsigned int *auStack_cd0;
extern int fn_82F691F0();


undefined8 fn_82A3CF38(int param_1)

{
  ulonglong uVar1;
  undefined1 auStack_cd0 [3280];
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x868) + 0x20;
  if (799 < (uVar1 & 0x1fffffff) << 3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_cd0,0,(uVar1 & 0xfffffff) << 4);
}

