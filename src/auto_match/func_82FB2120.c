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
extern int fn_82FAF8F0();
extern int fn_82FFF990();
extern int fn_8300C838();
extern int fn_8300C920();


void fn_82FB2120(int *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  if (cRam83264328 == '\0') {
    fn_82FAF8F0();
  }
  else if (((ulonglong)(uint)param_1[0x2d] != 0) &&
          (lVar3 = (ulonglong)(uint)param_1[0x2d] - 1, param_1[0x2d] = (int)lVar3, lVar3 == 0)) {
    piVar2 = (int *)fn_8300C838(param_1 + 0x2b,param_1[0x31],param_1[0x33]);
    if ((piVar2 != (int *)0x0) && (piVar5 = (int *)param_1[0x2e], piVar5 != (int *)param_1[0x2f])) {
      do {
        piVar1 = (int *)piVar2[1];
        piVar4 = (int *)*piVar2;
        if (piVar4 != piVar1) {
          do {
            if (*piVar4 == *piVar5) break;
            piVar4 = piVar4 + 1;
          } while (piVar4 != piVar1);
          if (piVar4 != piVar1) {
            fn_82FFF990(piVar5[1]);
          }
        }
        piVar5 = piVar5 + 2;
      } while (piVar5 != (int *)param_1[0x2f]);
    }
    fn_8300C920(param_1 + 0x2b,param_1[0x31],param_1[0x33]);
    (**(code **)(*param_1 + 0x168))(param_1);
  }
  return;
}

