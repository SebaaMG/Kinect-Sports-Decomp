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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82E0F0E0();


void fn_82E160E0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_82E0F0E0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  lVar8 = 0;
  iVar4 = *piVar1;
  while (iVar4 != 0) {
    piVar1 = piVar1 + 1;
    lVar8 = lVar8 + 1;
    iVar4 = *piVar1;
  }
  iVar4 = fn_82CE5410();
  uVar2 = param_2[1];
  lVar5 = (ulonglong)uVar2 + lVar8;
  iVar6 = (int)lVar5;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar6) {
    lVar3 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
    if (iVar6 < (int)lVar3) {
      lVar5 = lVar3;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),param_2,lVar5,4);
  }
  iVar4 = *param_2;
  iVar6 = 0;
  param_2[1] = param_2[1] + (int)lVar8;
  if (**(int **)(param_1 + 0xc) != 0) {
    iVar7 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar7 + uVar2 * 4 + iVar4) = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar7);
      iVar7 = iVar6 * 4;
    } while (*(int *)(*(int *)(param_1 + 0xc) + iVar7) != 0);
  }
  return;
}

