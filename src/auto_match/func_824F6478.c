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
extern int fn_825604A0();
extern int fn_82F4EC30();
extern int fn_82F52C20();


void fn_824F6478(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x200) + 8))();
  puVar1 = *(undefined4 **)(param_1 + 0x200);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  (**(code **)(**(int **)(param_1 + 0x204) + 8))();
  puVar1 = *(undefined4 **)(param_1 + 0x204);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  fn_825604A0(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0x300);
  if (iVar2 != 0) {
    uVar3 = fn_82F4EC30(0);
    fn_82F52C20(uVar3,iVar2,1);
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x304);
  if (iVar2 != 0) {
    uVar3 = fn_82F4EC30(0);
    fn_82F52C20(uVar3,iVar2,1);
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  return;
}

