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
extern int fn_8265C990();
extern int fn_828F4860();
extern int fn_828F59D0();
extern int fn_828F5A30();
extern int fn_828F5B10();
extern int fn_828F5B70();
extern int fn_828FA4E0();
extern int fn_82930180();


void fn_828F5C88(int param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_828F5B10(*(int *)(param_1 + 0x40),1);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    fn_828F5B70(*(int *)(param_1 + 0x74),1);
  }
  iVar1 = *(int *)(param_1 + 0x274);
  if (iVar1 != 0) {
    fn_828F5A30(iVar1);
    fn_8265C990(iVar1,0x24810000);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_828F5B70(*(int *)(param_1 + 0x44),1);
  }
  piVar3 = (int *)(param_1 + 0x78);
  lVar2 = 0x7f;
  do {
    if (*piVar3 != 0) {
      fn_828F59D0(*piVar3,1);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  if (*(int *)(param_1 + 0x2a8) != 0) {
    fn_828F4860(param_1);
  }
  fn_828FA4E0(param_1 + 0x18);
  fn_82930180(param_1);
  return;
}

