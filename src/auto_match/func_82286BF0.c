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
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225D168();
extern int fn_82268330();
extern int fn_82280850();
extern int fn_822848B8();
extern int fn_82286E18();
extern int fn_82286EA8();
extern int fn_82286F08();
extern int fn_822889C0();
extern int fn_8228B6A8();
extern int fn_8228BE30();
extern int fn_8229E090();
extern int fn_822A5480();
extern int fn_82359C18();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_8265CA20();


void fn_82286BF0(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [64];
  
  fn_822889C0(auStack_40,param_1);
  fn_8228B6A8();
  if (*(int *)(param_1 + 0x60c) != 0) {
    fn_82286EA8();
    *(undefined4 *)(param_1 + 0x60c) = 0;
  }
  if (*(int *)(param_1 + 0x610) != 0) {
    fn_82286EA8();
    *(undefined4 *)(param_1 + 0x610) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x614);
  if (iVar6 != 0) {
    fn_82268330(iVar6);
    fn_8265CA20(iVar6);
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  if (*(int *)(param_1 + 0x618) != 0) {
    fn_82286F08();
    *(undefined4 *)(param_1 + 0x618) = 0;
  }
  piVar4 = (int *)(param_1 + 0x6c0);
  piVar5 = (int *)(param_1 + 0x624);
  lVar3 = 4;
  do {
    if (piVar5[-2] != 0) {
      fn_82286E18(piVar5[-2],1);
    }
    puVar1 = (undefined4 *)*piVar5;
    piVar5[-2] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *piVar5 = 0;
    if (*piVar4 != 0) {
      piVar5[-1] = 0;
      piVar5[1] = -1;
      fn_82529320(*piVar4,0);
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x10;
    piVar5 = piVar5 + 6;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0x11f4) != 0) {
    fn_822848B8();
    *(undefined4 *)(param_1 + 0x11f4) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x67c);
  if (iVar6 != 0) {
    fn_8228BE30(iVar6);
    fn_8265CA20(iVar6);
    *(undefined4 *)(param_1 + 0x67c) = 0;
  }
  uVar2 = fn_8225C590();
  fn_8225D168(uVar2,*(undefined4 *)(param_1 + 0x11fc));
  fn_82280850(*(undefined4 *)(param_1 + 0x69c));
  if (*(int *)(param_1 + 0x11f8) != 0) {
    fn_8229E090(*(int *)(param_1 + 0x11f8),0,0);
    *(undefined4 *)(param_1 + 0x11f8) = 0;
  }
  if (*(int *)(param_1 + 0x7ac) != 0) {
    fn_822A5480(*(int *)(param_1 + 0x7ac),0xffffffff820e975c);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    fn_822A5480(*(int *)(param_1 + 0x7b0),0xffffffff820e975c);
  }
  if (*(int *)(param_1 + 0x1224) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1224) = 0;
  }
  if (*(int *)(param_1 + 0x1228) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1228) = 0;
  }
  if (*(int *)(param_1 + 0x122c) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x122c) = 0;
    *(undefined4 *)(param_1 + 0x1234) = 0;
  }
  if (*(int *)(param_1 + 0x1230) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1230) = 0;
    *(undefined4 *)(param_1 + 0x1238) = 0;
  }
  lVar3 = 3;
  iVar6 = param_1 + 0x7c8;
  do {
    iVar6 = iVar6 + -0x40;
    fn_82230300(iVar6,1,0);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  fn_82359C18(param_1 + 0x680);
  return;
}

