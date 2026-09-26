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
extern int fn_82372F88();
extern int fn_82375CA8();


void fn_82375B78(int param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x204) == 0) {
    lVar2 = fn_82372F88();
    iVar6 = (int)(lVar2 + 1) - ((int)lVar2 + (uint)(lVar2 + 1 == 0));
  }
  else {
    iVar6 = *(int *)(param_1 + 0x658);
  }
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x348) = 1;
    bVar1 = *(int *)(param_1 + 0x1e4) == 0;
    *(uint *)(param_1 + 0x1e4) = (uint)bVar1;
    if (!bVar1) {
      iVar6 = 1 - *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0x1e8) = iVar6;
      piVar5 = *(int **)(**(int **)(param_1 + 8) + (uint)bVar1 * 4);
      if (1 < *(uint *)(*(int *)(piVar5[4] * 4 + *piVar5) + 8)) {
        iVar3 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),0);
        iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),1);
        if ((*(int *)(iVar3 + 0x24) != 0) != (*(int *)(iVar4 + 0x24) != 0)) {
          if ((uint)LZCOUNT(iVar6) >> 5 != *(uint *)(iVar3 + 0x2a4)) {
            fn_82375CA8(param_1,*(undefined4 *)(iVar3 + 0x2c),1);
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(*(int *)(param_1 + 0x260) + 0x160);
  }
  return;
}

