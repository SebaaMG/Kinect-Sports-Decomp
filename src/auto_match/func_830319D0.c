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
extern int fn_82FA5190();
extern int fn_830338F0();
extern int fn_83033EA0();
extern int fn_83035CC0();
extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217CC20;
extern unsigned int lbl_831BC768;


void fn_830319D0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[0x2b];
  puVar2 = (undefined4 *)param_1[0x2a];
  *param_1 = &lbl_8217CC20;
  param_1[7] = &lbl_8217C940;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    fn_83035CC0(*puVar2,0);
    (**(code **)(*(int *)*puVar2 + 8))();
  }
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    fn_82FA5190(lbl_831BC768);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  fn_83033EA0(param_1);
  fn_830338F0(param_1);
  return;
}

