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
extern unsigned int *auStack_24;
extern unsigned int *auStack_30;
extern unsigned int fStack_28;
extern int fn_825089A0();
extern int fn_828A2C80();
extern int fn_828A3878();
extern int fn_828B5580();
extern int fn_828B55B0();


void fn_828A4F60(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar3;
  int *piVar2;
  double dVar4;
  undefined1 auStack_30 [8];
  float fStack_28;
  undefined1 auStack_24 [12];
  
  uVar1 = fn_828B5580(auStack_30);
  cVar3 = fn_828A2C80(param_1,uVar1);
  if (cVar3 == '\0') {
    piVar2 = (int *)fn_825089A0();
    dVar4 = (double)(**(code **)(*piVar2 + 8))();
    fStack_28 = (float)dVar4;
    fn_828B5580(auStack_24,param_2);
    fn_828A3878(param_1 + 0x2f4,*(undefined4 *)(param_1 + 0x2f4),&fStack_28);
    fn_828B55B0(auStack_24);
  }
  fn_828B55B0(param_2);
  return;
}

