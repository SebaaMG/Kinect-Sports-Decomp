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
extern int fn_822AA770();
extern int fn_82359698();
extern int fn_82399BA0();
extern int fn_8239D9F8();


void fn_823A3410(int param_1)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = (**(code **)(**(int **)(iVar4 + 0x2e0) + 0x34))();
    lVar2 = fn_822AA770(*(undefined4 *)(**(int **)(iVar4 + 8) + iVar3 * 4));
    bVar6 = lVar2 != 0;
  }
  else {
    bVar6 = true;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x100) = 1;
  iVar4 = fn_82399BA0(*(undefined4 *)(param_1 + 8));
  if (iVar4 == 0) {
    fn_82359698(*(undefined4 *)(param_1 + 8),8);
    lVar2 = (-(ulonglong)bVar6 & 0xfffffffe) + 6;
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x2e0);
    iVar4 = piVar1[3];
    iVar5 = (**(code **)(*piVar1 + 0x34))();
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1e4);
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x188) != 0)) && (iVar5 == iVar4)) && (bVar6)) {
      lVar2 = 5;
    }
    fn_8239D9F8(*(int *)(param_1 + 8),lVar2);
  }
  else {
    fn_82359698(*(undefined4 *)(param_1 + 8),8);
  }
  return;
}

