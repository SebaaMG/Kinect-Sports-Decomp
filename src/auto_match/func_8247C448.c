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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_82270B70();
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_822847A8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82292D50();
extern int fn_8251F720();
extern int fn_82536590();
extern int fn_8254B438();
extern int fn_8255B1E0();
extern int fn_828094D0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int iStack_7c;
extern unsigned int lbl_82191564;
extern unsigned int lbl_821916FC;
extern float lbl_821954FC;
extern unsigned int lbl_821BD534;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C1E78;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BA8;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8247C448(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined4 auStack_90 [4];
  undefined **ppuStack_80;
  int iStack_7c;
  undefined ***pppuStack_70;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 8) == 6) {
    iVar6 = 2;
  }
  else if (*(int *)(param_1 + 8) == 7) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x90) + 0x30);
  }
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x40) = iVar6;
  *(undefined4 *)(param_1 + 0x48) = 1;
  if (iVar6 == 0) {
    iVar6 = param_1 + 0x30;
  }
  else {
    iVar6 = (iVar6 + 9) * 4 + *(int *)(param_1 + 0x44);
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      fn_822819E0(iVar2,iVar6);
    }
  }
  else {
    fn_82281868(iVar2,iVar6,0);
  }
  pppuStack_70 = &ppuStack_80;
  uStack_50 = 0;
  ppuStack_80 = &lbl_821BD534;
  iStack_7c = param_1 + 0x10;
  uVar1 = fn_822847A8(0,&ppuStack_80,0,auStack_60,2,1);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x40) == 2) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  fn_82292BC0(0,0,0);
  fn_82292C30(0);
  fn_82292D50(1);
  fn_8254B438(*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x8c8));
  if (*(int *)(param_1 + 8) == 3) {
    fn_82864988(auStack_60,0xffffffff821bcf70);
    auStack_90[0] = fn_828647D8();
    fn_82864898(auStack_60);
    fn_82536590(auStack_90,0);
    if (*(int *)(param_1 + 0x9c) != 0) {
      fn_8255B1E0((double)lbl_82191564,*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x844),
                        param_1 + 0x9c,1,0,0,0,1);
    }
  }
  if (*(int *)(param_1 + 8) == 7) {
    if (*(int *)(param_1 + 0x98) != 0) {
      fn_8255B1E0((double)lbl_821CC160,*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x844),
                        param_1 + 0x98,1,0,0,0,1);
    }
  }
  else {
    cVar3 = 'p';
    pcVar4 = "partymode";
    cVar5 = *(char *)(*(int *)(param_1 + 0x44) + 0x34);
    if (cVar5 == 'p') {
      cVar5 = 'p';
      do {
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') goto LAB_8247c684;
        cVar3 = *pcVar4;
        cVar5 = pcVar4[*(int *)(param_1 + 0x44) + 0x7de44390];
      } while (cVar5 == cVar3);
    }
    if (cVar5 == cVar3) {
LAB_8247c684:
      if (*(int *)(param_1 + 0xa0) != 0) {
        iVar2 = fn_82270B70();
        iVar6 = *(int *)(lbl_83296AE0 + 0x6c);
        if (*(int *)(lbl_83296AE0 + 0x6c) == 3) {
          iVar6 = lbl_83296BA8;
        }
        dVar8 = (double)*(float *)(&lbl_831C1E78 + iVar6 * 0xc);
        dVar7 = (double)fn_828094D0((double)(*(float *)(iVar2 + 0x90) * lbl_821954FC));
        *(float *)(param_1 + 0xac) = (float)(dVar8 / (double)(float)(dVar7 * (double)lbl_821916FC));
        uVar1 = fn_8251F720(param_1 + 0xa0,0);
        *(undefined4 *)(param_1 + 0xa4) = uVar1;
      }
    }
  }
  return;
}

