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
extern int fn_82230218();
extern int fn_82F691F0();
extern unsigned int lbl_820275E8;


void fn_828EF7B8(undefined4 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *param_1 = &lbl_820275E8;
  param_1[3] = 0xffffffff;
  param_1[4] = 3;
  param_1[0x22] = 0;
  param_1[0x23] = 0xf;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  fn_82230218(param_1 + 0x1e,param_2,0,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x129) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((int)param_1 + 0x135) = 0;
  *(undefined1 *)((int)param_1 + 0x136) = 0;
  *(undefined1 *)((int)param_1 + 0x137) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x139) = 0;
  *(undefined1 *)((int)param_1 + 0x13a) = 0;
  *(undefined1 *)((int)param_1 + 0x13b) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x149) = 0;
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  *(undefined1 *)((int)param_1 + 0x14b) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x14d) = 0;
  *(undefined1 *)((int)param_1 + 0x14e) = 0;
  *(undefined1 *)((int)param_1 + 0x14f) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)((int)param_1 + 0x159) = 0;
  *(undefined1 *)((int)param_1 + 0x15a) = 0;
  *(undefined1 *)((int)param_1 + 0x15b) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)((int)param_1 + 0x1e1) = 0;
  *(undefined1 *)((int)param_1 + 0x1e2) = 0;
  param_1[0x79] = 0xffffffff;
  param_1[0x89] = 3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 5,0,0x3c);
}

