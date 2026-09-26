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
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B0950(int param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  piVar2 = *(int **)(param_1 + 0xc);
  uVar8 = ZEXT48(piVar2);
  uVar6 = 0;
  uVar3 = *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar3 != 0) {
    uVar7 = (ulonglong)*(uint *)(piVar2[4] * 4 + *piVar2);
    do {
      uVar4 = fn_822ABA88(*(undefined4 *)(((int *)uVar8)[4] * 4 + *(int *)uVar8));
      iVar5 = fn_822ABA88(uVar7);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x110) + 0x1c);
      if ((int)param_2 == 0) {
        if (iVar5 == 0xc) goto code_r0x822b0a24;
        bVar1 = iVar5 == 0x10;
      }
      else {
        if (iVar5 == 0xc) goto code_r0x822b0a24;
        bVar1 = iVar5 == 0xd;
      }
      if ((bVar1) || (iVar5 == 0x1d)) {
code_r0x822b0a24:
        fn_8236A928(*(undefined4 *)(param_1 + 0x10),uVar4,2);
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar3);
  }
  fn_8236BA88(uVar8);
  return;
}

