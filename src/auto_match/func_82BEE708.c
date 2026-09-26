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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE7988();
extern int fn_82BE8F88();


void fn_82BEE708(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  fn_82BE5340();
  while (*(int *)(param_1 + 8) != 0) {
    iVar1 = fn_82BE5378(param_1);
    fn_82BE7988(*(undefined1 *)(iVar1 + 0x14),*(undefined2 *)(iVar1 + 0x16));
    fn_82BE5350(param_1);
  }
  iVar1 = fn_82BE8F88();
  if (iVar1 != 0) {
    fn_82BE7988(4,0x50);
  }
  fn_82BE5340(param_1);
  while (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined4 *)fn_82BE5378(param_1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    fn_82BE5350(param_1);
  }
  fn_82BE5478();
  fn_82BE5478(param_1);
  thunk_FUN_82be5558(param_1);
  return;
}

