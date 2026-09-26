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
extern unsigned int *auStack_58;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82511928();
extern int fn_82513F78();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_821C24F4;
extern unsigned int lbl_83297810;
extern unsigned int stack0x00000000;


void fn_825132E0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar5;
  int iVar3;
  int *piVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_60 [2];
  undefined1 auStack_58 [88];
  
  *param_1 = &lbl_821C24F4;
  iVar3 = param_1[3];
  iVar1 = param_1[2];
  iVar7 = 0;
  iVar8 = 0;
  if ((iVar3 != 0) && (cVar5 = fn_8223AAC0(iVar3), cVar5 != '\0')) {
    iVar7 = iVar1;
    iVar8 = iVar3;
  }
  iVar3 = lbl_83297810;
  if (lbl_83297810 == 0) {
    iVar3 = fn_82511928();
  }
  iVar1 = *(int *)(iVar3 + 0x24);
  iVar9 = *(int *)(iVar1 + 4);
  piVar4 = (int *)fn_8265C9E0(0x10);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_82230040(&stack0x00000000 + -0x58);
  }
  piVar6 = piVar4 + 2;
  *piVar4 = iVar1;
  piVar4[1] = iVar9;
  iVar9 = iVar8;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar4[3] = 0;
    if (piVar6 != (int *)(&stack0x00000000 + -0x60)) {
      iVar9 = 0;
      piVar4[3] = iVar8;
      *piVar6 = iVar7;
    }
  }
  if (*(int *)(iVar3 + 0x28) != 0x1ffffffe) {
    *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + 1;
    *(int **)(iVar1 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    fn_82513F78(iVar3 + 4,&stack0x00000000 + -0x60);
    if (iVar9 != 0) {
      fn_822315A0(iVar9);
    }
    fn_82230300(param_1 + 7,1,0);
    puVar2 = (undefined4 *)param_1[6];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (param_1[3] != 0) {
      fn_822315A0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff8219852c);
}

