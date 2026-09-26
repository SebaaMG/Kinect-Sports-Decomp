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


uint fn_82373530(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x1e4) * 4 + **(int **)(param_1 + 8));
  if (1 < *(uint *)(*(int *)(piVar3[4] * 4 + *piVar3) + 8)) {
    iVar1 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
    iVar2 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),1);
    if ((*(int *)(iVar1 + 0x24) != 0) != (*(int *)(iVar2 + 0x24) != 0)) {
      return (uint)(*(int *)(iVar1 + 0x24) == 0);
    }
  }
  return *(uint *)(param_1 + 0x1e8);
}

