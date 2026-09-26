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
extern unsigned int *auStack_60;
extern int fn_82BE8F88();
extern int fn_82BF2B20();
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0908();
extern int fn_82CE0928();
extern int fn_82CE0990();
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8
fn_82BF2BE0(int param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
             undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 auStack_60 [4];
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  
  piVar3 = (int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined2 *)(param_1 + 0x1c) = param_4;
  uStack_50 = 2;
  if (*(int *)(param_1 + 0x14) == -1) {
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    uStack_4e = param_4;
    uStack_4c = param_3;
    uVar1 = fn_82CE08B8(2,1,6);
    *piVar3 = (int)uVar1;
    if ((int)uVar1 != -1) {
      uStack_6c = 1;
      fn_82CE08F0(uVar1,0xffffffff8004667e,&uStack_6c);
      fn_82CE0908(*piVar3,0xffff,0x1001,&stack0x00000034,4);
      fn_82CE0908(*piVar3,0xffff,0x1002,&stack0x0000003c,4);
      if ((param_7 == 0) && (iVar2 = fn_82BE8F88(), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        uStack_68 = 1;
        fn_82CE0908(*piVar3,0xffff,0x5801,&uStack_68,4);
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      uStack_64 = 0;
      auStack_60[0] = 0;
      uStack_70 = 4;
      fn_82CE0928(*piVar3,0xffff,0x1001,&uStack_64,&uStack_70);
      fn_82CE0928(*piVar3,0xffff,0x1002,auStack_60,&uStack_70);
      iVar2 = fn_82CE0990(*piVar3,&uStack_50,0x10);
      if ((iVar2 != -1) || (iVar2 = fn_82BF2B20(piVar3), iVar2 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

