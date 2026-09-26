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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82511928();
extern int fn_82513728();
extern int fn_8251A108();
extern int fn_8251A6C0();
extern int fn_8255BA48();
extern int fn_828ACC40();
extern int fn_828AD0F0();
extern int fn_828AD188();
extern int fn_828AD4A0();
extern int fn_828AE818();
extern int fn_828C1DD8();
extern int fn_828C1DE0();
extern int fn_828C4258();
extern unsigned int iStack_5c;
extern unsigned int lbl_83297810;
extern unsigned int stack0x00000000;


undefined8 fn_82520EB0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  int *piVar5;
  undefined8 uVar3;
  int iVar6;
  char cVar7;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int aiStack_58 [2];
  undefined1 auStack_50 [80];
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    if (param_1[0x16] != 0) {
      return 1;
    }
    iVar4 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar4 = fn_82511928();
    }
    if (*(int *)(iVar4 + 0x28) != 0) {
      return 1;
    }
    iVar4 = lbl_83297810;
    if (lbl_83297810 == 0) {
      iVar4 = fn_82511928();
    }
    piVar5 = (int *)fn_82513728(&stack0x00000000 + -0x60,iVar4,param_1[2]);
    iVar6 = 0;
    iVar4 = 0;
    if ((int *)(&stack0x00000000 + -0x58) != piVar5) {
      iVar4 = piVar5[1];
      piVar5[1] = 0;
      iVar6 = *piVar5;
      *piVar5 = 0;
    }
    iVar1 = param_1[0x17];
    param_1[0x17] = iVar4;
    param_1[0x16] = iVar6;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    if (param_1[0x14] != 0) {
      uVar2 = *(undefined4 *)(param_1[0x14] + 0xd48);
      uVar3 = fn_82365BD8(&stack0x00000000 + -0x58,param_1 + 0x16);
      fn_8255BA48(uVar2,uVar3);
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if ((param_1[0x16] != 0) && (*(char *)(param_1 + 1) != '\0')) {
    iVar4 = *(int *)(param_1[0x16] + 8);
    iVar6 = fn_828C1DD8(iVar4);
    if (*param_1 == iVar6) {
      piVar5 = *(int **)(param_1[0x16] + 0x18);
      if (*(char *)((int)param_1 + 0x4d) == '\0') {
        if (*(char *)(param_1 + 0x13) == '\0') {
          (**(code **)(*piVar5 + 4))();
        }
        else {
          (**(code **)(*piVar5 + 4))();
          fn_8251A108(piVar5 + 4,param_1 + 3);
        }
        *(undefined1 *)((int)param_1 + 0x4d) = 1;
      }
      else {
        cVar7 = (**(code **)(*piVar5 + 0xc))(piVar5);
        if (cVar7 == '\0') {
          iVar4 = piVar5[3];
          if (piVar5[0x14] == 2) {
            fn_8251A6C0(&stack0x00000000 + -0x50,iVar4);
            param_1[0x18] = iVar4;
            *(undefined1 *)(param_1 + 1) = 0;
            fn_82230300(&stack0x00000000 + -0x50,1,0);
            return 0;
          }
          *(undefined1 *)(param_1 + 1) = 0;
          return 2;
        }
      }
    }
    else {
      cVar7 = fn_828ACC40(iVar4);
      if (cVar7 == '\0') {
        fn_828AE818(iVar4,0x1f);
      }
      else {
        if (*(int *)(iVar4 + 0xa0) != 0) {
          fn_828C1DE0(iVar4);
        }
        iVar6 = *param_1;
        if (iVar6 == 1) {
          fn_828AD4A0(iVar4);
        }
        else if (iVar6 == 2) {
          cVar7 = fn_828AD0F0(iVar4);
          if (cVar7 != '\0') {
            fn_828AD188(iVar4);
          }
        }
        else if (iVar6 == 3) {
          fn_828C4258(iVar4);
        }
      }
    }
    return 1;
  }
  param_1[0x18] = 0;
  return 0;
}

