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
extern int fn_82A1E338();
extern int fn_82A1E3B8();
extern int fn_82A476E0();


void fn_82A403F0(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  undefined4 auStack_30 [12];
  
  auStack_30[0] = 0;
  iVar2 = fn_82A476E0(param_1 + 0x3ea0,auStack_30);
  if (iVar2 != 0) {
    uVar1 = fn_82A1E3B8(0xfffffffffffffffe);
    fn_82A1E338(0xfffffffffffffffe,0xf);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x40))();
    piVar3 = (int *)(param_1 + 0x2c);
    (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar3);
    do {
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x34))(*(int **)(param_1 + 0xb0),auStack_30[0]);
      iVar2 = fn_82A476E0(param_1 + 0x3ea0,auStack_30);
    } while (iVar2 != 0);
    (**(code **)(*piVar3 + 0x14))(piVar3);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x44))();
    fn_82A1E338(0xfffffffffffffffe,uVar1);
  }
  return;
}

