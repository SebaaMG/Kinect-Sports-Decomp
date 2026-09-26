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
extern int fn_82A43A30();
extern int fn_82A47B28();
extern int fn_82A4F4E0();


void fn_82A482A0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x214) == 0) {
    *param_2 = 1;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x20c);
    if (iVar1 == 0) {
      *param_2 = 1;
    }
    else {
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)piVar2[1];
    }
    if (piVar2 != (int *)0x0) {
      do {
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar3 = piVar2;
        }
        else {
          iVar1 = *piVar2;
          piVar3 = (int *)piVar2[1];
        }
        fn_82A47B28(param_1 + 500,piVar2);
        fn_82A43A30(param_1 + 0x8c,*(undefined4 *)(iVar1 + 0x20),0);
        fn_82A4F4E0(iVar1);
        piVar2 = piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  return;
}

