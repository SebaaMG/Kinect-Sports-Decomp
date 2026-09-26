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
extern int fn_82F68B68();


void fn_8247ABF8(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x13d0);
  if (*(int *)(param_1 + 0x2030) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x770);
    if (uVar1 == 2) {
      uVar5 = 0xffffffff821bd240;
    }
    else {
      uVar5 = 0xffffffff821bd268;
    }
  }
  else if (*(int *)(param_1 + 0x2030) == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x770);
    iVar3 = (uVar1 - 5) + (uint)((ulonglong)uVar1 - 4 == 0);
    iVar2 = (int)((ulonglong)uVar1 - 4);
    if (*(int *)(param_1 + 0x17f0) == 2) {
      if (iVar2 == iVar3) {
        uVar5 = 0xffffffff821bd2a8;
      }
      else {
        uVar5 = 0xffffffff821bd284;
      }
    }
    else if (iVar2 == iVar3) {
      uVar5 = 0xffffffff821bd2e0;
    }
    else {
      uVar5 = 0xffffffff821bd2c8;
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x770);
    if (uVar1 == 2) {
      uVar5 = 0xffffffff821bd240;
    }
    else {
      uVar5 = 0xffffffff821bd2fc;
    }
  }
  fn_82F68B68(uVar4,uVar5,param_2,param_3,0,0);
  return;
}

