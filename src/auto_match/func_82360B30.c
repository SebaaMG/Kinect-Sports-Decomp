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
extern int fn_8288B760();


undefined8 fn_82360B30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
  if (*(int *)(iVar2 + 0x24) != 0) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(uint *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760(*(int *)(iVar2 + 0x168));
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

