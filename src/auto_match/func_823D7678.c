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
extern int fn_82368C30();
extern int fn_823D9168();


undefined8 fn_823D7678(int param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (int)param_3;
  if (((iVar5 != -1) && ((int)param_2 != -1)) && ((param_2 & 0xffffffff) != 0)) {
    piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar5 * 4);
    iVar3 = iVar5;
    fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1));
    if ((*(int *)(param_1 + 0xde0) != iVar3) ||
       (bVar2 = true, (ulonglong)*(uint *)(param_1 + 0xde4) != (param_2 & 0xffffffff))) {
      bVar2 = false;
    }
    iVar3 = fn_823D9168(param_1,param_3);
    uVar6 = 0;
    if (bVar2) {
      uVar6 = (uint)(*(int *)(param_1 + 0xdf0) == 2);
    }
    else {
      piVar1 = *(int **)(*(int *)(param_1 + 0x20) + iVar5 * 4);
      if (((piVar1[1] - *piVar1 >> 2 != 0) &&
          (uVar6 = 0, iVar4 = fn_82368C30(param_1), *(int *)(param_1 + 0x41c) == 3)) &&
         ((iVar4 != 0 && ((*(int *)(iVar4 + 0x1ec) != 0 && (*(int *)(iVar4 + 0x2c) != iVar5)))))) {
        uVar6 = 1;
      }
    }
    if ((iVar3 != 0) || (uVar6 != 0)) {
      return 1;
    }
  }
  return 0;
}

