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
extern int fn_822CEFA0();


undefined8 fn_823737B8(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  uVar1 = *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar1 != 0) {
    uVar3 = *(undefined4 *)(piVar2[4] * 4 + *piVar2);
    do {
      uVar4 = fn_822ABA88(uVar3,uVar6);
      iVar5 = fn_822CEFA0();
      if (iVar5 != 0) {
        return uVar4;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (ulonglong)uVar1);
  }
  return 0;
}

