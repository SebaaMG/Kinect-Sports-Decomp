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


void fn_82D42600(int param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar4;
  longlong lVar3;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    lVar5 = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar6 = *(int *)(param_1 + 0xb4);
      iVar4 = 0;
      do {
        *(int *)(iVar6 + 0x4c) = (int)lVar5;
        iVar1 = iVar1 + 1;
        iVar2 = iVar4 + *(int *)(param_1 + 0xb4);
        iVar4 = iVar4 + 0x60;
        iVar6 = iVar4 + *(int *)(param_1 + 0xb4);
        lVar5 = (ulonglong)*(uint *)(iVar2 + 0x14) + lVar5;
      } while (iVar1 < *(int *)(param_1 + 0xb8));
    }
    iVar1 = fn_82CE5410();
    iVar6 = (int)lVar5;
    if ((int)(*(uint *)(param_1 + 0xd4) & 0x3fffffff) < iVar6) {
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_1 + 0xcc,lVar5,2);
    }
    iVar1 = fn_82CE5410();
    if ((int)(*(uint *)(param_1 + 0xd4) & 0x3fffffff) < iVar6) {
      lVar3 = ((ulonglong)*(uint *)(param_1 + 0xd4) & 0x3fffffff) << 1;
      if ((int)lVar3 <= iVar6) {
        lVar3 = lVar5;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_1 + 0xcc,lVar3,2);
    }
    *(int *)(param_1 + 0xd0) = iVar6;
  }
  if ((param_2 & 0x80000000) == 0) {
    *(undefined2 *)
     ((*(int *)(((param_2 & 0x7fffffff) >> (0x20 - *(uint *)(param_1 + 0xb0) & 0x3f)) * 0x60 +
                *(int *)(param_1 + 0xb4) + 0x4c) +
      (0xffffffffU >> (*(uint *)(param_1 + 0xb0) & 0x3f) & param_2)) * 2 + *(int *)(param_1 + 0xcc))
         = param_3;
  }
  return;
}

