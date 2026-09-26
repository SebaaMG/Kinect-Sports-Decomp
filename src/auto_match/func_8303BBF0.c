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
extern int fn_83004FC0();
extern unsigned int lbl_832642E0;


void fn_8303BBF0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    for (param_2 = (undefined4 *)*param_2; param_2 != (undefined4 *)0x0;
        param_2 = (undefined4 *)*param_2) {
      piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_2[1]);
      if (piVar1 != (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x1c);
        bVar2 = false;
        if (piVar3 != *(int **)(param_1 + 0x20)) {
          do {
            if (*piVar3 == piVar1[3]) {
              bVar2 = true;
              break;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 != *(int **)(param_1 + 0x20));
        }
        if (!bVar2) {
          fn_83004FC0(piVar1,*(undefined4 *)(param_1 + 0x2c),0);
        }
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  return;
}

