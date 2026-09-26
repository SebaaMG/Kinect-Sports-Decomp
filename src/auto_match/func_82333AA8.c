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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822C8A18();
extern int fn_823F2E20();
extern unsigned int iStack_1c;


void fn_82333AA8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 8))();
  uVar2 = fn_822C8A18(auStack_20,param_1,0xffffffff821aca8c);
  fn_823F2E20((undefined4 *)(param_1 + 0x20),uVar2);
  if (iStack_1c != 0) {
    fn_822315A0();
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  return;
}

