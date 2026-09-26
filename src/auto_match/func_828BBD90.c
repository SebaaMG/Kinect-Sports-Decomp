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
extern int fn_8265CA20();
extern int fn_828A18E0();
extern int fn_828A1F08();
extern int fn_82F622A8();


undefined4 *
fn_828BBD90(undefined4 *param_1,int param_2,char param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (0x71c71c5 < *(uint *)(param_2 + 8)) {
    if (param_5[0xb] != 0) {
      fn_822315A0();
    }
    if (0xf < (uint)param_5[8]) {
      fn_8265CA20(param_5[3]);
    }
    param_5[7] = 0;
    param_5[8] = 0xf;
    *(undefined1 *)(param_5 + 3) = 0;
    fn_8265CA20(param_5);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *(undefined4 **)(param_2 + 4)) {
    (*(undefined4 **)(param_2 + 4))[1] = param_5;
    **(undefined4 **)(param_2 + 4) = param_5;
    *(int **)(*(int *)(param_2 + 4) + 8) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *(undefined4 **)(*(int *)(param_2 + 4) + 8)) {
      *(int **)(*(int *)(param_2 + 4) + 8) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == (undefined4 *)**(int **)(param_2 + 4)) {
      **(int **)(param_2 + 4) = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0x30);
  piVar5 = param_5;
  while (cVar1 == '\0') {
    piVar2 = (int *)piVar5[1];
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x30) == '\0') {
        *(undefined1 *)(piVar2 + 0xc) = 1;
        *(undefined1 *)(iVar4 + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x30) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar2[2]) {
          fn_828A1F08(param_2);
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x30) = 0;
        fn_828A18E0(param_2,*(undefined4 *)(piVar5[1] + 4));
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x30) == '\0') {
        *(undefined1 *)(piVar5[1] + 0x30) = 1;
        *(undefined1 *)(iVar4 + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x30) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)*piVar2) {
          fn_828A18E0(param_2);
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x30) = 0;
        fn_828A1F08(param_2,*(undefined4 *)(piVar5[1] + 4));
      }
    }
    cVar1 = *(char *)(piVar5[1] + 0x30);
  }
  iVar4 = *(int *)(param_2 + 4);
  *param_1 = param_5;
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0x30) = 1;
  return param_1;
}

