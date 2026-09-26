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


void fn_82DFDF28(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_2 + 0xa4);
  piVar4 = (int *)(param_5 + 0xc);
  iVar1 = fn_82CE5410();
  if ((int)(*(uint *)(param_5 + 0x14) & 0x3fffffff) < iVar3) {
    iVar2 = (*(uint *)(param_5 + 0x14) & 0x3fffffff) << 1;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),piVar4,iVar2,1);
  }
  *(int *)(param_5 + 0x10) = iVar3;
  iVar3 = *(int *)(param_2 + 0xa4);
  iVar1 = fn_82CE5410();
  if ((int)(*(uint *)(param_5 + 8) & 0x3fffffff) < iVar3) {
    iVar2 = (*(uint *)(param_5 + 8) & 0x3fffffff) << 1;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_5,iVar2,4);
  }
  *(int *)(param_5 + 4) = iVar3;
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0xa4)) {
    do {
      *(undefined1 *)(*piVar4 + iVar3) = *(undefined1 *)(iVar3 + *(int *)(param_2 + 0xa0));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 0xa4));
  }
  *(undefined4 *)(param_5 + 0x18) = *(undefined4 *)(param_2 + 0xac);
  (**(code **)(**(int **)(param_2 + 0x30) + 0xc))(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_5 + 0x10)) {
    do {
      *(undefined1 *)(iVar3 + *(int *)(param_2 + 0xa0)) = *(undefined1 *)(*piVar4 + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_5 + 0x10));
  }
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_5 + 0x18);
  return;
}

