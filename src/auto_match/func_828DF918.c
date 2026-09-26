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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_828CCCC0();
extern int fn_828E7140();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;


undefined4 * fn_828DF918(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar2;
  int *piStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  piVar3 = (int *)(**(code **)(*param_2 + 8))(auStack_40);
  iVar1 = *piVar3;
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if (iVar1 == 0) {
    uVar2 = (**(code **)*param_2)(param_2);
    fn_828E7140(&piStack_50,uVar2);
    piStack_50[3] = (int)param_3;
    *param_1 = 0;
    param_1[1] = 0;
    fn_828CCCC0(param_1,piStack_50,iStack_4c,0);
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
  }
  else {
    puVar4 = (undefined4 *)(*(code *)((undefined4 *)*param_2)[2])(auStack_38,param_2);
    fn_828DF918(auStack_48,*puVar4,param_3);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    uVar2 = (**(code **)*param_2)(param_2);
    fn_828E7140(&piStack_50,uVar2);
    (**(code **)(*piStack_50 + 0x18))(piStack_50,auStack_48);
    *param_1 = 0;
    param_1[1] = 0;
    fn_828CCCC0(param_1,piStack_50,iStack_4c,0);
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

