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
extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BC24F0();
extern int fn_82BC5580();
extern int fn_82BC7368();
extern unsigned int lbl_820DF0C4;
extern unsigned int lbl_820DF0D0;


void fn_82BADEF0(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  fn_82BC7368(*(undefined4 *)(param_2 + 100));
  if (**(char **)(param_1 + 0x10) == '\0') {
    iVar3 = *(int *)(param_2 + 100);
    uVar5 = *(uint *)(iVar3 + 4) - 1;
    if (uVar5 < *(uint *)(iVar3 + 4)) {
      piVar6 = (int *)(uVar5 * 4 + *(int *)(iVar3 + 8));
    }
    else {
      piVar6 = (int *)0x0;
    }
    bVar2 = true;
    if ((*piVar6 == 0) && (bVar2 = false, *(int *)(iVar3 + 4) != 1)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df980,0xffffffff820df268,0x27b);
    }
    if (bVar2) {
      iVar3 = fn_82BC24F0(0x58,*(undefined4 *)(param_1 + 0xc));
      iVar4 = fn_82BA92B0(param_2);
      if (iVar4 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df970,0xffffffff820df268,0x282);
      }
      uVar1 = *(undefined4 *)(iVar4 + 0x38);
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x38) = uVar1;
      *(undefined4 *)(iVar3 + 0x80) = lbl_820DF0C4;
      fn_82BA05E8(iVar3,1,iVar4);
      *(undefined4 *)(iVar3 + 0x84) = lbl_820DF0D0;
      fn_82BC5580(param_1,iVar3);
    }
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(undefined1 *)(param_1 + 0x7c));
  return;
}

