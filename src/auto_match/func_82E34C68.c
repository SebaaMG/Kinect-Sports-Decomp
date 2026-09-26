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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8207F51C;
extern unsigned int lbl_8208DD8C;
extern unsigned int lbl_8208DD94;
extern unsigned int lbl_8208DD98;
extern unsigned int lbl_8208DD9C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82E34C68(uint param_1,short param_2)

{
  if (param_1 < 0xb) {
    return (double)lbl_8208DD9C;
  }
  if (param_1 < 0x1a) {
    return (double)lbl_8208DD98;
  }
  if (param_1 < 0x33) {
    return (double)lbl_8208DD8C;
  }
  if (param_1 < 0x4c) {
    return (double)lbl_82005718;
  }
  if (param_1 < 0x5b) {
    return (double)lbl_8207F51C;
  }
  if (param_1 < 100) {
    return (double)lbl_8208DD94;
  }
  if ((param_1 == 100) && ((param_2 == 0x163 || (param_2 == 0x167)))) {
    return (double)lbl_821AAD20;
  }
  return (double)lbl_8200133C;
}

