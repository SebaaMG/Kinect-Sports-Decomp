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


ulonglong fn_823C4D40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x9a0);
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x41c);
    iVar3 = *(int *)(param_1 + 0x9a4);
    if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 5)) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x420) * 4 + **(int **)(param_1 + 8));
      iVar3 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),*(undefined4 *)(param_1 + 0x424)
                          );
    }
    if (iVar3 == 0) {
      return 0xffffffffffffffff;
    }
  }
  return (ulonglong)*(uint *)(iVar3 + 0x2c);
}

