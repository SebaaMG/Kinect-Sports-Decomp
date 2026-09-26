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
extern int fn_82CE4040();
extern int fn_82CE5250();
extern int fn_82CE5410();
extern unsigned int lbl_82133B18;


undefined4 * fn_82CFB2D8(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[2] = param_2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82133B18;
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_1[2] != 0) {
    fn_82CE4040();
  }
  iVar1 = fn_82CE5410();
  uVar2 = fn_82CE5250(*(undefined4 *)(iVar1 + 0x10),param_3,0x40);
  param_1[3] = uVar2;
  param_1[4] = 0;
  param_1[5] = (int)param_3;
  return param_1;
}

