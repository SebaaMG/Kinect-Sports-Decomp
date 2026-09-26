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
extern int fn_828E0270();


undefined4 *
fn_828CB590(undefined4 *param_1,int *param_2,longlong param_3,undefined8 param_4,char *param_5,
             int *param_6)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = (int *)0x0;
  cVar2 = '\x01';
  if ((int *)*param_2 != (int *)0x0) {
    iVar5 = 0;
    piVar1 = (int *)*param_2;
    do {
      param_2 = piVar1;
      iVar5 = iVar5 + 1;
      cVar2 = fn_828E0270(param_3 + 0x10,param_2 + 4);
      if (cVar2 == '\0') {
        piVar1 = (int *)param_2[2];
        piVar4 = param_2;
      }
      else {
        piVar1 = (int *)param_2[1];
      }
    } while (piVar1 != (int *)0x0);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar5;
  }
  if ((piVar4 == (int *)0x0) ||
     (cVar3 = fn_828E0270(piVar4 + 4,param_3 + 0x10), cVar3 != '\0')) {
    *param_5 = cVar2;
    *(int **)(param_5 + 4) = param_2;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *param_1 = piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

