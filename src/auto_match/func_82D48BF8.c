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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D48BF8(int param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = fn_82CE5410();
  iVar3 = (int)param_3;
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar3) {
    lVar2 = ((ulonglong)*(uint *)(param_1 + 0x4c) & 0x3fffffff) << 1;
    if ((int)lVar2 <= iVar3) {
      lVar2 = param_3;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),(int *)(param_1 + 0x44),lVar2,4);
  }
  *(int *)(param_1 + 0x48) = iVar3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*param_2 + 0x10);
  if (0 < iVar3) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x44)) = *(undefined4 *)(iVar1 + (int)param_2);
      fn_82CE4040(*(undefined4 *)(iVar1 + (int)param_2));
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}

