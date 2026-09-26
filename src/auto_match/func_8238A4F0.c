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
extern int fn_822ABA88();
extern int fn_82372F88();
extern int fn_824A5DE0();
extern int fn_824CCFC8();


undefined8 fn_8238A4F0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = fn_82372F88(iVar3);
  uVar5 = 0;
  piVar1 = *(int **)(iVar2 * 4 + **(int **)(iVar3 + 8));
  iVar3 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar3 + 8) != 0) {
    do {
      iVar3 = fn_822ABA88(iVar3,uVar5);
      uVar4 = (ulonglong)*(uint *)(iVar3 + 0x24);
      if ((((uVar4 != 0) && (*(int *)(*(uint *)(iVar3 + 0x24) + 0x158) != 0)) &&
          (iVar3 = fn_824A5DE0(), iVar3 != 0)) && (iVar3 = fn_824CCFC8(uVar4), iVar3 != 0)
         ) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 8));
  }
  return 0;
}

