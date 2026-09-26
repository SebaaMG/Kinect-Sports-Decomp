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
extern int fn_822315A0();
extern int fn_822CEFA0();
extern int fn_822CF300();
extern int fn_822CFA38();
extern int fn_822D0570();
extern int fn_82374520();
extern int fn_8288B760();
extern unsigned int iStack_3c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;


void fn_822E3310(double param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  if (*(int *)(*(int *)(param_2 + 0x14) + 0x168) == 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 0x14) + 0x16c);
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 == 0) {
    return;
  }
  iVar5 = *(int *)(param_2 + 0x10);
  lVar7 = (ulonglong)*(uint *)(iVar5 + 0x54) - 3;
  lVar7 = lVar7 - (((ulonglong)*(uint *)(iVar5 + 0x54) - 4) + (ulonglong)(lVar7 == 0));
  if (*(int *)(param_2 + 0x2c) == 0) {
    piVar4 = (int *)fn_82374520(auStack_40,iVar5);
    if (((*piVar4 != 0) || (*(int *)(iVar5 + 0x54) == 2)) ||
       (bVar2 = false, *(int *)(iVar5 + 0x204) != 0)) {
      bVar2 = true;
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    if (!bVar2) goto LAB_822e33fc;
  }
  if (*(int *)(param_2 + 0x30) == 0) {
LAB_822e33e8:
    uVar6 = 0;
  }
  else {
    iVar5 = fn_822CEFA0(*(undefined4 *)(param_2 + 0x14));
    uVar6 = 1;
    if (iVar5 != 0) goto LAB_822e33e8;
  }
  fn_822D0570(param_2,*(undefined4 *)(param_2 + 0x2c),lVar7,uVar6);
LAB_822e33fc:
  fVar1 = (float)((double)*(float *)(param_2 + 0x38) - param_1);
  *(float *)(param_2 + 0x38) = fVar1;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if ((fVar1 <= lbl_821CC160) && (((int)lVar7 == 0 || (*(int *)(param_2 + 0x34) != 0)))) {
    *(undefined4 *)(param_2 + 0x38) = lbl_8218E8E8;
    if ((*(int *)(param_2 + 0x34) == 0) &&
       (iVar5 = fn_822CFA38(*(undefined4 *)(param_2 + 0x14),0), iVar5 == 0)) {
      *(undefined4 *)(param_2 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x30) = 1;
    }
  }
  if ((*(int *)(*(int *)(param_2 + 0x14) + 0x1c8) == 3) &&
     (*(int *)(*(int *)(param_2 + 0x10) + 0x54) == 3)) {
    fn_822CF300(*(int *)(param_2 + 0x14),0);
  }
  return;
}

