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
extern int fn_8265CA20();
extern int fn_828BDD70();
extern int fn_828BDE70();
extern unsigned int lbl_820265B0;
extern unsigned int lbl_820265B8;


void fn_828CD3B0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &lbl_820265B8;
  param_1[0x14] = &lbl_820265B0;
  if (param_1[0x24] != 0) {
    *(undefined4 *)(param_1[0x24] + 0x94) = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 0x90) = param_1[0x24];
  }
  if (param_1[0x20] != 0) {
    fn_828BDD70(param_1[0x20],param_1[0x31]);
  }
  if ((param_1[0x24] == 0) && (param_1[0x25] == 0)) {
    puVar1 = (undefined4 *)param_1[0x20];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (param_1[0x2c] != 0) {
    fn_8265CA20();
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  fn_828BDE70(param_1);
  return;
}

