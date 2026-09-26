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
extern int fn_822CF1C0();
extern int fn_82375D78();


longlong fn_82375CA8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  piVar1 = *(int **)(param_2 * 4 + **(int **)(param_1 + 8));
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) == 2) {
    piVar3 = *(int **)(*(int *)(iVar2 + 0x10) * 4 + **(int **)(param_1 + 8));
    uVar4 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
    lVar5 = fn_822CF1C0(uVar4,param_3);
    if (lVar5 != 0) {
      piVar1 = *(int **)(*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10) * 4 +
                        **(int **)(param_1 + 8));
      uVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),1);
      fn_822CF1C0(uVar4,param_3);
    }
  }
  fn_82375D78(param_1);
  return lVar5;
}

