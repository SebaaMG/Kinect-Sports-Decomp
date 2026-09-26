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
extern int fn_8267C498();
extern int fn_826E4D70();
extern unsigned int lbl_8200DB34;


undefined4 *
fn_826F3790(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)param_2[3];
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*piVar1 + 0x10))(piVar1,param_4,param_5);
  }
  uVar6 = (**(code **)(*param_2 + 0x14))(param_2);
  fn_826E4D70(param_1,uVar5,uVar6);
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8267C498(uVar5);
  }
  *param_1 = &lbl_8200DB34;
  uVar2 = param_4[3];
  uVar3 = param_4[2];
  uVar4 = param_4[1];
  param_1[7] = *param_4;
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  param_1[10] = uVar2;
  param_1[0xb] = *param_3;
  return param_1;
}

