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
extern int fn_82C2C1E8();
extern int fn_82F691F0();


void fn_82E345A8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = fn_82C2C1E8(iVar1);
  if (-1 < iVar2) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(iVar1 + 0x13c),0,
                 ((longlong)(int)(uint)*(ushort *)(iVar1 + 0x22) * (longlong)*(int *)(iVar1 + 0x100)
                 & 0x7fffffffU) << 1);
  }
  return;
}

