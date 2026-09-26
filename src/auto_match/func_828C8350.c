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
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289DC58();
extern int fn_8289EEE0();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_828AECC0();
extern int fn_828BDDA0();
extern int fn_828BE158();
extern int fn_828C8300();
extern int fn_828D8FD8();
extern int fn_828D9A48();
extern int fn_82A4AAA8();
extern unsigned int iStack0000002c;
extern unsigned int lbl_82025658;
extern unsigned int lbl_82025660;
extern unsigned int stack0x0000002c;


void fn_828C8350(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar2;
  char cVar8;
  undefined4 *puVar7;
  int iStack0000002c;
  int aiStack_60 [24];
  
  iStack0000002c = (int)param_4;
  piVar3 = (int *)fn_8289F2E0();
  piVar4 = (int *)fn_8289F350(param_1,param_4);
  if (3 < (param_3 & 0xffffffff)) {
    return;
  }
  if ((int)param_3 != 0) {
    if (param_3 == 1) {
      fn_8289D8D0(param_1);
      cVar8 = fn_8289DAD0();
      if (cVar8 == '\0') {
        return;
      }
      (**(code **)(*piVar3 + 0xc))(piVar3);
      iVar5 = fn_82A4AAA8();
      if (iVar5 == 2) {
        return;
      }
      aiStack_60[0] = **(int **)(param_1 + 0x230);
      if ((int *)aiStack_60[0] != *(int **)(param_1 + 0x230)) {
        do {
          piVar4 = *(int **)(aiStack_60[0] + 0x10);
          if (piVar4 != piVar3) {
            puVar7 = (undefined4 *)fn_8265C9E0(0x90);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              uVar6 = fn_823AA970(piVar3);
              fn_828BDDA0(puVar7);
              puVar7[0x20] = param_5;
              puVar7[0x22] = uVar6;
              *puVar7 = &lbl_82025660;
              puVar7[0x14] = &lbl_82025658;
              puVar7[0x21] = 3;
            }
            fn_82886518(puVar7,0xffffffffffffffff,0xffffffffffffffff);
            uVar2 = fn_82897BD0(piVar4);
            fn_828BE158(param_1,puVar7,uVar2,0);
          }
          fn_82381BC0(aiStack_60);
        } while (aiStack_60[0] != *(int *)(param_1 + 0x230));
      }
      uVar2 = (**(code **)(*piVar3 + 0xc))(piVar3);
      fn_828AECC0(uVar2,2);
      puVar7 = (undefined4 *)fn_8265C9E0(0x90);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar6 = fn_823AA970(piVar3);
        fn_828BDDA0(puVar7);
        puVar7[0x20] = param_5;
        puVar7[0x22] = uVar6;
        *puVar7 = &lbl_82025660;
        puVar7[0x14] = &lbl_82025658;
        puVar7[0x21] = 2;
      }
      fn_82886518(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      uVar2 = fn_82897BD0(piVar3);
      fn_828BE158(param_1,puVar7,uVar2,0);
      return;
    }
    if (param_3 == 2) {
      fn_8289DC58(piVar3,1);
      return;
    }
    if (piVar4 != (int *)0x0) {
      if (*(char *)((int)piVar4 + 0x26) != '\0') {
        *(undefined4 *)(param_1 + 0xb0) = param_5;
        *(undefined1 *)(param_1 + 0xac) = 1;
        return;
      }
      cVar8 = fn_828D9A48(param_1);
      if (cVar8 != '\0') {
        return;
      }
      puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
      fn_828AECC0(puVar7,2);
      fn_823AA970(puVar7);
      if (puVar7 == (undefined4 *)0x0) {
        return;
      }
      (**(code **)*puVar7)(puVar7,1);
      return;
    }
    fn_828C8300(aiStack_60,param_1 + 0x268,&stack0x0000002c);
    return;
  }
  fn_8289EEE0(param_1);
  iVar5 = fn_823AA970();
  if ((int)param_4 != iVar5) {
    fn_8289EEE0(param_1);
    iVar5 = fn_823AA970();
    bVar1 = false;
    if (iVar5 != -1) goto LAB_828c83e8;
  }
  bVar1 = true;
LAB_828c83e8:
  if (((bVar1) && (cVar8 = fn_828D9A48(param_1), cVar8 == '\0')) &&
     ((iVar5 = fn_8289D8D0(param_1), iVar5 == 0 ||
      ((*(int *)(iVar5 + 4) != 1 ||
       (cVar8 = fn_828D8FD8(*(undefined4 *)(iVar5 + 100),1), cVar8 == '\0')))))) {
    *(undefined4 *)(param_1 + 0xb0) = 9;
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  return;
}

