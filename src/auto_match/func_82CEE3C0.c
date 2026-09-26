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


void fn_82CEE3C0(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  lVar4 = (ulonglong)*(uint *)(iVar1 + 4) + 1;
  iVar2 = fn_82CE5410();
  iVar5 = (int)lVar4;
  if ((int)(*(uint *)(iVar1 + 8) & 0x3fffffff) < iVar5) {
    lVar3 = ((ulonglong)*(uint *)(iVar1 + 8) & 0x3fffffff) << 1;
    if ((int)lVar3 <= iVar5) {
      lVar3 = lVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),iVar1,lVar3,1);
  }
  *(undefined1 *)((*(int **)(param_1 + 8))[1] + **(int **)(param_1 + 8)) = 0;
  return;
}

