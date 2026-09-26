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
extern int fn_82F68B7C();


void fn_82D04E50(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((int)param_2 < 1) {
    return;
  }
  lVar3 = ((ulonglong)*(uint *)(param_1 + 4) - param_2) + -1;
  piVar1 = (int *)fn_82F68B7C();
  iVar2 = fn_82CE5410();
  iVar5 = (int)(lVar3 + 1);
  if ((int)(piVar1[2] & 0x3fffffffU) < iVar5) {
    lVar4 = ((ulonglong)(uint)piVar1[2] & 0x3fffffff) << 1;
    if ((int)lVar4 <= iVar5) {
      lVar4 = lVar3 + 1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0xc),piVar1,lVar4,1);
  }
  piVar1[1] = iVar5;
  *(undefined1 *)(*piVar1 + (int)lVar3) = 0;
  return;
}

