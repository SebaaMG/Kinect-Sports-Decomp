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
extern int fn_82CE5410();
extern int fn_83081A78();


void fn_82D8A2F0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    iVar2 = fn_82CE5410();
    puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x10)
    ;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined2 *)((int)puVar3 + 6) = 0x8000;
      puVar3[2] = 0;
      *(undefined2 *)(puVar3 + 3) = 0;
      *(undefined2 *)((int)puVar3 + 0xe) = 0x8000;
    }
    *(undefined4 **)(param_1 + 0x214) = puVar3;
  }
  piVar1 = *(int **)(param_1 + 0x214);
  iVar2 = 0;
  if (*(ushort *)(piVar1 + 1) != 0) {
    piVar4 = (int *)*piVar1;
    do {
      if (*piVar4 == 0) {
        if (-1 < iVar2) {
          ((int *)*piVar1)[iVar2] = param_2;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(piVar1 + 1));
  }
  if (*(ushort *)(piVar1 + 1) == (*(ushort *)((int)piVar1 + 6) & 0x3fff)) {
    fn_83081A78(piVar1,4);
  }
  *(int *)((uint)*(ushort *)(piVar1 + 1) * 4 + *piVar1) = param_2;
  *(short *)(piVar1 + 1) = *(short *)(piVar1 + 1) + 1;
  return;
}

