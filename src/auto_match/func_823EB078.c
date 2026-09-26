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
extern unsigned int *auStack_50;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82250D10();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_ac;
extern unsigned int uStack_30;
extern unsigned int uStack_b0;


void fn_823EB078(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_r0;
  int iVar5;
  undefined8 uVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined1 auStack_a0 [80];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  iVar1 = *param_1;
  iVar5 = fn_8265C9E0(0x28);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822D7FE0();
  }
  uStack_b0 = 0;
  iStack_ac = 0;
  fn_822D79D8(&uStack_b0,uVar4);
  (**(code **)(**(int **)(iVar1 + 0xda8) + 0x10))(*(int **)(iVar1 + 0xda8),uStack_b0,param_2);
  if (*(int *)(iVar1 + 0xd88) != 0) {
    fn_828E9D90(uStack_b0);
    fn_828E9D40(uStack_b0);
    uVar3 = uStack_b0;
    fn_82250D10(auStack_a0);
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    uStack_30 = 0xffffffff;
    (**(code **)(**(int **)(iVar1 + 0xda8) + 0x14))(*(int **)(iVar1 + 0xda8),uVar3,auStack_a0);
    if (*(int *)(iVar1 + 0xd88) != 0) {
      (**(code **)(**(int **)(iVar1 + 0xd88) + 4))(*(int **)(iVar1 + 0xd88),auStack_a0);
    }
  }
  fn_828E2B28(iVar1 + 0xd40,&uStack_b0);
  if (iStack_ac != 0) {
    fn_822315A0();
  }
  return;
}

