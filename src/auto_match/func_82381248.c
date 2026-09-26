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
extern int fn_822CEFA0();
extern int fn_822CFA38();
extern int fn_823814C0();
extern int fn_823815D0();
extern int fn_82381948();
extern unsigned int lbl_831CB188;


void fn_82381248(int param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 == param_5) {
    fn_823814C0(param_1,param_3);
    fn_823815D0(param_1);
    if ((param_2 == 6) || (uVar3 = 0, param_2 == 7)) {
      uVar3 = 1;
    }
    fn_82381948(param_1,param_3 == 0,param_3,param_6,uVar3);
  }
  else {
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + param_3 * 4);
    uVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_4);
    iVar2 = fn_822CEFA0();
    if ((iVar2 == 0) && (iVar2 = fn_822CFA38(uVar3,0xe), iVar2 == 0)) {
      uVar3 = 2;
      param_4 = 0xffffffffffffffff;
    }
    else {
      iVar2 = fn_823814C0(param_1,param_5);
      uVar3 = 0x10;
      if (*(int *)(&lbl_831CB188 + iVar2 * 0x10) == 0) {
        uVar3 = 0xf;
      }
    }
    fn_823815D0(param_1,param_3,param_4,uVar3);
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + param_5 * 4);
    fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_6);
    iVar2 = fn_822CEFA0();
    if (iVar2 == 0) {
      iVar2 = fn_823814C0(param_1,param_3);
      uVar3 = 0xc;
      if (*(int *)(&lbl_831CB188 + iVar2 * 0x10) == 0) {
        uVar3 = 0xb;
      }
      fn_823815D0(param_1,param_5,param_6,uVar3);
    }
  }
  return;
}

