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
extern int fn_8289C078();
extern int fn_8289C128();
extern int fn_8289C1A0();


void fn_8289C308(int param_1,ulonglong param_2)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar1 == 0)) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar1 != 0))
      goto LAB_8289c3dc;
      if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 8))(), iVar1 == 0)) {
        if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
           (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar1 != 0)) {
          return;
        }
        if (*(int **)(param_1 + 0x20) == (int *)0x0) {
          return;
        }
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
        if (iVar1 == 0) {
          return;
        }
        if (*(int **)(param_1 + 0x20) == (int *)0x0) goto LAB_8289c4ac;
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
      }
      else if (*(int **)(param_1 + 0x20) == (int *)0x0) {
LAB_8289c4ac:
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 8))();
      }
      if ((param_2 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 4)) {
        return;
      }
    }
    else {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
      }
      if ((param_2 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 4)) {
        return;
      }
      fn_8289C128(param_1);
    }
    fn_8289C1A0(param_1);
  }
  else {
LAB_8289c3dc:
    fn_8289C078(param_1,param_2);
  }
  return;
}

