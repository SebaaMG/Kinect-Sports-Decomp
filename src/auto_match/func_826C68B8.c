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


undefined8 fn_826C68B8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1b4);
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(uint *)(iVar1 + 0xc) != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(*(int *)(iVar5 + *(int *)(iVar1 + 8)) + 0xc) == param_2) {
          piVar2 = *(int **)(*(int *)(uVar4 * 4 + *(int *)(iVar1 + 8)) + 8);
          if ((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x14))(), cVar3 != '\0')) {
            return 1;
          }
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar4 < *(uint *)(iVar1 + 0xc));
    }
  }
  return 0;
}

