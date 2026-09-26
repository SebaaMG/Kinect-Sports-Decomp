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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82138514;


void fn_82D3F380(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &lbl_82138514;
  if (param_1[0x18] != 0) {
    fn_82CE4118();
  }
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x16] = 0;
  if ((param_1[0x17] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x15],param_1[0x17] & 0x3fffffff,0x10);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x11] = 0;
  if ((param_1[0x12] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x10],param_1[0x12] & 0x3fffffff,0x30);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  *param_1 = &lbl_8212FC60;
  return;
}

