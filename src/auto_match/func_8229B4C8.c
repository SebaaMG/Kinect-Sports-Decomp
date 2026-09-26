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
extern unsigned int *auStack_250;
extern unsigned int *auStack_450;
extern unsigned int *auStack_650;
extern unsigned int *auStack_690;
extern unsigned int *auStack_6d0;
extern unsigned int *auStack_710;
extern int fn_82297868();
extern int fn_8229B6C8();
extern int fn_8229C8C8();
extern int fn_8229C9C0();
extern int fn_8229CCA8();
extern int fn_82358FD8();
extern int fn_82528EE0();
extern int fn_82F64CE0();
extern unsigned int lbl_821916F4;


void fn_8229B4C8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 in_stack_00000054;
  undefined1 auStack_710 [64];
  undefined1 auStack_6d0 [64];
  undefined1 auStack_690 [64];
  undefined1 auStack_650 [512];
  undefined1 auStack_450 [512];
  undefined1 auStack_250 [592];
  
  if (*(int *)(param_4 + 0xc) == 0) {
    *(int *)(param_4 + 0x4c) = (int)param_5;
    fn_82358FD8(param_5,auStack_650,0x100,0xffffffff821aafa4);
    uVar1 = fn_82F64CE0(auStack_650);
    fn_82297868(param_4 + 0x70,auStack_650,uVar1);
    if ((int)param_6 == 4) {
      fn_82358FD8(*(undefined4 *)(param_4 + 0x4c),auStack_450,0x100,0xffffffff821aaf6c);
      fn_82358FD8(*(undefined4 *)(param_4 + 0x4c),auStack_250,0x100,0xffffffff821aaf58);
      uVar1 = fn_82F64CE0(auStack_650);
      fn_82297868(param_4 + 0x8c,auStack_650,uVar1);
      fn_8229C9C0(param_4,4,auStack_450,auStack_650,auStack_250,auStack_650);
    }
    else {
      if ((int)param_6 == 2) {
        uVar1 = 0xffffffff821aaf6c;
      }
      else {
        uVar1 = 0xffffffff821aaf58;
      }
      fn_82358FD8(*(undefined4 *)(param_4 + 0x4c),auStack_450,0x100,uVar1);
      uVar3 = param_8;
      if ((param_8 & 0xffffffff) == 0) {
        uVar3 = 0xffffffff820e975c;
      }
      fn_8229C8C8(param_4,param_6,auStack_450,auStack_650,uVar3);
    }
    if (((param_8 & 0xffffffff) != 0) && (iVar2 = thunk_FUN_82f64ce0(param_8), 0 < iVar2)) {
      fn_82358FD8(*(undefined4 *)(param_4 + 0x4c),auStack_710,0x20,0xffffffff821a8344);
      fn_82528EE0(param_2,auStack_6d0,0x20,0xffffffff821a8518,param_2);
      fn_82528EE0(param_3,auStack_690,0x20,0xffffffff821a8518,param_3);
      fn_8229CCA8(param_4,auStack_710,param_8,param_9,param_10,auStack_6d0,in_stack_00000054,
                      auStack_690);
    }
    fn_8229B6C8((double)lbl_821916F4,param_1,param_4);
  }
  return;
}

