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
extern int fn_8288B760();


undefined8 fn_82591910(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  
  for (iVar3 = *(int *)(param_2 + 0x84) + 0x80; *(int *)(iVar3 + 4) != 0;
      iVar3 = *(int *)(iVar3 + 4)) {
  }
  *(int **)(iVar3 + 4) = (int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0xa0);
  if (*(int *)(param_1 + 0x20) == 0) {
    cVar5 = *(int *)(param_1 + 0x24) != 0;
  }
  else {
    cVar5 = fn_8288B760();
  }
  if (cVar5 == '\0') {
    iVar3 = *(int *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    puVar4 = (undefined4 *)(param_1 + 0x48);
    for (piVar2 = (int *)(iVar3 + 0x88); *piVar2 != 0; piVar2 = (int *)*piVar2) {
    }
    puVar1 = (undefined4 *)piVar2[1];
    piVar2[1] = (int)puVar4;
    *puVar4 = piVar2;
    *(undefined4 **)(param_1 + 0x4c) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar4;
    }
  }
  return 1;
}

