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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822A5480();
extern int fn_82517978();
extern int fn_82555A88();
extern int fn_8266F2D0();
extern int fn_82672C20();
extern unsigned int lbl_821958F0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8247AEC0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  piVar1 = *(int **)(param_1 + 0x5c4);
  iVar2 = *piVar1;
  dVar7 = (double)lbl_821CC160;
  uVar6 = (ulonglong)*(uint *)(*(int *)(param_2 + 0x3e4) + 0x8c0);
  if (iVar2 != 0) {
    piVar5 = (int *)fn_82555A88(uVar6 + 0x98,0xffffffff821bd31c);
    if ((piVar5 != (int *)0x0) && (iVar3 = *piVar5, iVar3 != 0)) {
      uStack_80 = 0;
      uStack_7c = 0;
      fn_82517978(&uStack_80,iVar2,piVar1[1],0);
      fn_8266F2D0(dVar7,iVar3,&uStack_80,0);
    }
  }
  fn_822A5480(*(undefined4 *)(param_1 + 0x5c4),0xffffffff820e975c);
  uStack_70 = 0;
  uStack_6c = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x5c4);
  fn_82273CD8(&uStack_70,3);
  uStack_68 = lbl_821958F0;
  uVar8 = lbl_821958F0;
  fn_82672C20(*puVar4,0xffffffff821ac400,&uStack_70,1);
  fn_82273C88(&uStack_70);
  piVar1 = *(int **)(param_1 + 0x5c8);
  iVar2 = *piVar1;
  if (((iVar2 != 0) &&
      (piVar5 = (int *)fn_82555A88(uVar6 + 0x98,0xffffffff821bd334), piVar5 != (int *)0x0)) &&
     (iVar3 = *piVar5, iVar3 != 0)) {
    uStack_80 = 0;
    uStack_7c = 0;
    fn_82517978(&uStack_80,iVar2,piVar1[1],0);
    fn_8266F2D0(dVar7,iVar3,&uStack_80,0);
  }
  fn_822A5480(*(undefined4 *)(param_1 + 0x5c8),0xffffffff820e975c);
  uStack_60 = 0;
  uStack_5c = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x5c8);
  fn_82273CD8(&uStack_60,3);
  uStack_58 = uVar8;
  fn_82672C20(*puVar4,0xffffffff821ac400,&uStack_60,1);
  fn_82273C88(&uStack_60);
  return;
}

