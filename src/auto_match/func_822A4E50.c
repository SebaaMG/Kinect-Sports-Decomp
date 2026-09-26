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
extern int fn_82358FD8();
extern int fn_82440810();
extern int fn_82528EE0();


void fn_822A4E50(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [72];
  
  iVar1 = *(int *)(param_2 + 0x4c);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      fn_82440810((uint *)(param_2 + 0x48),param_4,param_1);
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x48);
      fn_82528EE0(param_4,0x20,0xffffffff821b96c0,(int)uVar2 / 100,
                        (ulonglong)uVar2 + (longlong)((int)uVar2 / 100) * -100);
      fn_82358FD8(param_1,auStack_60,0x20,0xffffffff821b96d0);
      fn_82528EE0(param_4,0x20,0xffffffff821b96ec,param_4,auStack_60);
    }
  }
  else {
    if (iVar1 == 0) {
      uVar3 = 0xffffffff821a82d4;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      uVar3 = 0xffffffff821a82c0;
    }
    fn_82358FD8(param_1,param_4,0x20,uVar3);
  }
  return;
}

