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
extern unsigned int *auStack_42e;
extern int fn_82281530();
extern int fn_822848B8();
extern int fn_825200A8();
extern int fn_82F691F0();
extern unsigned int lbl_832960A4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82482830(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_42e [1070];
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x14);
  lVar2 = fn_825200A8(uVar4 + 100,(ulonglong)*(uint *)(param_1 + 0x48) + 4);
  iVar5 = 1;
  if (lVar2 == 0) {
    iVar3 = fn_82281530(uVar4);
    iVar6 = 1;
    if (iVar3 == 0) goto LAB_82482878;
  }
  iVar6 = 0;
LAB_82482878:
  iVar3 = *(int *)(param_1 + 0xa4);
  if (iVar3 == 0) {
    iVar6 = 5;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x14);
    if ((iVar1 == 7) || (lbl_832960A4 != 0)) {
      if (*(int *)(param_1 + 0x78) != 0) {
        fn_822848B8();
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
    }
    else if (iVar1 == 5) {
      iVar5 = 0;
      iVar6 = 2;
    }
    else if ((*(int *)(iVar3 + 0x14) == 2) || (*(int *)(iVar3 + 0x14) == 3)) {
      iVar5 = 0;
      iVar6 = 3;
    }
    else if ((iVar1 == 6) && ((int)lVar2 != 0)) {
      iVar6 = 4;
    }
    else {
      iVar6 = 0;
    }
  }
  if ((iVar6 != *(int *)(param_1 + 0x58)) || (iVar5 != *(int *)(param_1 + 0x5c))) {
    if (*(int *)(param_1 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_42e,0,0x1fe);
    }
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x5c) = iVar5;
  }
  return;
}

