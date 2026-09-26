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
extern unsigned int lbl_832642E8;


undefined4 fn_83006EF8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x24);
        (piVar2 != *(int **)(iVar1 + 0x28) && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
    }
    puVar4 = (undefined4 *)(-(uint)(*(int **)(iVar1 + 0x28) != piVar2) & (uint)(piVar2 + 1));
    if (puVar4 != (undefined4 *)0x0) {
      if ((*(byte *)(puVar4 + 2) & 0x80) == 0) {
        return *puVar4;
      }
      for (piVar2 = *(int **)(lbl_832642E8 + 4);
          (piVar2 != *(int **)(lbl_832642E8 + 8) && (*piVar2 != *(int *)(iVar1 + 0x30)));
          piVar2 = piVar2 + 2) {
      }
      iVar1 = *(int *)(-(uint)(*(int **)(lbl_832642E8 + 8) != piVar2) & (uint)(piVar2 + 1));
      piVar2 = *(int **)(iVar1 + 0x14);
      for (piVar3 = *(int **)(iVar1 + 0x10); (piVar3 != piVar2 && (*piVar3 != param_2));
          piVar3 = piVar3 + 4) {
      }
      puVar4 = (undefined4 *)(-(uint)(piVar2 != piVar3) & (uint)(piVar3 + 1));
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      return *puVar4;
    }
  }
  return 0;
}

