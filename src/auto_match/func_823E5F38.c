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
extern int fn_822ABA88();
extern int fn_822ABBF0();
extern int fn_822AF138();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821B65FC;


void fn_823E5F38(int param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined **ppuStack_68;
  int iStack_64;
  
  iVar2 = *(int *)(*(int *)(param_2[4] * 4 + *param_2) + 0x10);
  ppuStack_70 = &lbl_821B65FC;
  iStack_6c = -1;
  fn_822ABBF0(*(undefined4 *)(param_2[4] * 4 + *param_2),&ppuStack_70);
  if (*(int *)(*(int *)(param_2[4] * 4 + *param_2) + 8) == 0) {
    ppuStack_70 = &lbl_821AC4A4;
    iVar2 = *(int *)(*(int *)(param_3[4] * 4 + *param_3) + 0x10);
    ppuStack_68 = &lbl_821B65FC;
    iStack_64 = -1;
    fn_822ABBF0(*(undefined4 *)(param_2[4] * 4 + *param_2),&ppuStack_68);
    if (*(int *)(*(int *)(param_3[4] * 4 + *param_3) + 8) != 0) {
      param_1 = iVar2 * 0x150 + param_1;
      uVar3 = 8;
      *(undefined4 *)(param_1 + 0x10b0) = 0;
      *(undefined1 *)(param_1 + 0x10b4) = 0;
      *(undefined1 *)(param_1 + 0x10b5) = 0;
      if (iStack_64 != 0) {
        uVar3 = 10;
      }
      iVar2 = fn_822ABA88(*(undefined4 *)(param_3[4] * 4 + *param_3),0);
                    /* WARNING: Subroutine does not return */
      fn_822AF138(*(undefined4 *)(iVar2 + 0x110),uVar3);
    }
    return;
  }
  param_1 = iVar2 * 0x150 + param_1;
  *(undefined4 *)(param_1 + 0x10b0) = 0;
  *(undefined1 *)(param_1 + 0x10b4) = 0;
  *(undefined1 *)(param_1 + 0x10b5) = 0;
  if (iStack_6c == 0) {
    uVar3 = 0x12;
  }
  else {
    uVar4 = 0;
    do {
      if (*param_4 == 0) {
        bVar1 = true;
        goto LAB_823e6000;
      }
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 1;
    } while (uVar4 < 3);
    bVar1 = false;
LAB_823e6000:
    uVar3 = 2;
    if (!bVar1) {
      uVar3 = 0x16;
    }
  }
  iVar2 = fn_822ABA88(*(undefined4 *)(param_2[4] * 4 + *param_2),0);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(iVar2 + 0x110),uVar3);
}

