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
extern unsigned int *auStack_90;
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_83062E18();
extern int fn_83065C28();
extern int fn_83068358();
extern int fn_83068418();
extern unsigned int lbl_8217E898;
extern unsigned int uStack_68;
extern unsigned int uStack_80;
extern unsigned int uStack_84;


void fn_8306A530(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  char cVar7;
  uint uVar6;
  int *piVar8;
  int *piVar9;
  uint auStack_90 [2];
  undefined **ppuStack_88;
  uint uStack_84;
  uint uStack_80;
  int *piStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  
  do {
    ppuStack_88 = &lbl_8217E898;
    uStack_80 = 0;
    piStack_6c = (int *)0x0;
    piStack_70 = (int *)0x0;
    uStack_68 = 0;
    uStack_84 = fn_83062E18(param_1);
    piVar8 = (int *)0x0;
    uStack_80 = uStack_84;
    uVar6 = uStack_84;
    if (uStack_84 == 0) {
LAB_8306a60c:
      bVar4 = true;
    }
    else {
      do {
        auStack_90[0] = uVar6;
        iVar1 = *(int *)(auStack_90[0] + 0x34);
        iVar2 = *(int *)(auStack_90[0] + 0x30);
        uStack_80 = auStack_90[0];
        if ((((iVar1 != 0) && (iVar2 != 0)) && (cVar7 = fn_83068418(iVar1), cVar7 != '\0')) &&
           ((cVar7 = fn_83068418(iVar2), cVar7 != '\0' &&
            (*(int *)(iVar1 + 0x38) == *(int *)(iVar2 + 0x38))))) {
          fn_8257A9F0(&piStack_70,auStack_90);
        }
        uVar6 = (*(code *)ppuStack_88[1])(&ppuStack_88,uStack_80);
        piVar5 = piStack_6c;
        piVar8 = piStack_70;
      } while (uVar6 != 0);
      uStack_80 = 0;
      if (piStack_70 == piStack_6c) goto LAB_8306a60c;
      bVar4 = false;
      uStack_80 = 0;
      piVar9 = piStack_70;
      do {
        iVar1 = *piVar9;
        iVar2 = *(int *)(iVar1 + 0x34);
        uVar6 = *(uint *)(iVar1 + 0x30);
        fn_83068358(iVar1 + 0x44,iVar2 + 0x44);
        fn_83068358(iVar1 + 0x44,(ulonglong)uVar6 + 0x44);
        uVar3 = *(undefined4 *)(iVar2 + 0x38);
        *(undefined4 *)(iVar1 + 0x34) = 0;
        *(undefined4 *)(iVar1 + 0x30) = 0;
        *(undefined4 *)(iVar1 + 0x38) = uVar3;
        fn_83065C28(iVar2);
        fn_83065C28((ulonglong)uVar6);
        piVar9 = piVar9 + 1;
      } while (piVar9 != piVar5);
    }
    if (piVar8 != (int *)0x0) {
      fn_8265CA20(piVar8);
    }
    if (bVar4) {
      return;
    }
  } while( true );
}

