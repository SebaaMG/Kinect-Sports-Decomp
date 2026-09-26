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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82D81240();
extern int fn_82D82E28();
extern int fn_82D85E48();
extern int fn_82D86660();
extern int fn_82D88AE0();
extern int fn_82D890C8();
extern int fn_82DA6530();
extern unsigned int uStack_34;


void fn_82D89460(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(param_2 + 0x14));
      if (iVar1 != 0) {
        fn_82D890C8(auStack_40,param_1,iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_2 + 0x18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + *(int *)(param_2 + 0x20)) != 0) {
        if (*(int *)(param_1 + 0x94) == 0) {
          fn_82D88AE0(param_1);
        }
        else {
          auStack_38[0] = 0xb;
          uStack_34 = *(undefined4 *)(iVar4 + *(int *)(param_2 + 0x20));
          fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_38);
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_2 + 0x24));
  }
  iVar3 = 0;
  if (*(int *)(param_2 + 0xc) < 1) {
LAB_82d89574:
    fn_82D85E48(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  }
  else {
    piVar2 = *(int **)(param_2 + 8);
    do {
      if (*piVar2 == 0) {
        if (iVar3 == -1) goto LAB_82d89574;
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 0xc)) {
          iVar4 = 0;
          do {
            iVar1 = *(int *)(*(int *)(param_2 + 8) + iVar4);
            if (iVar1 != 0) {
              fn_82D81240(auStack_40,param_1,iVar1);
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < *(int *)(param_2 + 0xc));
        }
        goto LAB_82d895d0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_2 + 0xc));
    fn_82D85E48(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  }
LAB_82d895d0:
  iVar3 = 0;
  if (*(int *)(param_2 + 0x30) < 1) {
LAB_82d89620:
    fn_82D86660(param_1,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
  }
  else {
    piVar2 = *(int **)(param_2 + 0x2c);
    do {
      if (*piVar2 == 0) {
        if (iVar3 != -1) {
          iVar3 = 0;
          if (*(int *)(param_2 + 0x30) < 1) {
            return;
          }
          iVar4 = 0;
          do {
            iVar1 = *(int *)(iVar4 + *(int *)(param_2 + 0x2c));
            if (iVar1 != 0) {
              fn_82D82E28(param_1,iVar1);
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (iVar3 < *(int *)(param_2 + 0x30));
          return;
        }
        goto LAB_82d89620;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_2 + 0x30));
    fn_82D86660(param_1,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
  }
  return;
}

