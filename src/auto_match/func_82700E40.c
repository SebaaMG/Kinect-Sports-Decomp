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
extern int fn_826CD508();
extern int fn_826F7A80();
extern int fn_826FB5B0();
extern int fn_826FBAE8();
extern unsigned int uRam831f12e0;


void fn_82700E40(int param_1,ulonglong param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  char acStack_50 [80];
  
  if ((((param_2 & 0xff) != 0) && ((*(byte *)(param_1 + 0xac8) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xac8) & 2) == 0)) {
    fn_826CD508(param_1 + 0xacc,0);
    *(undefined1 *)(param_1 + 0xac8) = 0;
  }
  if ((*(byte *)(param_1 + 0xac8) & 1) == 0) {
    acStack_50[0] = '\0';
    if ((*(int *)(param_1 + 0xadc) == 0) ||
       (piVar2 = (int *)fn_826F7A80(param_1), piVar2 == (int *)0x0)) {
      uVar1 = *(uint *)(param_1 + 0x60);
      uVar4 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        iVar3 = uVar1 << 3;
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x5c) + iVar3 + -4);
          acStack_50[1] = 0;
          (**(code **)(*piVar2 + 0xc4))(piVar2,param_1 + 0xacc,acStack_50,param_2,acStack_50 + 1);
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + -8;
        } while (0 < (longlong)uVar4);
      }
    }
    else {
      acStack_50[1] = 0;
      (**(code **)(*piVar2 + 0xc4))(piVar2,param_1 + 0xacc,acStack_50,param_2,acStack_50 + 1);
    }
    if (acStack_50[0] == '\0') {
      fn_826FBAE8(param_1 + 0xacc,0,*(undefined4 *)(param_1 + 0xad0),uRam831f12e0);
    }
    else {
      fn_826FB5B0();
    }
    *(undefined1 *)(param_1 + 0xac8) = 1;
    if ((param_2 & 0xff) != 0) {
      *(undefined1 *)(param_1 + 0xac8) = 3;
    }
    return;
  }
  return;
}

