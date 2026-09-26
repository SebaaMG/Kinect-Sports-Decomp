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
extern int fn_822AF138();
extern int fn_82308E08();
extern int fn_82359698();
extern int fn_82369160();
extern int fn_8236B578();
extern int fn_8236BB40();
extern int fn_823C4238();
extern int fn_823CC298();
extern int fn_823D1358();
extern int fn_823D16A0();


void fn_823DF138(int param_1)

{
  int iVar1;
  char cVar4;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  cVar4 = fn_82308E08(iVar1 + 0xa88);
  if (cVar4 == '\0') {
    if (*(int *)(*(int *)(iVar1 + 0x4b0) + 0xd4) == 0) {
      if (*(int *)(iVar1 + 0x9a0) == 0) {
        iVar2 = *(int *)(iVar1 + 0x41c);
        if (((((iVar2 != 2) && (iVar2 != 8)) && (iVar2 != 9)) && ((iVar2 != 6 && (iVar2 != 7)))) ||
           (*(char *)(iVar1 + 0xd51) == '\0')) {
          fn_82359698(iVar1,2);
        }
      }
      else {
        iVar2 = fn_8236BB40(iVar1);
        if (iVar2 != 0) {
          if ((*(float *)(iVar1 + 0x47c) < *(float *)(iVar1 + 0x474)) ||
             (iVar2 = fn_82369160(iVar1,*(undefined4 *)(iVar1 + 0xee0)), iVar2 == 2)) {
            fn_823D1358(iVar1);
          }
          else {
            fn_823D16A0(iVar1);
          }
        }
      }
    }
    else {
      iVar2 = fn_8236B578(iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_822AF138(**(undefined4 **)(iVar1 + 0xc),5);
      }
      fn_823C4238(iVar1);
      piVar3 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(iVar1 + 0xee0)) >> 3 & 4) +
                        **(int **)(iVar1 + 8));
      piVar3 = (int *)fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
      (**(code **)(*piVar3 + 4))();
      fn_823CC298(*(undefined4 *)(iVar1 + 0x4b8),0x1a);
    }
  }
  return;
}

