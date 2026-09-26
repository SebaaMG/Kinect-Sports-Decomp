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
extern int fn_82CE5410();
extern int fn_82D96358();
extern int fn_82D9CCA0();
extern unsigned int lbl_8213A70C;


undefined4 * fn_82D9CE70(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_82D96358(param_1,1);
  *param_1 = &lbl_8213A70C;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x80000000;
  param_1[3] = (int)param_2;
  fn_82CE4040(param_2);
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = fn_82CE5410();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x1c);
  *(undefined2 *)(iVar1 + 4) = 0x1c;
  uVar2 = fn_82D9CCA0(iVar1,param_1);
  param_1[0x11] = uVar2;
  return param_1;
}

