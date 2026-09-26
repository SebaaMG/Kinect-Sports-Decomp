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
extern int fn_82359C18();
extern int fn_823D6298();
extern int fn_8265CA20();


void fn_823D5E08(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x49);
  while (cVar1 == '\0') {
    fn_823D6298(param_1,piVar2[2]);
    piVar3 = (int *)*piVar2;
    fn_82359C18(piVar2 + 0xc);
    fn_82359C18(piVar2 + 6);
    fn_8265CA20(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x49);
  }
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 4));
  return;
}

