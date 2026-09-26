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
extern int fn_822A6C30();
extern int fn_822A6F38();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CC160;


void fn_822A6E50(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10c);
  if (uVar1 == 0) {
    uVar4 = 7;
    uVar5 = 0xffffffff831ce7bc;
    iVar2 = param_1 + 8;
  }
  else if (uVar1 == 1) {
    uVar4 = 5;
    uVar5 = 0xffffffff831cd664;
    iVar2 = param_1 + 0x40;
  }
  else {
    if (2 < uVar1) {
      return;
    }
    uVar4 = 5;
    uVar5 = 0xffffffff831ce7b8;
    iVar2 = param_1 + 0x2c;
  }
  puVar3 = (undefined4 *)fn_822A6C30(iVar2,uVar4,uVar5);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x110) = *puVar3;
    if (*(int *)(param_1 + 0x108) == 3) {
      fn_822A6F38((double)*(float *)(param_1 + 0x528),(double)lbl_821917C0,param_1,
                        param_1 + 0x110);
    }
    else {
      *(undefined4 *)(param_1 + 0x108) = 3;
      fn_822A6F38((double)*(float *)(param_1 + 0x528),(double)lbl_821917C0,param_1,
                        param_1 + 0x110);
      *(undefined4 *)(param_1 + 0x53c) = 1;
    }
    *(undefined4 *)(param_1 + 0x528) = lbl_821CC160;
  }
  return;
}

