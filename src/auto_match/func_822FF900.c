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
extern int fn_82300178();
extern int fn_82300D30();
extern int fn_82300E58();
extern int fn_8251F720();
extern unsigned int lbl_821CC160;


int fn_822FF900(int param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  undefined8 uVar2;
  double dVar3;
  
  fn_82300D30(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x528) = param_2;
  fVar1 = lbl_821CC160;
  dVar3 = (double)lbl_821CC160;
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(float *)(param_1 + 0x540) = fVar1;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(float *)(param_1 + 0x544) = fVar1;
  *(undefined4 *)(param_1 + 0x568) = 0xffffffff;
  *(float *)(param_1 + 0x548) = fVar1;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(float *)(param_1 + 0x54c) = fVar1;
  *(undefined4 *)(param_1 + 0x574) = 0x7fe;
  *(float *)(param_1 + 0x558) = fVar1;
  *(undefined4 *)(param_1 + 0x578) = 0x7fe;
  uVar2 = fn_8251F720(param_3,0);
  *(int *)(param_1 + 0x52c) = (int)uVar2;
  fn_82300E58(param_1 + 0x420,uVar2);
  fn_82300178(param_1);
  *(float *)(param_1 + 0x560) = (float)dVar3;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(float *)(param_1 + 0x55c) = (float)dVar3;
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0x1e2;
  *(undefined4 *)(param_1 + 0x578) = 0x1e2;
  return param_1;
}

