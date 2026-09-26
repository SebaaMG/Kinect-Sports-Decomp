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
extern int fn_8229F5A8();
extern int fn_8229F9F8();
extern int fn_8229FAB8();
extern int fn_823CC298();


void fn_823DEBF0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(iVar1 + 0x430) != 0) {
    fn_823CC298(*(undefined4 *)(iVar1 + 0x4b8),8);
    *(undefined4 *)(iVar1 + 0x430) = 0;
  }
  fn_8229F5A8(*(undefined4 *)(*(int *)(**(int **)(iVar1 + 0x4b0) + 0xd4) + 0xc));
  iVar2 = *(int *)(*(int *)(**(int **)(iVar1 + 0x4b0) + 0xd4) + 0xc);
  if (*(int *)(iVar2 + 0x58) == 0) {
    fn_8229F9F8();
  }
  else {
    fn_8229FAB8(iVar2,*(undefined4 *)(*(int *)(iVar1 + 0x4bc) + 0xc),
                      *(undefined4 *)(*(int *)(iVar1 + 0x4bc) + 0x90));
  }
  return;
}

