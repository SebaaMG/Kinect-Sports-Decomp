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
extern int fn_8262FEC8();
extern int fn_82647460();
extern int fn_82647538();
extern int fn_8265C990();


void fn_829F7FA8(int *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  fn_8265C990(param_1[0x1c],0xffffffffac9c0000);
  param_1[0x1c] = 0;
  if (param_1[5] != 0) {
    fn_8262FEC8();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    fn_8262FEC8();
    param_1[6] = 0;
  }
  if (param_1[7] != 0) {
    fn_8262FEC8();
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    fn_8262FEC8();
    param_1[8] = 0;
  }
  if (param_1[9] != 0) {
    fn_8262FEC8();
    param_1[9] = 0;
  }
  if (param_1[10] != 0) {
    fn_8262FEC8();
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    fn_8262FEC8();
    param_1[0xb] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8262FEC8();
    param_1[0x12] = 0;
  }
  if (param_1[0xc] != 0) {
    fn_8262FEC8();
    param_1[0xc] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_8262FEC8();
    param_1[0xf] = 0;
  }
  if (param_1[0x13] != 0) {
    fn_8262FEC8();
    param_1[0x13] = 0;
  }
  if (param_1[0xd] != 0) {
    fn_8262FEC8();
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_8262FEC8();
    param_1[0xe] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_8262FEC8();
    param_1[0x10] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_8262FEC8();
    param_1[0x11] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8262FEC8();
    param_1[0x12] = 0;
  }
  piVar2 = param_1 + 2;
  lVar1 = 2;
  do {
    if (*piVar2 != 0) {
      fn_8262FEC8();
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  if (param_1[1] != 0) {
    fn_82647538();
    if (param_1[1] != 0) {
      fn_82647460();
      param_1[1] = 0;
    }
  }
  return;
}

