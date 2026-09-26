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
extern int fn_82A1E658();
extern int fn_82A2A108();


undefined8 fn_830B3368(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint auStack_30 [12];
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (uint *)0x0)) {
    uVar1 = 0xffffffff80004003;
  }
  else if ((*(int *)(param_1 + 0xec) == 0) || (*(int *)(param_1 + 0xf0) == 0)) {
    uVar1 = 0xffffffff8004000a;
  }
  else {
    auStack_30[0] = *(uint *)(param_1 + 0xf8);
    if (auStack_30[0] == 0) {
      fn_82A1E658();
      uVar1 = 0xffffffff80040001;
    }
    else {
      if (*(uint *)(param_1 + 0xf4) <= auStack_30[0]) {
        auStack_30[0] = *(uint *)(param_1 + 0xf4);
      }
      iVar2 = fn_82A2A108(*(int *)(param_1 + 0xec),*(int *)(param_1 + 0xf0),auStack_30[0],
                                auStack_30,0);
      if (iVar2 == 1) {
        *param_2 = *(undefined4 *)(param_1 + 0xf0);
        *param_3 = auStack_30[0];
      }
      iVar2 = *(uint *)(param_1 + 0xf8) - auStack_30[0];
      if (*(uint *)(param_1 + 0xf8) < auStack_30[0]) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0xf8) = iVar2;
      uVar1 = 0;
    }
  }
  return uVar1;
}

