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


undefined8 fn_82D3DC18(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (((*param_2 == '\0') || (*(int *)(param_1 + 0x1c) < 0xfd)) &&
     (*(int *)(param_1 + 0x1c) < 0xfff)) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar6 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x18);
        piVar2 = *(int **)(iVar1 + iVar6);
        uVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2,0x100);
        *(undefined4 *)(iVar1 + iVar6 + 8) = uVar4;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar6 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(*(int *)(param_1 + 0x18) + iVar6 + 8) == -1) goto LAB_82d3dc44;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(param_1 + 0x1c));
    }
    uVar3 = 0x70;
  }
  else {
LAB_82d3dc44:
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}

