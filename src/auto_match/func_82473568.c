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
extern int fn_82266D28();
extern int fn_82F68CC0();
extern unsigned int lbl_821BCE54;
extern unsigned int lbl_821CC160;


undefined4 * fn_82473568(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  double dVar4;
  
  param_1[1] = 1;
  fVar1 = lbl_821CC160;
  dVar4 = (double)lbl_821CC160;
  *param_1 = &lbl_821BCE54;
  param_1[3] = fVar1;
  param_1[2] = 0;
  fn_82F68CC0(param_1 + 4,param_2,0x18);
  param_1[10] = param_3;
  pfVar2 = (float *)(param_1 + 10);
  lVar3 = 2;
  param_1[0xf] = param_2[2];
  param_1[0x10] = 0;
  do {
    pfVar2[1] = 0.0;
    pfVar2 = pfVar2 + 2;
    *pfVar2 = (float)dVar4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x13] = (float)dVar4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82266D28(param_1 + 0x14,0);
  param_1[0x16] = *param_2;
  param_1[0x17] = param_2[1];
  fn_82F68CC0(param_1 + 0x19,param_2,0x18);
  param_1[0x24] = (float)dVar4;
  param_1[0x1f] = param_3;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}

