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
extern int fn_828F5960();
extern int fn_828F6FA8();
extern int fn_828FA8D8();
extern unsigned int lbl_8315BB84;
extern unsigned int uStack_21;


void fn_82980A08(int param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined **ppuVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_120 [255];
  undefined1 uStack_21;
  
  pcVar8 = "syntax error";
  pcVar7 = param_2;
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar8;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 != cVar2) {
    fn_828F5960(acStack_120,0x100,param_2);
    uStack_21 = 0;
    pcVar7 = acStack_120;
    uVar4 = 0xffffffff821c4da8;
    uVar3 = 0;
LAB_82980be8:
    fn_828FA8D8((ulonglong)*(uint *)(param_1 + 4) + 0x18,param_1 + 0x28,uVar3,uVar4,pcVar7);
    goto LAB_82980bf4;
  }
  if (*(int *)(param_1 + 0x48) != 0) goto LAB_82980bf4;
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    uVar3 = 0xffffffff820298a8;
    break;
  case 1:
    iVar5 = param_1 + 0x30;
    goto LAB_82980ae0;
  case 2:
  case 3:
  case 4:
    uVar3 = 0xffffffff8204df5c;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
    uVar3 = 0xffffffff8204df4c;
    break;
  case 9:
    iVar5 = *(int *)(param_1 + 0x30);
LAB_82980ae0:
    fn_828F6FA8(acStack_120,0x100,0xffffffff8202989c,iVar5);
    goto LAB_82980b50;
  case 10:
    uVar3 = 0xffffffff8202982c;
    break;
  default:
    uVar3 = 0xffffffff8202980c;
    break;
  case 0xc:
    uVar3 = 0xffffffff82029820;
    break;
  case 0xd:
    uVar3 = 0xffffffff82029814;
  }
  fn_828F6FA8(acStack_120,0x100,uVar3,param_3);
LAB_82980b50:
  fn_828FA8D8((ulonglong)*(uint *)(param_1 + 4) + 0x18,(int *)(param_1 + 0x28),3000,
                    0xffffffff8204df30,acStack_120);
  if ((*(int *)(param_1 + 0x28) == 9) &&
     (ppuVar6 = &lbl_8315BB84, lbl_8315BB84 != (undefined *)0x0)) {
    pcVar9 = *(char **)(param_1 + 0x30);
    pcVar8 = lbl_8315BB84;
    pcVar7 = lbl_8315BB84;
LAB_82980b9c:
    do {
      cVar1 = *pcVar9;
      cVar2 = *pcVar8;
      if (cVar1 != '\0') {
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
        if (cVar1 == cVar2) goto LAB_82980b9c;
      }
      if (cVar1 == cVar2) {
        uVar3 = 3000;
        uVar4 = 0xffffffff8204de90;
        goto LAB_82980be8;
      }
      ppuVar6 = ppuVar6 + 1;
      pcVar8 = *ppuVar6;
      pcVar9 = *(char **)(param_1 + 0x30);
      pcVar7 = pcVar8;
    } while (pcVar8 != (char *)0x0);
  }
LAB_82980bf4:
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}

