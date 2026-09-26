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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82057514;
extern unsigned int lbl_82057518;
extern unsigned int lbl_821AAD20;


void fn_82F55CC8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  
  fVar1 = lbl_821AAD20;
  fVar3 = lbl_82057514;
  fVar2 = lbl_82015BD8;
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (in_register_00010018 <= lbl_82057518) {
    *param_1 = lbl_821AAD20;
  }
  else {
    fVar1 = lbl_82002AE0 / in_register_00010018;
    *param_1 = fVar1 * in_register_00010010 * lbl_82057514 + lbl_82015BD0;
    fVar1 = -(fVar1 * in_register_00010014 * fVar3 - fVar2);
  }
  *param_2 = fVar1;
  return;
}

