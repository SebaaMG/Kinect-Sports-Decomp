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
extern unsigned int *auStack_7e;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82280850();
extern int fn_82281530();
extern int fn_822815C8();
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_822A5480();
extern int fn_82486958();
extern int fn_82672C20();
extern int fn_82F691F0();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8247BC60(double param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iStack_a0;
  int iStack_9c;
  longlong lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double dStack_88;
  undefined2 uStack_80;
  undefined1 auStack_7e [126];
  
  *(float *)(param_2 + 0x7c) = (float)(param_1 + (double)*(float *)(param_2 + 0x7c));
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_822815C8();
    if (*(int *)(param_2 + 0x74) != 0) {
      uStack_80 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7e,0,0x3e);
    }
    if ((*(int *)(param_2 + 0x30) == 2) && (*(int *)(param_2 + 0x50) != 0)) {
      iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x10);
      if (*(int *)(iVar1 + 0x6c) == 0) {
        if ((*(int *)(iVar1 + 0x44) == 1) || (*(int *)(iVar1 + 0x44) == 0)) {
          piVar2 = (int *)(iVar1 + 0x4c);
        }
        else {
          piVar2 = (int *)(iVar1 + 0x54);
        }
        iVar1 = *piVar2;
      }
      else {
        iVar1 = *(int *)(iVar1 + 100);
      }
      if (iVar1 != 0) {
        fn_82279C58(&iStack_a0);
        if (iStack_a0 != 0) {
          iVar1 = fn_82486958(*(undefined4 *)(param_2 + 0x34));
          uStack_90 = 0;
          uStack_8c = 0;
          fn_82273CD8(&uStack_90,3);
          lStack_98 = (longlong)(iVar1 + 1);
          dStack_88 = (double)lStack_98;
          fn_82672C20(iStack_a0,0xffffffff821bd4f0,&uStack_90,1);
          *(undefined4 *)(param_2 + 0x50) = 0;
          fn_82273C88(&uStack_90);
        }
        if (iStack_9c != 0) {
          fn_822315A0();
        }
      }
    }
  }
  if (((*(int *)(param_2 + 0x78) != 0) && (param_4 != 0)) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x84), iVar1 != 0)) {
    if (*(int *)(*(int *)(param_2 + 0x78) + 0x100) < 0x33) {
      *(undefined1 *)(iVar1 + 0xb0) = 0;
    }
    else {
      *(undefined1 *)(iVar1 + 0xb0) = 1;
    }
  }
  if ((*(int *)(param_2 + 0x3c) != 0) &&
     (iVar1 = fn_82281530(*(undefined4 *)(param_2 + 0x14)), iVar1 == 0)) {
    if (*(int *)(param_2 + 0x38) != 0) {
      iVar1 = *(int *)(param_2 + 0x14);
      fn_82280850(*(undefined4 *)(iVar1 + 0x10));
      if (*(int *)(iVar1 + 0x24) != 0) {
        fn_822A5480(*(int *)(iVar1 + 0x24),0xffffffff820e975c);
      }
      if (*(int *)(iVar1 + 0x28) != 0) {
        fn_822A5480(*(int *)(iVar1 + 0x28),0xffffffff820e975c);
      }
      if (*(int *)(param_2 + 0x74) != 0) {
        fn_822848B8();
        *(undefined4 *)(param_2 + 0x74) = 0;
      }
    }
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    fn_82284B08(param_1);
  }
  return;
}

