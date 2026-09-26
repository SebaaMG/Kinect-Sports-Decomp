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


undefined8 fn_8248A158(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar6 = 0;
  iVar2 = *piVar1;
  uVar4 = piVar1[1] - iVar2 >> 2;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      if ((*(int *)(*(int *)(iVar5 + iVar2) + 0x14) == *(int *)(param_1 + 0xc)) &&
         ((iVar3 = *(int *)(*(int *)(iVar5 + iVar2) + 4), iVar3 == 0 || (iVar3 == 3)))) {
        iVar2 = *(int *)(uVar6 * 4 + iVar2);
        if (*(int *)(iVar2 + 4) == 0) {
          *param_2 = *(undefined4 *)(iVar2 + 8);
          *param_3 = piVar1[4];
        }
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < uVar4);
  }
  return 0;
}

