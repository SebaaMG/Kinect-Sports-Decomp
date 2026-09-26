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
extern int fn_8288B760();


void fn_8239D2B0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar4 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar5 = 0;
    do {
      uVar6 = 0;
      piVar3 = *(int **)(*piVar3 + iVar5);
      iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
      if (*(int *)(iVar1 + 8) != 0) {
        do {
          iVar1 = fn_822ABA88(iVar1,uVar6);
          if (*(int *)(iVar1 + 0x168) == 0) {
            uVar2 = *(uint *)(iVar1 + 0x16c);
          }
          else {
            uVar2 = fn_8288B760();
            uVar2 = uVar2 & 0xff;
          }
          if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_822AF138(*(undefined4 *)(iVar1 + 0x110),2);
          }
          uVar6 = uVar6 + 1;
          iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
        } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 8));
      }
      piVar3 = *(int **)(param_1 + 8);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}

