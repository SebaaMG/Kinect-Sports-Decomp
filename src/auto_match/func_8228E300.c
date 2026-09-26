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
extern int fn_822315A0();
extern int fn_82246748();
extern int fn_82248B90();
extern int fn_82279D28();
extern int fn_8228E578();
extern int fn_8229E090();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_828AE818();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_83297810;


void fn_8228E300(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  if (param_1 == 0) {
    if (*(int *)(param_2 + 0x17c) != 0) {
      fn_8229E090(*(int *)(param_2 + 0x17c),0,1);
      *(undefined4 *)(param_2 + 0x17c) = 0;
    }
    if (*(int *)(param_2 + 0x19c) == 0) {
      if (*(int *)(param_2 + 0x18c) == 0) {
        fn_82279D28(param_2,1,1);
        *(undefined4 *)(param_2 + 0x18c) = 1;
      }
      iVar2 = lbl_83297810;
      **(undefined4 **)(param_2 + 0x170) = 0;
      **(undefined4 **)(param_2 + 0x174) = 0;
      if (iVar2 == 0) {
        iVar2 = fn_82511928();
      }
      fn_825138E0(&iStack_48,iVar2,1);
      if (iStack_48 != 0) {
        fn_82522588(&iStack_50,&iStack_48);
        fn_82246748(iStack_50,0);
        if (iStack_4c != 0) {
          fn_822315A0();
        }
      }
      iVar2 = lbl_83297810;
      if (lbl_83297810 == 0) {
        iVar2 = fn_82511928();
      }
      iStack_50 = **(int **)(iVar2 + 8);
      while( true ) {
        iVar2 = lbl_83297810;
        if (lbl_83297810 == 0) {
          iVar2 = fn_82511928();
        }
        if (iStack_50 == *(int *)(iVar2 + 8)) break;
        piVar3 = (int *)fn_8228E578(auStack_40,&iStack_50);
        uVar1 = *(uint *)(*piVar3 + 4);
        lVar4 = (ulonglong)uVar1 - 1;
        if (iStack_3c != 0) {
          fn_822315A0(iStack_3c);
        }
        if ((lVar4 - (((ulonglong)uVar1 - 2) + (ulonglong)(lVar4 == 0)) & 0xff) != 0) {
          piVar3 = (int *)fn_8228E578(auStack_38,&iStack_50);
          fn_828AE818(*(undefined4 *)(*piVar3 + 8),0);
          if (iStack_34 != 0) {
            fn_822315A0();
          }
        }
        fn_82248B90(&iStack_50);
      }
      if (iStack_44 != 0) {
        fn_822315A0();
      }
    }
  }
  *(undefined4 *)(param_2 + 0x17c) = 0;
  return;
}

