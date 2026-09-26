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
extern int fn_82E50330();
extern unsigned int uStack_38;


undefined8 fn_82E51DE8(undefined8 param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piStack_50;
  int *apiStack_4c [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if (((param_2 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (undefined4 *)0x0))
  {
    return 0xffffffff80004003;
  }
  *param_3 = 0;
  *param_4 = 0;
  piStack_50 = (int *)0x0;
  uVar2 = 0;
  uStack_38 = 0;
  apiStack_4c[0] = (int *)0x0;
  iVar1 = (**(code **)*param_2)(param_2,0xffffffff821531c8,&piStack_50);
  if (iVar1 < 0) {
    iVar1 = (**(code **)*param_2)(param_2,0xffffffff821531d8,apiStack_4c);
    if (iVar1 < 0) goto LAB_82e51ee4;
    iVar1 = (**(code **)(*apiStack_4c[0] + 0x98))();
    iVar1 = (int)*(undefined8 *)(iVar1 + 0x88);
  }
  else {
    iVar1 = (**(code **)(*piStack_50 + 0x98))();
    if ((*(uint *)(iVar1 + 8) & 0x7fffff00) == 0x7fffff00) {
      uVar2 = 0xffffffffc00d3aa0;
      goto LAB_82e51ee4;
    }
    iVar1 = *(uint *)(iVar1 + 8) << 3;
  }
  *param_3 = iVar1;
LAB_82e51ee4:
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (apiStack_4c[0] != (int *)0x0) {
    (**(code **)(*apiStack_4c[0] + 8))();
    apiStack_4c[0] = (int *)0x0;
  }
  fn_82E50330(auStack_40);
  return uVar2;
}

