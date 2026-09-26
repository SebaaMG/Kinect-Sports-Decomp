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
extern unsigned int *auStack_40;
extern int fn_82BEC770();
extern int fn_82BEC9C8();
extern int fn_82BEDD30();
extern int fn_82BF6CE8();
extern unsigned int iStack_28;


void fn_82BF4248(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 auStack_40 [2];
  undefined1 auStack_30 [8];
  int iStack_28;
  
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x4c))();
    if (iVar2 != 0) {
      fn_82BEC770(auStack_30);
      auStack_40[0] = (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
      fn_82BEC9C8(param_1,0xffffffff82bf4228,auStack_40,auStack_30);
      for (; iStack_28 != 0; iStack_28 = *(int *)(iStack_28 + 8)) {
        if (*(int **)(iStack_28 + 0x10) != (int *)0x0) {
          uVar1 = (**(code **)(**(int **)(iStack_28 + 0x10) + 4))();
          fn_82BEDD30(param_1,uVar1);
        }
      }
      fn_82BF6CE8(auStack_30);
    }
  }
  return;
}

