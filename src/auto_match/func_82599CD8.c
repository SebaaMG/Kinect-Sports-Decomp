extern int *piRam83296d40;
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
extern unsigned int *auStack_40;
extern int fn_82549610();
extern int fn_82549660();
extern int fn_82549798();
extern int fn_8259C738();
extern int fn_825B49E8();
extern int fn_82A1BB18();


void fn_82599CD8(int param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 auStack_40;

  if (((*(int *)(param_1 + 0x144) != 0) &&
      (piVar1 = *(int **)(param_1 + 0x14), piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
    fn_82549610(&auStack_40,0xffffffff83296d4c);
    if (piRam83296d40 == (int *)0x0) {
      fn_82549660(0x200000,1);
    }
    iVar2 = *piRam83296d40;
    fn_82A1BB18();
    fn_8259C738(auStack_40);
    if ((param_2 & 0xffffffff) <= (ulonglong)(uint)(0x1000 << (iVar2 - 1U & 0x3f))) {
      iVar2 = piVar1[2];
      if (iVar2 == 0) {
        fn_82549610(&auStack_40,0xffffffff83296d4c);
        if (piRam83296d40 == (int *)0x0) {
          fn_82549660(0x200000,1);
        }
        iVar2 = fn_825B49E8(piRam83296d40,param_2);
        fn_82A1BB18();
        fn_8259C738(auStack_40);
      }
      else {
        piVar1[2] = 0;
      }
      if (iVar2 != 0) {
        return;
      }
    }
  }
  fn_82549798(param_2,param_3,0x404,0);
  return;
}
