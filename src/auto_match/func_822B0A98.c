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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();
extern unsigned int lbl_832975B0;


void fn_822B0A98(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar7 = ZEXT48(piVar1);
  uVar4 = 0;
  uVar5 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar5 != 0) {
    uVar6 = (ulonglong)*(uint *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar2 = fn_822ABA88(*(undefined4 *)(((int *)uVar7)[4] * 4 + *(int *)uVar7));
      iVar3 = fn_822ABA88(uVar6);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x110) + 0x1c);
      if ((iVar3 == 8) || (iVar3 == 0x18)) {
        fn_8236A928(*(undefined4 *)(param_1 + 0x10),iVar2,6);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 200))();
        if (iVar3 == 1) {
          iVar3 = lbl_832975B0;
          if (lbl_832975B0 == 0) {
            iVar3 = fn_82250A18();
          }
          if (*(char *)(iVar3 + 4) == '\0') goto code_r0x822b0bbc;
        }
        iVar3 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar3 = fn_82250A18();
        }
        if (*(char *)(iVar3 + 4) == '\0') {
          return;
        }
code_r0x822b0bbc:
        (**(code **)(**(int **)(iVar2 + 0x110) + 0xc))();
        return;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  fn_8236BA88(uVar7);
  return;
}

