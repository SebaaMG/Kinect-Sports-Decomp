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
extern int fn_822315A0();
extern int fn_82242928();
extern int fn_82242B10();
extern int fn_822442F0();
extern int fn_82245758();
extern int fn_82250A18();
extern int fn_82365BD8();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_828ACCE8();
extern int fn_828AE818();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_8329759C;
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297810;


void fn_82350D88(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar4;
  char cVar5;
  undefined8 uVar3;
  ulonglong uVar6;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  bVar2 = false;
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) == '\0') {
    bVar2 = true;
  }
  else {
    iVar4 = lbl_8329759C;
    if (lbl_8329759C == 0) {
      iVar4 = fn_822442F0();
    }
    uVar6 = (ulonglong)lbl_83297810;
    if (uVar6 == 0) {
      uVar6 = fn_82511928();
    }
    fn_825138E0(&iStack_40,uVar6,1);
    if (*(char *)(iVar4 + 0x18) == '\0') {
      if (*(char *)(iVar4 + 0x19) == '\0') {
        if (*(int *)(iVar4 + 4) == 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x400);
          uVar3 = fn_82365BD8(&iStack_38,&iStack_40);
          fn_82242928(iVar4,uVar3,uVar1);
        }
        else {
          fn_82242B10(iVar4);
        }
      }
      else {
        uVar1 = *(undefined4 *)(iStack_40 + 8);
        cVar5 = fn_828ACCE8(uVar1);
        if (cVar5 != '\0') {
          fn_828AE818(uVar1,0x23);
        }
      }
    }
    else {
      fn_82365BD8(&iStack_38,iVar4 + 0xc);
      *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(iStack_38 + 8);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      if (*(int *)(param_1 + 0x404) != 0) {
        fn_82245758(*(undefined4 *)(param_1 + 0x3fc),param_1 + 0x404);
      }
      bVar2 = true;
    }
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  if ((bVar2) && (*(int *)(param_1 + 8) != 1)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}

