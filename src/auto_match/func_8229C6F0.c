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
extern unsigned int *auStack_230;
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_8229C290();
extern int fn_8229CAD0();
extern int fn_8229CB40();
extern int fn_82358FD8();
extern int fn_8249ABC0();
extern int fn_828AAF70();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


void fn_8229C6F0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_230 [560];
  
  if (param_3 != 0) {
    iVar4 = fn_8249ABC0();
    piVar2 = *(int **)(iVar4 + 0x1c);
    piVar2[0x34] = param_2;
    piVar2[9] = 1;
    *(undefined4 *)(*piVar2 + 0x10) = 0;
    if (*(int *)(iVar4 + 0x70) != 0) {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x70) + 0xd54);
      iVar3 = *(int *)(iVar4 + 0x14);
      if (((iVar3 != 0) && (*(int *)(iVar4 + 0x18) == 0)) &&
         (piVar2 = *(int **)(iVar3 + 0x18), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x84))();
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  bVar1 = *(byte *)(iVar4 + 4);
  iVar4 = fn_8225F160();
  lVar6 = (ulonglong)*(uint *)(iVar4 + 0x40) - 2;
  if ((lVar6 - (((ulonglong)*(uint *)(iVar4 + 0x40) - 3) + (ulonglong)(lVar6 == 0)) &
      (ulonglong)bVar1) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x4c) + 0x84);
    if (piVar2 != (int *)0x0) {
      lVar6 = (**(code **)(*piVar2 + 8))();
      fn_828AAF70(lVar6 + 0x48,1);
    }
    if (lbl_821CC160 < *(float *)(param_1 + 0x18)) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x4c) + 0x84);
      if (piVar2 == (int *)0x0) {
        bVar7 = true;
      }
      else {
        iVar4 = (**(code **)(*piVar2 + 8))();
        cVar5 = (**(code **)(*(int *)(iVar4 + 0x9c) + 0x3c))();
        bVar7 = cVar5 != '\0';
      }
      if (!bVar7) {
        if (*(int *)(param_1 + 0x20) != 0) {
          return;
        }
        fn_82358FD8(*(undefined4 *)(param_1 + 0x4c),auStack_230,0x100,0xffffffff821aaf94);
        if (*(int *)(param_1 + 0x10) == 0) {
          fn_8229CAD0(param_1,auStack_230);
        }
        else {
          fn_8229CB40(param_1,auStack_230,auStack_230);
        }
        *(undefined4 *)(param_1 + 0x20) = 1;
        return;
      }
    }
  }
  fn_8229C290(param_1);
  return;
}

