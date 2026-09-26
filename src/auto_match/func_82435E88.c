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
extern int fn_8255B1E0();
extern unsigned int lbl_821CC160;


bool fn_82435E88(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if ((*param_2 == 0) || (**(char **)(**(int **)(param_1 + 0x40) + 0x174) == '\0')) {
    bVar3 = false;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x40);
    iVar2 = fn_8255B1E0((double)lbl_821CC160,
                              *(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x174) + 0x9c) + 0x844),
                              param_2,1,0,0,0,0);
    piVar1[0x3c] = iVar2;
    bVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0xf0) != 0;
  }
  return bVar3;
}

