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


void fn_82D427C8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  longlong lVar4;
  longlong lVar6;
  int iVar7;
  
  *(char *)(param_1 + 0xd8) = (char)param_2;
  if (param_2 == 6) {
    iVar2 = fn_82CE5410();
    piVar1 = *(int **)(iVar2 + 0x10);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if ((*(uint *)(param_1 + 0xd4) & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))
                (piVar1,*(undefined4 *)(param_1 + 0xcc),*(uint *)(param_1 + 0xd4) & 0x3fffffff,2);
    }
    *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    lVar6 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar7 = *(int *)(param_1 + 0xb4);
      iVar5 = 0;
      do {
        *(int *)(iVar7 + 0x4c) = (int)lVar6;
        iVar2 = iVar2 + 1;
        iVar3 = iVar5 + *(int *)(param_1 + 0xb4);
        iVar5 = iVar5 + 0x60;
        iVar7 = iVar5 + *(int *)(param_1 + 0xb4);
        lVar6 = (ulonglong)*(uint *)(iVar3 + 0x14) + lVar6;
      } while (iVar2 < *(int *)(param_1 + 0xb8));
    }
    iVar2 = fn_82CE5410();
    iVar7 = (int)lVar6;
    if ((int)(*(uint *)(param_1 + 0xd4) & 0x3fffffff) < iVar7) {
      fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 0xcc,lVar6,2);
    }
    iVar2 = fn_82CE5410();
    if ((int)(*(uint *)(param_1 + 0xd4) & 0x3fffffff) < iVar7) {
      lVar4 = ((ulonglong)*(uint *)(param_1 + 0xd4) & 0x3fffffff) << 1;
      if ((int)lVar4 <= iVar7) {
        lVar4 = lVar6;
      }
      fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 0xcc,lVar4,2);
    }
    *(int *)(param_1 + 0xd0) = iVar7;
  }
  return;
}

