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
extern int fn_822508C0();
extern int fn_82359C18();
extern int fn_823D6300();
extern int fn_8265CA20();
extern int fn_82F622A8();


undefined4 *
fn_823FAB00(undefined4 *param_1,int param_2,char param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x4924922 < *(uint *)(param_2 + 8)) {
    fn_82359C18(param_5 + 0xc);
    fn_82359C18(param_5 + 6);
    fn_8265CA20(param_5);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *(undefined4 **)(param_2 + 4)) {
    (*(undefined4 **)(param_2 + 4))[1] = param_5;
    **(undefined4 **)(param_2 + 4) = param_5;
    iVar2 = *(int *)(param_2 + 4);
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == (undefined4 *)**(int **)(param_2 + 4)) {
        **(int **)(param_2 + 4) = (int)param_5;
      }
      goto LAB_823fabbc;
    }
    param_4[2] = param_5;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 != *(undefined4 **)(iVar2 + 8)) goto LAB_823fabbc;
  }
  *(int **)(iVar2 + 8) = param_5;
LAB_823fabbc:
  cVar1 = *(char *)(param_5[1] + 0x48);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_2 + 4);
      *param_1 = param_5;
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x48) = 1;
      return param_1;
    }
    piVar3 = (int *)piVar5[1];
    piVar4 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar4) {
      iVar2 = piVar4[2];
      if (*(char *)(iVar2 + 0x48) == '\0') {
LAB_823fac4c:
        *(undefined1 *)(piVar5[1] + 0x48) = 1;
        *(undefined1 *)(iVar2 + 0x48) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar3[2]) {
          fn_823D6300(param_2);
          piVar5 = piVar3;
        }
        *(undefined1 *)(piVar5[1] + 0x48) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
        fn_822508C0(param_2,*(undefined4 *)(piVar5[1] + 4));
      }
    }
    else {
      iVar2 = *piVar4;
      if (*(char *)(iVar2 + 0x48) == '\0') goto LAB_823fac4c;
      if (piVar5 == (int *)*piVar3) {
        fn_822508C0(param_2);
        piVar5 = piVar3;
      }
      *(undefined1 *)(piVar5[1] + 0x48) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
      fn_823D6300(param_2,*(undefined4 *)(piVar5[1] + 4));
    }
    cVar1 = *(char *)(piVar5[1] + 0x48);
  } while( true );
}

