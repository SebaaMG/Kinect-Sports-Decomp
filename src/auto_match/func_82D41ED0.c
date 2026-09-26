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


undefined8 fn_82D41ED0(int param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    iVar6 = 0;
    do {
      iVar7 = 0;
      iVar9 = iVar6 + *(int *)(param_1 + 0xc0);
      if (0 < *(int *)(iVar9 + 0x18)) {
        iVar8 = 0;
        do {
          piVar1 = *(int **)(*(int *)(iVar9 + 0x14) + iVar8);
          iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,0x100);
          uVar2 = *(uint *)(iVar9 + 0x3c) & 0xc0ffffff;
          if (uVar2 == 0) {
            iVar4 = 0x200;
          }
          else {
            iVar4 = 0x1d0;
            if (uVar2 != 1) {
              iVar4 = 0x1a0;
            }
          }
          if ((iVar3 < 0) || (iVar4 < iVar3)) {
            return 0xffffffffffffffff;
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)(iVar9 + 0x18));
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x40;
    } while (iVar5 < *(int *)(param_1 + 0xc4));
  }
  return 0xf0;
}

