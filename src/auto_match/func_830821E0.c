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
extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_830821E0(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint auStack_40;
  
  iVar4 = param_1[1];
  iVar3 = fn_82CE5410();
  if ((int)(param_3[2] & 0x3fffffffU) < iVar4) {
    iVar6 = (param_3[2] & 0x3fffffffU) << 1;
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_3,iVar6,4);
  }
  param_3[1] = iVar4;
  uVar1 = param_2[1];
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    auStack_40 = uVar1;
    iVar4 = fn_82CE5410();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0xc) + 0xc))(*(int **)(iVar4 + 0xc),&auStack_40,4);
    uVar7 = auStack_40;
    if (auStack_40 == 0) {
      uVar7 = 0x80000000;
    }
    iVar3 = 0;
    if (0 < (int)uVar1) {
      iVar6 = 0;
      do {
        *(int *)(iVar6 + iVar4) = iVar3;
        piVar5 = (int *)(iVar6 + *param_2);
        iVar6 = iVar6 + 4;
        iVar3 = *piVar5 + iVar3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar6 = 0;
    iVar3 = *param_3;
    if (0 < (int)param_1[1]) {
      piVar5 = (int *)(*(int *)*param_1 + -4);
      do {
        piVar5 = piVar5 + 1;
        iVar2 = *(int *)(*piVar5 * 4 + iVar4);
        *(int *)(*piVar5 * 4 + iVar4) = iVar2 + 1;
        *(int *)(iVar2 * 4 + iVar3) = iVar6;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[1]);
    }
    iVar3 = fn_82CE5410();
    if ((uVar7 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),iVar4,uVar7 & 0x3fffffff,4);
    }
  }
  return;
}

