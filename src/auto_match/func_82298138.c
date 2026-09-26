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
extern int fn_822315A0();
extern int fn_82297DB0();
extern int fn_822980B0();
extern int fn_82299308();
extern int fn_8229E090();
extern int fn_82536288();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();


void fn_82298138(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  
  uVar1 = *param_1;
  uVar4 = fn_8266F6B8();
  fn_826728E8(uVar1,0xffffffff821aa9b8,uVar4);
  if (param_1[0x18] != 0) {
    fn_8229E090(param_1[0x18],0,1);
    param_1[0x18] = 0;
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    cVar5 = (**(code **)(*(int *)param_1[0x21] + 4))();
    if (cVar5 == '\0') {
      (*(code *)**(undefined4 **)param_1[0x21])();
    }
    fn_82536288(param_1 + 0x21);
  }
  fn_82297DB0(param_1 + 0x19,1,0);
  fn_822980B0(param_1 + 0xe);
  fn_822980B0(param_1 + 10);
  fn_822980B0(param_1 + 6);
  cVar5 = *(char *)((int)*(int **)(param_1[3] + 4) + 0x2d);
  piVar3 = *(int **)(param_1[3] + 4);
  while (cVar5 == '\0') {
    fn_82299308(param_1 + 2,piVar3[2]);
    piVar2 = (int *)*piVar3;
    fn_82297DB0(piVar3 + 4,1,0);
    fn_8265CA20(piVar3);
    piVar3 = piVar2;
    cVar5 = *(char *)((int)piVar2 + 0x2d);
  }
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  *(undefined4 *)param_1[3] = param_1[3];
  *(undefined4 *)(param_1[3] + 8) = param_1[3];
  param_1[4] = 0;
  fn_8265CA20(param_1[3]);
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

