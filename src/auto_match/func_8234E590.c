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
extern int fn_824BF8A8();
extern int fn_8250E4D0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_82670C10();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 *
fn_8234E590(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  fn_8255FD70(&piStack_50,*(undefined4 *)(param_5 + 0x24),param_2);
  piVar2 = piStack_4c;
  piVar1 = piStack_50;
  for (piVar3 = piStack_50; piVar3 != piVar2; piVar3 = piVar3 + 1) {
    piStack_50 = *(int **)(*piVar3 + 0x40);
    piStack_4c = *(int **)(*piVar3 + 0x44);
    fn_824BF8A8(&uStack_40,&piStack_50);
  }
  if (piVar1 != (int *)0x0) {
    fn_8265CA20(piVar1);
  }
  fn_8250E4D0(param_1 + 3,&uStack_40,0xffffffff82511558,param_5 + 0x14);
  fn_82670C10(&uStack_40);
  return param_1;
}

