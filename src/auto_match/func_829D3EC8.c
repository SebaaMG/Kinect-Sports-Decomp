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


undefined8 fn_829D3EC8(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = -1;
  iVar5 = 0;
  iVar8 = -1;
  uVar6 = 0;
  if (*(uint *)(param_1 + 4) != 0) {
    piVar4 = (int *)(param_1 + 4);
    do {
      iVar2 = iVar5;
      iVar3 = iVar7;
      iVar1 = iVar8;
      if (((piVar4[1] == 0) || (iVar2 = iVar8, iVar3 = iVar5, iVar1 = iVar7, piVar4[1] == 1)) &&
         (iVar7 = iVar3, iVar8 = iVar2, iVar1 != -1)) {
        return 0;
      }
      piVar4 = piVar4 + 2;
      uVar6 = uVar6 + 1;
      iVar5 = *piVar4 + iVar5;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar7;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar5;
  }
  return 1;
}

