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
extern int fn_822635D8();


void fn_82376508(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x600);
  if (*(int *)(iVar1 + 8) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    piVar3 = (int *)((int *)**(int **)(iVar2 + 8))[1];
    piVar4 = *(int **)**(int **)(iVar2 + 8);
    iVar5 = piVar4[4] * 4;
    fn_822635D8((double)*(float *)(iVar2 + 0x5e8),*(undefined4 *)(iVar2 + 0x5e0),
                    (int)*(float *)(*(int *)(iVar5 + *piVar4) + 0x20),
                    (int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20),iVar5,
                    *(undefined4 *)(iVar2 + 0x5ec),*(undefined4 *)(iVar2 + 0x5f0));
    *(int *)(iVar2 + 0x5e0) = *(int *)(iVar2 + 0x5e0) + 1;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}

