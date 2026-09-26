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
extern int fn_82E50C30();
extern int fn_82E50CB8();
extern int fn_82F691F0();
extern unsigned int lbl_82152F14;
extern unsigned int lbl_82152FB4;
extern unsigned int lbl_82152FC4;


void fn_82E424E8(undefined4 *param_1)

{
  *param_1 = &lbl_82152FC4;
  param_1[1] = &lbl_82152FB4;
  param_1[2] = 1;
  param_1[3] = 0;
  fn_82E50C30(param_1 + 4);
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x18) = 3000;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x1a] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined2 *)((int)param_1 + 0x27a) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0x9b] = &lbl_82152F14;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x167] = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  *(undefined8 *)(param_1 + 0x16a) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x16e) = 0;
  param_1[0x170] = 0;
  fn_82E50CB8(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x1b,0,0x200);
}

