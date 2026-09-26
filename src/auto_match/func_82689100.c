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
extern unsigned int lbl_82005BB4;
extern unsigned int lbl_82005BC0;
extern unsigned int lbl_82005BCC;


void fn_82689100(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[1] = 1;
  param_1[2] = &lbl_82005BB4;
  *param_1 = &lbl_82005BCC;
  param_1[2] = &lbl_82005BC0;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  param_1[3] = param_2;
  uVar1 = param_3[3];
  uVar2 = param_3[2];
  uVar3 = param_3[1];
  param_1[4] = *param_3;
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  return;
}

