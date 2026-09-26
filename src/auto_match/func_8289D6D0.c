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
extern unsigned int *auStack_20;
extern int fn_825089A0();
extern int fn_82899700();
extern unsigned int lbl_82023BA4;
extern unsigned int lbl_82197140;


undefined4 * fn_8289D6D0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  *param_1 = &lbl_82023BA4;
  param_1[1] = &lbl_82197140;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  piVar1 = (int *)fn_825089A0();
  uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,0x20,1);
  param_1[0xe] = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[0xe] + 4) = param_1[0xe];
  fn_82899700(param_1 + 0x11,auStack_20,auStack_20[0]);
  return param_1;
}

