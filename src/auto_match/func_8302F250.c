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
extern char cRam83264328;
extern int fn_82FB0438();
extern int fn_8300C838();
extern int fn_8300C920();
extern int fn_8302EE80();


void fn_8302F250(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  if (cRam83264328 == '\0') {
    fn_82FB0438();
  }
  else if (((ulonglong)*(uint *)(param_1 + 0xb4) != 0) &&
          (lVar4 = (ulonglong)*(uint *)(param_1 + 0xb4) - 1, *(int *)(param_1 + 0xb4) = (int)lVar4,
          lVar4 == 0)) {
    piVar3 = (int *)fn_8300C838(param_1 + 0xac,*(undefined4 *)(param_1 + 0xbc),
                                      *(undefined4 *)(param_1 + 0xb8));
    if (piVar3 != (int *)0x0) {
      for (puVar1 = *(undefined4 **)(param_1 + 0xc4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        piVar2 = (int *)piVar3[1];
        piVar5 = (int *)*piVar3;
        if (piVar5 != piVar2) {
          do {
            if (*piVar5 == puVar1[1]) break;
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar2);
          if (piVar5 != piVar2) {
            fn_8302EE80(param_1,puVar1 + 2);
          }
        }
      }
    }
    fn_8300C920(param_1 + 0xac,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xb8));
  }
  return;
}

