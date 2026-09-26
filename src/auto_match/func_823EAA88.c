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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82251CE8();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_34;
extern unsigned int uStack_38;


void fn_823EAA88(int *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [48];
  
  iVar1 = *param_1;
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  auStack_40[0] = param_2;
  iVar4 = fn_8265C9E0(0x28);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_822D7FE0();
  }
  uStack_38 = 0;
  iStack_34 = 0;
  fn_822D79D8(&uStack_38,uVar3);
  (**(code **)(**(int **)(iVar1 + 0x90) + 0x10))(*(int **)(iVar1 + 0x90),uStack_38,auStack_40);
  (**(code **)(**(int **)(iVar1 + 0x98) + 0x10))(*(int **)(iVar1 + 0x98),uStack_38,auStack_30);
  (**(code **)(**(int **)(iVar1 + 0xa0) + 0x10))(*(int **)(iVar1 + 0xa0),uStack_38,param_3);
  if (*(int *)(iVar1 + 0x70) != 0) {
    fn_828E9D90(uStack_38);
    fn_828E9D40(uStack_38);
    fn_82251CE8(iVar1 + 0x28,uStack_38,iVar1 + 0x60);
  }
  fn_828E2B28(iVar1 + 0x28,&uStack_38);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

