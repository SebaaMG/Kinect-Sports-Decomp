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
extern unsigned int *auStack_30;
extern int fn_82319068();
extern int fn_82359C18();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern unsigned int lbl_821AF1C8;
extern unsigned int lbl_821AF790;
extern unsigned int lbl_821C7FB8;


void fn_823155B8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_30 [48];
  
  puVar1 = (undefined4 *)param_1[0x174];
  *param_1 = &lbl_821AF790;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x174] = 0;
  }
  if (param_1[0xdc] != 0) {
    fn_8251FA58();
    param_1[0xdc] = 0;
  }
  fn_82359C18(param_1 + 0x19c);
  param_1[0x19a] = &lbl_821C7FB8;
  if (param_1[0x171] != 0) {
    fn_8251FA58();
    param_1[0x171] = 0;
  }
  if (param_1[0x172] != 0) {
    fn_8251FA58();
    param_1[0x172] = 0;
  }
  fn_82319068(auStack_30,param_1 + 0x16d,*(undefined4 *)param_1[0x16e]);
  fn_8265CA20(param_1[0x16e]);
  *param_1 = &lbl_821AF1C8;
  return;
}

