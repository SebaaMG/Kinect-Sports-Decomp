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
extern int fn_82F68CC0();


void fn_82808998(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  
  piVar1 = *(int **)(param_1 + 100);
  uVar5 = 0;
  uVar4 = (uint)*(ushort *)((int)piVar1 + 0x32);
  pfVar7 = (float *)((uint)*(byte *)(*(int *)(param_2 + 4) + piVar1[2]) * piVar1[1] + *piVar1);
  iVar6 = (uint)*(byte *)(*(int *)(param_2 + 8) + piVar1[2]) * piVar1[1] + *piVar1;
  if (*(short *)(param_1 + 0x48) != 0) {
    iVar2 = uVar4 * 4;
    do {
      if ((*(int *)(param_1 + 0x50) == 0) || (*(char *)(*(int *)(param_1 + 0x50) + uVar5) != '\0'))
      {
        if (uVar4 != 0) {
          pfVar3 = pfVar7;
          uVar8 = uVar4;
          do {
            *(float *)((param_3 - (int)pfVar7) + (int)pfVar3) =
                 (*(float *)((iVar6 - (int)pfVar7) + (int)pfVar3) - *pfVar3) *
                 *(float *)(param_1 + 0x40) + *pfVar3;
            pfVar3 = pfVar3 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      else {
        fn_82F68CC0(param_3,*(undefined4 *)(param_1 + 0x54),iVar2);
      }
      uVar5 = uVar5 + 1;
      param_3 = iVar2 + param_3;
      pfVar7 = pfVar7 + uVar4;
      iVar6 = iVar2 + iVar6;
    } while (uVar5 < *(ushort *)(param_1 + 0x48));
  }
  return;
}

