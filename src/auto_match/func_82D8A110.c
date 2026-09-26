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


void fn_82D8A110(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    iVar1 = fn_82CE5410();
    puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x10)
    ;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      *(undefined2 *)(puVar2 + 1) = 0;
      *(undefined2 *)((int)puVar2 + 6) = 0x8000;
      puVar2[2] = 0;
      *(undefined2 *)(puVar2 + 3) = 0;
      *(undefined2 *)((int)puVar2 + 0xe) = 0x8000;
    }
    *(undefined4 **)(param_1 + 0x214) = puVar2;
  }
  iVar1 = *(int *)(param_1 + 0x214);
  iVar4 = 0;
  piVar5 = (int *)(iVar1 + 8);
  if (*(ushort *)(iVar1 + 0xc) != 0) {
    piVar3 = (int *)*piVar5;
    do {
      if (*piVar3 == 0) {
        if (-1 < iVar4) {
          ((int *)*piVar5)[iVar4] = param_2;
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + 0xc));
  }
  if (*(ushort *)(iVar1 + 0xc) == (*(ushort *)(iVar1 + 0xe) & 0x3fff)) {
    fn_83081A78(piVar5,4);
  }
  *(int *)((uint)*(ushort *)(iVar1 + 0xc) * 4 + *piVar5) = param_2;
  *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + 1;
  return;
}

