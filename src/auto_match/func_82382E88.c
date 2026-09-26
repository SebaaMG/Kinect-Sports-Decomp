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
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


void fn_82382E88(int *param_1)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  iVar3 = *param_1;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  iVar3 = (**(code **)(iVar3 + 0x4c))();
  iVar4 = fn_8265C9E0(0x28);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  uStack_50 = 0;
  iStack_4c = 0;
  fn_822D79D8(&uStack_50,uVar2);
  (**(code **)(**(int **)(iVar3 + 0x428) + 0x10))(*(int **)(iVar3 + 0x428),uStack_50,auStack_40);
  if (*(int *)(iVar3 + 0x408) != 0) {
    fn_828E9D90(uStack_50);
    fn_828E9D40(uStack_50);
    (**(code **)(**(int **)(iVar3 + 0x428) + 0x14))(*(int **)(iVar3 + 0x428),uStack_50,auStack_30);
    if (*(int *)(iVar3 + 0x408) != 0) {
      (**(code **)(**(int **)(iVar3 + 0x408) + 4))();
    }
  }
  fn_828E2B28(iVar3 + 0x3c0,&uStack_50);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  return;
}

