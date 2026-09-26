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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82517978();
extern int fn_828A2240();
extern int fn_828E3548();
extern unsigned int lbl_8202725C;


undefined4 * fn_828E4988(undefined4 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  param_1[1] = *(undefined4 *)(*param_2 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_8202725C;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_82517978(param_1 + 4,*param_2,param_2[1],0);
  fn_828A2240(param_1 + 6,auStack_30,auStack_30);
  auStack_2c[0] = 0;
  uVar1 = (**(code **)(*(int *)*param_2 + 0xc))();
  fn_828E3548(param_1 + 10,uVar1,auStack_2c);
  return param_1;
}

