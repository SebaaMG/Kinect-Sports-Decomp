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
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_8265C9E0();
extern int fn_82881F50();
extern int fn_82882290();
extern int fn_82882300();
extern int fn_82882370();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289DB88();
extern int fn_8289DBF0();
extern int fn_828ACC50();
extern int fn_828ACCE8();
extern int fn_828AEB08();
extern int fn_828AEDA8();
extern int fn_828AF4F8();
extern int fn_828BE158();
extern int fn_828C0038();
extern int fn_828C8058();
extern int fn_828D8B60();
extern int fn_828D8FD8();
extern int fn_828D9A48();
extern int fn_828DA2A8();
extern int fn_82BA02A8();
extern unsigned int lbl_82024B7C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_828AF890(int param_1)

{
  undefined4 uVar1;
  int *piVar5;
  longlong lVar2;
  char cVar7;
  int iVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  
  fn_82BA02A8();
  piVar5 = (int *)fn_825089A0();
  lVar2 = (**(code **)(*piVar5 + 0xc))();
  if ((((*(int *)(param_1 + 0x88) != 2) &&
       (cVar7 = fn_8289DB88((double)lbl_82024B7C,param_1), cVar7 != '\0')) &&
      (cVar7 = fn_828ACC50(*(undefined4 *)(param_1 + 0x50)), cVar7 == '\0')) &&
     (999 < (ulonglong)(lVar2 - *(longlong *)(param_1 + 0xc0)))) {
    iVar6 = fn_8265C9E0(0x80);
    if (iVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828AEB08();
    }
    fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar4 = fn_82897BD0(param_1);
    fn_828BE158(uVar1,uVar3,uVar4,0);
    *(longlong *)(param_1 + 0xc0) = lVar2;
  }
  cVar7 = fn_828ACCE8(*(undefined4 *)(param_1 + 0x50));
  if ((cVar7 != '\0') && (*(int *)(param_1 + 0x88) == 1)) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar3 = fn_82897BD0(param_1);
    fn_828DA2A8(uVar1,uVar3);
  }
  iVar6 = fn_82897BD0(param_1);
  if (iVar6 == -1) {
LAB_828af9ec:
    iVar6 = fn_82897BD0(param_1);
    if (iVar6 != -1) {
      fn_82897BD0(param_1);
      cVar7 = fn_82882370();
      if (cVar7 != '\0') {
        if (*(char *)(param_1 + 0xb3) != '\0') {
          fn_82897BD0(param_1);
          fn_82881F50();
        }
        *(undefined1 *)(param_1 + 0xb3) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
    }
  }
  else {
    fn_82897BD0(param_1);
    cVar7 = fn_82882290();
    if (cVar7 == '\0') goto LAB_828af9ec;
    if ((*(int *)(param_1 + 0x88) != 2) &&
       (cVar7 = fn_828D9A48(*(undefined4 *)(param_1 + 0x50)), cVar7 == '\0')) {
      fn_828AEDA8(param_1);
    }
  }
  iVar6 = fn_8289D8D0(*(undefined4 *)(param_1 + 0x50));
  if (iVar6 == 0) {
    return;
  }
  cVar7 = fn_828D9A48(*(undefined4 *)(param_1 + 0x50));
  if (cVar7 != '\0') {
    return;
  }
  cVar7 = fn_8289DAD0(iVar6);
  if (cVar7 == '\0') {
    fn_828C0038(3);
    cVar7 = fn_8289DBF0(param_1);
    if (cVar7 == '\0') {
      fn_828C0038(2);
      cVar7 = fn_8289DBF0(param_1);
      if (cVar7 != '\0') {
        fn_828AEDA8();
        fn_828AF4F8(param_1);
        return;
      }
      cVar7 = fn_8289DAD0(param_1);
      if (cVar7 != '\0') {
        fn_828C0038(0);
        cVar7 = fn_8289DBF0(param_1);
        if (cVar7 != '\0') goto LAB_828afb08;
      }
      *(undefined1 *)(param_1 + 0xb0) = 0;
      return;
    }
    if (*(char *)(param_1 + 0xb2) != '\0') {
      return;
    }
    cVar7 = fn_8289DAD0(param_1);
    if (cVar7 != '\0') {
      if ((*(int *)(iVar6 + 4) != 1) ||
         (cVar7 = fn_828D8FD8(*(undefined4 *)(iVar6 + 100),0), cVar7 == '\0')) {
        fn_828C8058(*(undefined4 *)(param_1 + 0x50),0xc);
        *(undefined1 *)(param_1 + 0xb2) = 1;
        return;
      }
      goto LAB_828afab4;
    }
  }
  else {
    fn_828C0038(1);
    cVar7 = fn_8289DBF0(param_1);
    if (cVar7 == '\0') {
      fn_828C0038(0);
      cVar7 = fn_8289DBF0(param_1);
      if (cVar7 == '\0') {
        return;
      }
      iVar6 = fn_82897BD0(param_1);
      if (iVar6 == -1) {
        return;
      }
      fn_82897BD0(param_1);
      cVar7 = fn_82882300();
      if (cVar7 != '\0') {
        return;
      }
LAB_828afb08:
      fn_828AEDA8(param_1);
      return;
    }
    if (*(char *)(param_1 + 0xb2) != '\0') {
      return;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = fn_823AA970(param_1);
  fn_828D8B60(uVar1,0,uVar3);
LAB_828afab4:
  *(undefined1 *)(param_1 + 0xb2) = 1;
  return;
}

