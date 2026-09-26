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
extern int fn_82266628();
extern int fn_82267EB0();
extern int fn_824BF8A8();
extern int fn_8265CA20();
extern int fn_82672C20();
extern unsigned int iStack_44;
extern unsigned int lbl_831CEF4C;
extern unsigned int uStack_48;


void fn_82267750(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int aiStack_50 [2];
  undefined4 uStack_48;
  int iStack_44;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (piVar2 == piVar1) {
      return;
    }
    iVar3 = piVar2[2];
    if (*(int *)(iVar3 + 0x40) == param_2) break;
    piVar2 = (int *)*piVar2;
    piVar1 = (int *)*param_1;
  }
  puVar4 = *(undefined4 **)(iVar3 + 0x520);
  aiStack_50[0] = iVar3;
  if (puVar4 != (undefined4 *)0x0) {
    if (*(int *)(iVar3 + 0x51c) != 0) {
      iVar5 = *(int *)(iVar3 + 0x540);
      fn_82672C20(*puVar4,(&lbl_831CEF4C)[iVar5],0,0);
      puVar4[iVar5 * 0x8d + 10] = 0;
      puVar4[iVar5 * 0x8d + 0xb] = 0;
      *(undefined4 *)(*(int *)(iVar3 + 0x540) * 0x234 + *(int *)(iVar3 + 0x520) + 0x24) = 0;
    }
    *(undefined4 *)(iVar3 + 0x520) = 0;
  }
  if ((*(uint *)(iVar3 + 0xa0) & 2) == 0) {
    uVar7 = 7;
    uVar6 = 8;
  }
  else {
    uVar7 = 5;
    uVar6 = 6;
  }
  fn_82266628(iVar3,uVar6,uVar7);
  uStack_48 = 1;
  iStack_44 = param_2;
  fn_824BF8A8((ulonglong)(uint)param_1[6] + 0x1c,&uStack_48);
  if (piVar2 != (int *)*param_1) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    fn_8265CA20(piVar2);
    param_1[1] = param_1[1] + -1;
  }
  fn_82267EB0(param_1 + 3,aiStack_50);
  return;
}

