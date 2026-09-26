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
extern int fn_82CE63B0();


bool fn_82DC7240(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    uVar3 = *(uint *)(iVar2 + 0x60);
    uVar8 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      piVar9 = (int *)(iVar2 + 0x5c);
      *(uint *)(iVar2 + 0xc) = uVar3 + *(int *)(iVar2 + 0xc);
      *(uint *)(iVar2 + 0x10) = uVar3 + *(int *)(iVar2 + 0x10);
      *(short *)(param_1 + 0x10) = (short)*(undefined4 *)(param_2 + 4);
      *(short *)(param_1 + 0x20) = (short)uVar3;
      iVar7 = *(int *)(*(int *)(param_3 + 0x14) + 0x18);
      if (0 < (int)uVar3) {
        iVar10 = 0;
        do {
          iVar5 = *(int *)(*piVar9 + iVar10);
          *(short *)(iVar5 + 0x20) = (short)*(undefined4 *)(iVar7 + 0x2c);
          iVar6 = fn_82CE5410();
          if (*(uint *)(iVar7 + 0x2c) == (*(uint *)(iVar7 + 0x30) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar7 + 0x28),4);
          }
          uVar8 = uVar8 - 1;
          iVar10 = iVar10 + 4;
          *(int *)(*(int *)(iVar7 + 0x2c) * 4 + *(int *)(iVar7 + 0x28)) = iVar5;
          *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
        } while (uVar8 != 0);
      }
      iVar7 = fn_82CE5410();
      piVar4 = *(int **)(iVar7 + 0x10);
      *(undefined4 *)(iVar2 + 0x60) = 0;
      if ((*(uint *)(iVar2 + 100) & 0x80000000) == 0) {
        (**(code **)(*piVar4 + 0x10))(piVar4,*piVar9,*(uint *)(iVar2 + 100) & 0x3fffffff,4);
      }
      *piVar9 = 0;
      *(undefined4 *)(iVar2 + 100) = 0x80000000;
      return true;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x20);
  if (1 < uVar1) {
    *(ushort *)(param_1 + 0x20) = uVar1 - 1;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    *(undefined2 *)(param_3 + 0x20) = 1;
  }
  return 1 < uVar1;
}

