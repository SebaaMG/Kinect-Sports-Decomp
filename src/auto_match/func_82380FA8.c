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
extern int fn_82373530();
extern int fn_823815D0();


void fn_82380FA8(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e4);
  lVar3 = fn_82373530();
  piVar2 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + iVar1 * 4);
  uVar4 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),1 - lVar3);
  iVar5 = fn_822CEFA0();
  if ((iVar5 == 0) && (iVar5 = fn_822CFA38(uVar4,0xc), iVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    lVar3 = 1 - lVar3;
  }
  fn_823815D0(param_1,iVar1,lVar3,uVar4);
  fn_823815D0(param_1,iVar1 == 0,0xffffffffffffffff,2);
  return;
}

