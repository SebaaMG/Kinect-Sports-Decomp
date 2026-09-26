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
extern int fn_82F63CA0();


void fn_82494A40(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != *(int **)(param_1 + 8)) {
    piVar3 = piVar4 + 1;
    do {
      iVar2 = (**(code **)(*(int *)*piVar4 + 0x18))((int *)*piVar4,param_2,param_3);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)*piVar4;
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        fn_82F63CA0(piVar4,piVar3,(*(int *)(param_1 + 8) - (int)piVar3 >> 2) << 2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      }
      else {
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      }
    } while (piVar4 != *(int **)(param_1 + 8));
  }
  return;
}

