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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D6E18();
extern int fn_827D7D48();
extern int fn_82A1E300();
extern unsigned int iStack_24;
extern unsigned int iStack_28;


void fn_827D81A8(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_30 [8];
  int iStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0x2c8) == 0) {
    *(undefined4 *)(param_1 + 0x2cc) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x348);
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
  while (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x2c4) + 0x10))();
    fn_82A1E300();
    iVar1 = *(int *)(param_1 + 0x348);
  }
  fn_827D6E18(&iStack_28,param_1,param_2);
  if (iStack_28 != 0) {
    fn_82517978(auStack_30,iStack_28,iStack_24,0);
    fn_827D7D48(param_1,auStack_30);
  }
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x2c8) - 1;
  *(int *)(param_1 + 0x2c8) = (int)lVar2;
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

