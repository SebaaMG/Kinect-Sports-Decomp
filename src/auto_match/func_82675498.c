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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_8251F718();
extern int fn_82520158();
extern int fn_82674748();
extern unsigned int lbl_82002D80;
extern unsigned int lbl_831E7E78;


undefined4 * fn_82675498(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  param_1[1] = 1;
  param_1[2] = 10;
  lbl_831E7E78 = 0;
  *param_1 = &lbl_82002D80;
  param_1[3] = 0;
  fn_82674748(param_1 + 4,auStack_20,auStack_20);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fn_82520158(0xffffffff821c1364,auStack_1c,0);
  uVar1 = fn_8251F718(auStack_1c);
  param_1[3] = uVar1;
  return param_1;
}

