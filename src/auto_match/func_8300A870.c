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
extern int fn_82FEC018();
extern int fn_82FEC0A0();
extern int fn_82FEC350();
extern int fn_82FEC4C0();
extern int fn_8300A140();
extern int fn_8300A298();
extern unsigned int lbl_832645A8;


void fn_8300A870(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 != 0) {
    uVar4 = 0;
    iVar3 = iVar5;
    do {
      if (*(int *)(iVar3 + 0xc) != -1) {
        bVar2 = true;
        goto LAB_8300a8bc;
      }
      uVar4 = uVar4 + 0xc;
      iVar3 = uVar4 + iVar5;
    } while (uVar4 < 0x30);
  }
  bVar2 = false;
LAB_8300a8bc:
  if (bVar2) {
    if (param_1 == lbl_832645A8) {
      fn_8300A140(param_1);
      fn_82FEC018();
      fn_8300A298(param_1);
      fn_82FEC0A0();
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      fn_8300A140(param_1);
      fn_82FEC350(uVar1);
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      fn_8300A298(param_1);
      fn_82FEC4C0(uVar1);
    }
  }
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 != *(int *)(param_1 + 0x4c)) {
    do {
      if (*(short *)(*(int **)(iVar5 + 4) + 6) != 0) {
        (**(code **)(**(int **)(iVar5 + 4) + 0x50))();
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 != *(int *)(param_1 + 0x4c));
  }
  return;
}

