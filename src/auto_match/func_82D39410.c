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
extern int fn_82CE5410();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134E74;
extern unsigned int lbl_82134E80;
extern unsigned int lbl_82134E8C;
extern unsigned int lbl_82134EA0;


undefined4 * fn_82D39410(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + -2;
  param_1[3] = &lbl_82134E80;
  param_1[2] = &lbl_82134EA0;
  param_1[1] = &lbl_82134E8C;
  *param_1 = &lbl_82134E74;
  *puVar1 = &lbl_8212FC60;
  if ((param_2 & 1) != 0) {
    iVar2 = fn_82CE5410();
    (**(code **)(**(int **)(iVar2 + 0x10) + 8))
              (*(int **)(iVar2 + 0x10),puVar1,*(undefined2 *)(param_1 + -1));
  }
  return puVar1;
}

