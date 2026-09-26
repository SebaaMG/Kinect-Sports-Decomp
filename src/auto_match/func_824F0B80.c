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
extern int fn_82523220();
extern int fn_8265C9E0();
extern unsigned int lbl_821C1A3C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 * fn_824F0B80(undefined4 *param_1,int param_2,ulonglong param_3)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  double dVar4;
  
  param_1[1] = param_2;
  param_1[0x14] = 0;
  fVar1 = lbl_821CC160;
  dVar4 = (double)lbl_821CC160;
  param_1[0x16] = lbl_821CC160;
  param_1[0x2f] = fVar1;
  *param_1 = &lbl_821C1A3C;
  param_1[0x15] = 0;
  param_1[0x2e] = 0;
  if ((param_3 & 0xffffffff) == 0) {
    param_1[2] = 0;
  }
  else {
    uVar2 = fn_8265C9E0(0x319c0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82523220(uVar2,param_3,1);
    }
    param_1[2] = uVar3;
    param_1[4] = *(undefined4 *)(param_2 + 0xc0);
    param_1[5] = *(undefined4 *)(param_2 + 0xc4);
    param_1[6] = *(undefined4 *)(param_2 + 200);
    param_1[7] = (float)dVar4;
    param_1[8] = *(undefined4 *)(param_2 + 0xd0);
    param_1[9] = *(undefined4 *)(param_2 + 0xd4);
    param_1[10] = *(undefined4 *)(param_2 + 0xd8);
    param_1[0xb] = (float)dVar4;
    param_1[0xc] = *(undefined4 *)(param_2 + 0xb0);
    param_1[0xd] = *(undefined4 *)(param_2 + 0xb4);
    param_1[0xe] = *(undefined4 *)(param_2 + 0xb8);
    param_1[0xf] = (float)dVar4;
    param_1[0x10] = *(undefined4 *)(param_2 + 0xa0);
    param_1[0x11] = *(undefined4 *)(param_2 + 0xa4);
    uVar3 = lbl_821CA460;
    param_1[0x12] = *(undefined4 *)(param_2 + 0xa8);
    param_1[0x13] = uVar3;
  }
  return param_1;
}

