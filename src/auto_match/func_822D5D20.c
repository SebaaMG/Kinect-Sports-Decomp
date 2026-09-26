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
extern int fn_822315A0();
extern int fn_822367E0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_44;
extern unsigned int lbl_831CD888;
extern unsigned char lbl_831CD88C[];
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_822D5D20(int *param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  iVar3 = 0;
  pcVar5 = lbl_831CD88C;
  while( true ) {
    pcVar6 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pcVar6 = *(char **)param_3;
    }
    cVar7 = *pcVar6;
    cVar8 = *pcVar5;
    if (cVar7 == cVar8) {
      iVar4 = (int)pcVar5 - (int)pcVar6;
      do {
        pcVar6 = pcVar6 + 1;
        if (cVar7 == '\0') goto LAB_822d5de8;
        cVar7 = *pcVar6;
        cVar8 = pcVar6[iVar4];
      } while (cVar7 == cVar8);
    }
    if (cVar7 == cVar8) break;
    pcVar5 = pcVar5 + 0x24;
    iVar3 = iVar3 + 1;
    if (-0x7ce325c5 < (int)pcVar5) {
      uStack_4c = 0xc;
LAB_822d5da8:
      iVar3 = *param_1;
      puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar1 = in_register_00010010;
      puVar1[1] = in_register_00010014;
      puVar1[2] = in_register_00010018;
      puVar1[3] = in_vr1;
      uStack_50 = param_2;
      iVar3 = (**(code **)(iVar3 + 0x50))();
      iVar4 = fn_8265C9E0(0x28);
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_822D7FE0();
      }
      uStack_48 = 0;
      iStack_44 = 0;
      fn_822D79D8(&uStack_48,uVar2);
      (**(code **)(**(int **)(iVar3 + 0x98) + 0x10))(*(int **)(iVar3 + 0x98),uStack_48,&uStack_50);
      (**(code **)(**(int **)(iVar3 + 0xa0) + 0x10))(*(int **)(iVar3 + 0xa0),uStack_48,&uStack_4c);
      (**(code **)(**(int **)(iVar3 + 0xa8) + 0x10))(*(int **)(iVar3 + 0xa8),uStack_48,auStack_40);
      if (*(int *)(iVar3 + 0x78) != 0) {
        fn_828E9D90(uStack_48);
        fn_828E9D40(uStack_48);
        fn_822367E0(iVar3 + 0x30,uStack_48,iVar3 + 0x68);
      }
      fn_828E2B28(iVar3 + 0x30,&uStack_48);
      if (iStack_44 != 0) {
        fn_822315A0();
      }
      return;
    }
  }
LAB_822d5de8:
  uStack_4c = (&lbl_831CD888)[iVar3 * 9];
  goto LAB_822d5da8;
}

