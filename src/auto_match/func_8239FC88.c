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
extern int fn_82250A18();
extern int fn_82359558();
extern int fn_82397F88();
extern int fn_82399CB8();
extern int fn_825604A0();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2B38;
extern unsigned int lbl_831D2B80;
extern unsigned int lbl_832975B0;


void fn_8239FC88(int param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == *(uint *)(param_1 + 0x28c)) {
    return;
  }
  if (param_2 == 0) {
    param_3 = -(uint)(*(uint *)(param_1 + 0x28c) != 4) & param_3;
    goto LAB_8239fdf8;
  }
  if (param_2 < 3) {
    iVar2 = fn_82399CB8(*(undefined4 *)(param_1 + 0x240));
    iVar3 = fn_82397F88(*(undefined4 *)(param_1 + 0x240));
    if (iVar3 == 0) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (*(char *)(iVar2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82359558(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x10));
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x240) + 0x30) + iVar2 * -8 + 8);
      if (*(int *)(iVar2 + 0x22c) != 0) {
        fn_825604A0(iVar2 + 0x20);
        *(undefined4 *)(iVar2 + 0x22c) = 0;
      }
    }
    goto LAB_8239fdf8;
  }
  if (param_2 != 3) goto LAB_8239fdf8;
  iVar2 = *(int *)(param_1 + 0x298);
  if (iVar2 == 0) {
    puVar1 = &lbl_831D2B38;
LAB_8239fcec:
    *(undefined **)(param_1 + 0x280) = puVar1;
  }
  else if (iVar2 == 1) {
    puVar1 = &lbl_831D2B80;
    goto LAB_8239fcec;
  }
  *(int *)(param_1 + 0x298) = 1 - iVar2;
LAB_8239fdf8:
  *(uint *)(param_1 + 0x28c) = param_2;
  *(undefined4 *)(param_1 + 0x290) = lbl_821CC160;
  uVar4 = *(uint *)(param_1 + 0x288);
  if ((int)*(uint *)(param_1 + 0x288) < (int)param_3) {
    uVar4 = param_3;
  }
  *(uint *)(param_1 + 0x288) = uVar4;
  return;
}

