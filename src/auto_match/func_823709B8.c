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
extern int fn_8236F868();
extern unsigned int lbl_821CC160;


void fn_823709B8(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x600);
  fVar1 = *(float *)(*(int *)((*(int **)**(undefined4 **)(param_1 + 8))[4] * 4 +
                             **(int **)**(undefined4 **)(param_1 + 8)) + 0x20);
  *(undefined4 *)((*(int *)(iVar2 + 0xc) + 8) * 4 + iVar2) = *(undefined4 *)(param_1 + 0x5e8);
  *(float *)((*(int *)(iVar2 + 0xc) + 4) * 4 + iVar2) = (float)(longlong)(int)fVar1;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  fn_8236F868();
  *(undefined4 *)(param_1 + 0x288) = lbl_821CC160;
  return;
}

