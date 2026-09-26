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


undefined8 fn_8294B260(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *param_2 + 1;
  iVar6 = uVar5 * 4;
  piVar4 = (int *)(*(int *)(param_1 + 0x14) + iVar6);
  if (uVar5 < *(uint *)(param_1 + 8)) {
    while( true ) {
      iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 0x14));
      uVar1 = *(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
      if ((((uVar1 & 0x10) == 0) || ((uVar1 & 0x200) != 0)) && ((uVar1 & 0x20) == 0)) break;
      iVar2 = *(int *)(*piVar4 + 0x68);
      iVar3 = *(int *)(iVar3 + 0x68);
      if ((*(int *)(iVar2 + 0x24) != *(int *)(iVar3 + 0x24)) ||
         (*(int *)(iVar2 + 0x20) != *(int *)(iVar3 + 0x20))) break;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
      if (*(uint *)(param_1 + 8) <= uVar5) break;
    }
  }
  *param_2 = uVar5 - 1;
  return 0;
}

