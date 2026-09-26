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
extern int fn_8265C9E0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821BEA64;
extern unsigned int lbl_821CC160;


undefined4 *
fn_8248B928(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  
  param_1[3] = param_2;
  dVar4 = (double)lbl_821CC160;
  param_1[4] = lbl_821CC160;
  *param_1 = &lbl_821BEA64;
  param_1[1] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  fVar1 = lbl_821922D0;
  dVar3 = (double)lbl_821922D0;
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1c] = fVar1;
  param_1[0x10] = param_7;
  param_1[0x12] = 0x140;
  param_1[0x13] = 0x100;
  param_1[0x14] = 0x140;
  param_1[0x15] = 0x100;
  param_1[0x18] = param_2;
  param_1[0x19] = param_4;
  param_1[0x1a] = 0x140;
  param_1[0x1b] = 0x100;
  param_1[0x1d] = 2;
  param_1[0x1e] = param_5;
  param_1[0x1f] = param_6;
  puVar2 = (undefined4 *)fn_8265C9E0(0x68);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[0xc] = (float)dVar4;
    puVar2[0xf] = (float)dVar4;
    puVar2[6] = param_4;
    puVar2[0x10] = (float)dVar3;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[0xd] = 0x140;
    puVar2[0xe] = 0x100;
    puVar2[0x12] = 1;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x17] = 2;
    puVar2[0x18] = param_5;
    puVar2[0x19] = param_6;
  }
  param_1[5] = puVar2;
  param_1[2] = 0;
  return param_1;
}

