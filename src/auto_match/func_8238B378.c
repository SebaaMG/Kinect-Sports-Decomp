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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_82365BD8();
extern int fn_823748D0();
extern int fn_824C97F0();
extern int fn_824D2AE8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821CC160;


void fn_8238B378(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [56];
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  fn_824D2AE8(&iStack_40,(ulonglong)*(uint *)(param_1 + 8) + 0x1b0);
  uVar1 = lbl_821CC160;
  *(undefined4 *)(iStack_40 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  piVar4 = (int *)(*(undefined4 **)(param_1 + 0x1c))[1];
  for (piVar3 = (int *)**(undefined4 **)(param_1 + 0x1c); piVar3 != piVar4; piVar3 = piVar3 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar3 + 0x28),0xffffffff821b45a8);
  }
  piVar3 = (int *)(*(undefined4 **)(param_1 + 0x1c))[1];
  for (piVar4 = (int *)**(undefined4 **)(param_1 + 0x1c); piVar4 != piVar3; piVar4 = piVar4 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar4 + 0x28),0xffffffff821add8c);
  }
  fn_8228E658(param_1 + 0xc,&iStack_40);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = fn_82365BD8(auStack_38,&iStack_40);
  fn_823748D0(uVar1,uVar2);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

