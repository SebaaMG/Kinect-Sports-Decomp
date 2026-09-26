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
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82E150A0(int param_1,undefined8 param_2)

{
  int *piVar2;
  int iVar3;
  longlong lVar1;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = (int)param_2;
  if (iVar3 != 0) {
    fn_82CE4040(param_2);
  }
  piVar7 = (int *)(param_1 + 0x10);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = (int *)*piVar7;
    do {
      if (*piVar2 == iVar3) goto LAB_82e150fc;
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  iVar4 = -1;
LAB_82e150fc:
  if (iVar3 != 0) {
    fn_82CE4118(param_2);
  }
  if (-1 < iVar4) {
    iVar3 = *piVar7;
    iVar6 = iVar4 * 4;
    if (*(int *)(iVar6 + iVar3) != 0) {
      fn_82CE4118();
    }
    *(undefined4 *)(iVar6 + iVar3) = 0;
    iVar3 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar3;
    puVar5 = (undefined4 *)(iVar6 + *piVar7);
    iVar3 = (iVar3 - iVar4) * 4;
    if (0 < iVar3) {
      lVar1 = (ulonglong)(iVar3 - 1U >> 2) + 1;
      do {
        *puVar5 = puVar5[1];
        puVar5 = puVar5 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
  }
  return;
}

