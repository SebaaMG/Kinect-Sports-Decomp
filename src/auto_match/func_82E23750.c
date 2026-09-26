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
extern int fn_82E245D8();
extern int fn_82F691F0();
extern unsigned int lbl_8214BF98;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E23750(int param_1,undefined8 param_2,uint param_3,uint param_4)

{
  double dVar1;
  longlong lVar2;
  
  lVar2 = fn_82E245D8();
  dVar1 = lbl_8214BF98;
  if (-1 < lVar2) {
    *(double *)(param_1 + 0xe0) = (double)param_4;
    *(double *)(param_1 + 0xd0) = (double)param_3;
    *(uint *)(param_1 + 0xcc) = (uint)param_2 & 0xffff;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 500;
    *(undefined4 *)(param_1 + 0xe8) = 10000;
    *(undefined4 *)(param_1 + 0xec) = 0x5a;
    *(uint *)(param_1 + 200) = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(double *)(param_1 + 0xd8) = (double)param_4 * dVar1;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x74,0,0x20);
  }
  return lVar2;
}

