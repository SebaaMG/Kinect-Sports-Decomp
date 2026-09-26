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
extern unsigned int *auStack_40;
extern int fn_82FAB9C0();
extern int fn_83004F10();
extern int fn_83004FC0();
extern int fn_83016C90();
extern int fn_8301A448();
extern int fn_8303BB18();
extern int fn_8303BBF0();
extern unsigned int iStack_38;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642EC;


undefined8 fn_8303BCB0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piVar7;
  undefined1 auStack_40 [8];
  int iStack_38;
  
  iVar1 = *(int *)(param_2 + 0x34);
  uVar3 = *(uint *)(param_1 + 0x14) >> 8;
  if (uVar3 < 0x80022) {
    if (uVar3 == 0x80021) {
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        for (puVar2 = (undefined4 *)**(undefined4 **)(iVar1 + 4); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,puVar2[1]);
          if (piVar4 != (int *)0x0) {
            fn_83004FC0(piVar4,*(undefined4 *)(param_1 + 0x2c),iVar1);
            (**(code **)(*piVar4 + 8))(piVar4);
          }
        }
      }
    }
    else if (uVar3 < 0x80012) {
      if (uVar3 < 0x80010) {
        if (((0x7000f < uVar3) && (uVar3 < 0x70012)) &&
           (piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,
                                              *(undefined4 *)(param_1 + 0x10)), piVar4 != (int *)0x0
           )) {
          if (*(char *)(param_1 + 0x28) == '\0') {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 0x2c);
          }
          fn_83004F10(piVar4,uVar5,*(undefined4 *)(param_1 + 0x2c),iVar1,0);
          (**(code **)(*piVar4 + 8))(piVar4);
        }
      }
      else {
        piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,
                                          *(undefined4 *)(param_1 + 0x10));
        if (piVar4 != (int *)0x0) {
          fn_83004FC0(piVar4,*(undefined4 *)(param_1 + 0x2c),iVar1);
          (**(code **)(*piVar4 + 8))(piVar4);
        }
      }
    }
    else if (uVar3 == 0x80020) {
      fn_8303BB18(param_1,(ulonglong)lbl_832642EC + 4);
      fn_83016C90(auStack_40,(ulonglong)lbl_832642EC + 0x24);
      while (iStack_38 != 0) {
        fn_8303BB18(param_1,*(undefined4 *)(*(int *)(iStack_38 + 8) + 4));
        fn_8301A448(auStack_40);
      }
    }
  }
  else if ((ulonglong)uVar3 - 0x80040 == 0) {
    fn_8303BBF0(param_1,(ulonglong)lbl_832642EC + 4);
    fn_83016C90(auStack_40,(ulonglong)lbl_832642EC + 0x24);
    while (iStack_38 != 0) {
      fn_8303BBF0(param_1,*(undefined4 *)(*(int *)(iStack_38 + 8) + 4));
      fn_8301A448(auStack_40);
    }
  }
  else if ((((ulonglong)uVar3 - 0x80040 & 0xffffffff) == 1) &&
          (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0)) {
    for (puVar2 = (undefined4 *)**(undefined4 **)(iVar1 + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,puVar2[1]);
      if (piVar4 != (int *)0x0) {
        piVar7 = *(int **)(param_1 + 0x1c);
        bVar6 = false;
        if (piVar7 != *(int **)(param_1 + 0x20)) {
          do {
            if (*piVar7 == piVar4[3]) {
              bVar6 = true;
              break;
            }
            piVar7 = piVar7 + 1;
          } while (piVar7 != *(int **)(param_1 + 0x20));
        }
        if (!bVar6) {
          fn_83004FC0(piVar4,*(undefined4 *)(param_1 + 0x2c),0);
        }
        (**(code **)(*piVar4 + 8))(piVar4);
      }
    }
  }
  return 1;
}

