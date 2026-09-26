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
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8242C1B8();
extern unsigned int lbl_832975B0;


void fn_8242C298(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_8242C1B8();
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    piVar3 = *(int **)((*(int *)(iVar1 + 0x2c) + 1) * 4 + **(int **)(param_1 + 8));
  }
  else if (*(int *)(iVar1 + 0x2c) == 0) {
    piVar3 = (int *)((undefined4 *)**(int **)(param_1 + 8))[1];
  }
  else {
    piVar3 = *(int **)**(int **)(param_1 + 8);
  }
  fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),0);
  return;
}

