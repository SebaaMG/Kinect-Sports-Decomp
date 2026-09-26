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
extern unsigned int *auStack_50;
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826FDF58();
extern int fn_8278B458();
extern int fn_8278CD58();
extern int fn_8278E7B0();
extern int fn_82794B88();
extern unsigned int iStack_38;
extern unsigned int uStack_26;


void fn_82794C90(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  int iStack_38;
  ushort uStack_26;
  
  iVar2 = fn_8278B458(param_2);
  if (iVar2 == 0) {
    uVar1 = fn_82794B88(param_1);
    uVar3 = fn_8278E7B0(uVar1,param_2);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  else {
    fn_8278CD58(auStack_50,param_2,0);
    if (iStack_38 != 0) {
      fn_8267C498();
    }
    uStack_26 = uStack_26 | 0x200;
    iStack_38 = 0;
    uVar1 = fn_82794B88(param_1);
    uVar3 = fn_8278E7B0(uVar1,auStack_50);
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_8267C4F0();
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    fn_826FDF58(auStack_50);
  }
  return;
}

