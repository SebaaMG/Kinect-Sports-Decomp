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
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


undefined8 fn_82FF4438(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x7c);
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    do {
      if (((param_2 == 0) || (piVar2[0x1c] == param_2)) &&
         ((param_4 == 0 || (param_4 == piVar2[0x14])))) {
        if ((piVar1 == (int *)0x0) &&
           (piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_3),
           piVar1 == (int *)0x0)) {
          return 2;
        }
        (**(code **)(*piVar2 + 0x18))(piVar2,piVar1);
      }
      piVar2 = (int *)piVar2[5];
    } while (piVar2 != (int *)0x0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return 1;
}

