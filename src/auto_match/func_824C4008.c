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
extern int fn_8224F690();
extern int fn_824C1358();
extern int fn_824C41E8();
extern int fn_825089A0();
extern int fn_82521120();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_821C0844;


undefined4 * fn_824C4008(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  int **ppiVar6;
  int *apiStack_40 [16];
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C0844;
  piVar5 = (int *)fn_825089A0();
  uVar3 = (**(code **)(*piVar5 + 0xc))();
  *(undefined8 *)(param_1 + 2) = uVar3;
  param_1[4] = 0;
  ppiVar6 = (int **)(param_1 + 4);
  uVar4 = fn_8265C9E0(0x30);
  if ((uVar4 & 0xffffffff) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_824C1358(uVar4,(ulonglong)*(uint *)(param_2 + 0x5c) + 0x40c);
  }
  apiStack_40[0] = piVar5;
  if (ppiVar6 != apiStack_40) {
    piVar1 = *ppiVar6;
    apiStack_40[0] = (int *)0x0;
    if (piVar5 != piVar1) {
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        if (iVar2 != 0) {
          fn_8224F690(iVar2);
          fn_8265CA20(iVar2);
          *piVar1 = 0;
        }
        if (piVar1[1] != 0) {
          fn_82521120();
          iVar2 = piVar1[1];
          if (iVar2 != 0) {
            if (*(int *)(iVar2 + 0x5c) != 0) {
              fn_822315A0();
            }
            fn_8224F690(iVar2 + 0xc);
            fn_8265CA20(iVar2);
          }
          piVar1[1] = 0;
        }
        fn_8265CA20(piVar1);
      }
      *ppiVar6 = piVar5;
    }
  }
  fn_824C41E8(apiStack_40);
  return param_1;
}

