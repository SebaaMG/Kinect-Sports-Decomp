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
extern int fn_82F63108();


void fn_824C23E0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *apuStack_20 [2];
  
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 4))(apuStack_20);
  puVar2 = apuStack_20[0];
  ppuVar3 = (undefined4 **)(param_1 + 8);
  if (ppuVar3 != apuStack_20) {
    puVar1 = *ppuVar3;
    apuStack_20[0] = (undefined4 *)0x0;
    if (puVar2 == puVar1) {
      return;
    }
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *ppuVar3 = puVar2;
  }
  if (apuStack_20[0] != (undefined4 *)0x0) {
    (**(code **)*apuStack_20[0])(apuStack_20[0],1);
  }
  return;
}

