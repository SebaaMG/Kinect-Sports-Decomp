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
extern int fn_82D40880();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134BF8;
extern unsigned int lbl_8213856C;
extern unsigned int lbl_821AAD20;
extern unsigned char lbl_8317FFB0[];
extern unsigned int lbl_831819C8;


void fn_82D3A118(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  double extraout_f1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *param_1 = &lbl_82134BF8;
  if (param_2 != 0) {
    param_1[3] = 0;
  }
  param_1[3] = 0x12;
  *param_1 = &lbl_8213856C;
  if (param_2 != 0) {
    pcVar1 = lbl_8317FFB0 + 0x50;
    if (lbl_831819C8 < lbl_821AAD20) {
      param_1 = (undefined4 *)fn_82D40880();
      *(float *)(pcVar1 + 0x19c8) = (float)((double)lbl_82002AE0 - extraout_f1);
    }
  }
  param_1[3] = 2;
  return;
}

