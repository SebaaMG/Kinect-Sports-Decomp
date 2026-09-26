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
extern int fn_82BC0928();
extern unsigned int lbl_820E3514;


undefined4 * fn_82BC13C0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  
  fn_82BC0928();
  *param_1 = &lbl_820E3514;
  uVar1 = *(undefined4 *)(param_4 + 0x584);
  param_1[4] = uVar1;
  param_1[0xc] = uVar1;
  *(int *)(param_4 + 0x584) = *(int *)(param_4 + 0x584) + 1;
  return param_1;
}

