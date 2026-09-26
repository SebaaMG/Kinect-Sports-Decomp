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
extern int fn_82F68CC0();
extern unsigned int lbl_821BCEAC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6698;


undefined4 * fn_82475DB8(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  longlong lVar5;
  double dVar6;
  
  param_1[1] = 2;
  fVar1 = lbl_821CC160;
  dVar6 = (double)lbl_821CC160;
  *param_1 = &lbl_821BCEAC;
  param_1[3] = fVar1;
  param_1[2] = 0;
  fn_82F68CC0(param_1 + 4,param_2,0x50);
  param_1[0x2c] = (float)dVar6;
  param_1[0x2e] = (float)dVar6;
  param_1[0x18] = param_3;
  param_1[0x2b] = 0xffffffff;
  pfVar3 = (float *)(param_1 + 0x24);
  puVar4 = param_1 + 0x18;
  param_1[0x2d] = 0;
  uVar2 = lbl_831C6698;
  lVar5 = 2;
  do {
    puVar4[2] = (float)dVar6;
    puVar4[1] = 0;
    puVar4[3] = uVar2;
    puVar4[4] = (float)dVar6;
    puVar4[5] = (float)dVar6;
    puVar4 = puVar4 + 6;
    *puVar4 = 0;
    pfVar3[1] = 0.0;
    pfVar3 = pfVar3 + 2;
    *pfVar3 = (float)dVar6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x2a] = (float)dVar6;
  param_1[0x29] = 0;
  param_1[0x30] = param_3;
  fn_82F68CC0(param_1 + 0x31,param_2,0x50);
  return param_1;
}

