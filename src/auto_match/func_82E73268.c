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
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern int fn_82F691F0();
extern unsigned int uStack_158;


longlong fn_82E73268(int param_1)

{
  longlong lVar1;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined1 auStack_150 [336];
  
  uStack_158 = 0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),auStack_160);
  if ((-1 < lVar1) && ((((U64)(uStack_158) >> 16) & 0xFFFF) != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_150,0,0x125);
  }
  return lVar1;
}

