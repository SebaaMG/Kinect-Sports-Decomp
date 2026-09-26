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
extern unsigned int *auStack_28;
extern int fn_82A1EFC0();


void fn_8257CD70(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_28 [40];
  
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_28,0,4);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    piVar2 = (int *)puVar1[2];
    if (piVar2[2] == 0) {
      piVar2[2] = 1;
      (**(code **)(*piVar2 + 4))();
    }
    puVar3 = *(undefined4 **)(param_1 + 0x28);
  }
  return;
}

