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
extern int fn_8265C9E0();
extern int fn_8288DE90();
extern int fn_8288FB88();
extern int fn_828A12E8();
extern int fn_828E02B0();
extern unsigned int lbl_820266A0;
extern unsigned int lbl_820266CC;


void fn_828CF370(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_828A12E8();
  fn_8288FB88();
  (**(code **)(*param_1 + 0x50))(param_1);
  fn_828A12E8(param_1);
  fn_8288DE90();
  puVar2 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_828E02B0(puVar2,0);
    *puVar2 = &lbl_820266CC;
  }
  puVar1 = (undefined4 *)param_1[0xae];
  param_1[0xae] = (int)puVar2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_828E02B0(puVar2,1);
    *puVar2 = &lbl_820266A0;
  }
  puVar1 = (undefined4 *)param_1[0xaf];
  param_1[0xaf] = (int)puVar2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  (**(code **)(*(int *)param_1[0xae] + 4))((int *)param_1[0xae],param_1);
  (**(code **)(*(int *)param_1[0xaf] + 4))((int *)param_1[0xaf],param_1);
  return;
}

