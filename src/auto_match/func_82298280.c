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
extern unsigned int *auStack_70;
extern int fn_822985B0();
extern int fn_82299288();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82672C20();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_821CC160;


void fn_82298280(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar4;
  undefined4 uVar3;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iStack_80;
  int iStack_7c;
  int aiStack_78 [2];
  undefined1 auStack_70 [112];
  
  piVar6 = param_1 + 0x13;
  piVar5 = param_1 + 0x12;
  if (param_1[0x12] == param_1[0x13]) {
    if (param_1[0x13] == 0xb) {
      fn_822985B0((double)(float)param_1[0x14],param_1);
    }
  }
  else {
    fn_82299288(&iStack_80,param_1 + 10,piVar5);
    fn_82299288(&iStack_7c,param_1 + 6,piVar6);
    fn_82299288(aiStack_78,param_1 + 0xe,piVar6);
    if (iStack_80 != param_1[0xb]) {
      iVar1 = *(int *)(iStack_80 + 0x10);
      fn_828648F0(auStack_70,0xffffffff832845dc);
      uVar2 = fn_828647D8();
      iStack_80 = iVar1;
      iStack_80 = fn_82535298(&iStack_80,uVar2,0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82864898(auStack_70);
      fn_82536288(&iStack_80);
    }
    if (iStack_7c != param_1[7]) {
      iVar1 = *(int *)(iStack_7c + 0x10);
      fn_828648F0(auStack_70,0xffffffff832845dc);
      uVar2 = fn_828647D8();
      iStack_7c = iVar1;
      iStack_7c = fn_82535298(&iStack_7c,uVar2,0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82864898(auStack_70);
      fn_82536288(&iStack_7c);
    }
    puVar7 = param_1 + 0x21;
    if ((int *)param_1[0x21] != (int *)0x0) {
      cVar4 = (**(code **)(*(int *)param_1[0x21] + 4))();
      if (cVar4 == '\0') {
        (*(code *)**(undefined4 **)*puVar7)();
      }
      fn_82536288(puVar7);
    }
    if (aiStack_78[0] != param_1[0xf]) {
      iVar1 = *(int *)(aiStack_78[0] + 0x10);
      fn_828648F0(auStack_70,0xffffffff832845dc);
      uVar2 = fn_828647D8();
      aiStack_78[0] = iVar1;
      uVar3 = fn_82535298(aiStack_78,uVar2,0xffffffff83296bc0,0xffffffff83296bd0);
      *puVar7 = uVar3;
      fn_82864898(auStack_70);
    }
    if ((*piVar5 == 0x15) && (param_1[0x16] == 0)) {
      fn_82672C20(*param_1,0xffffffff821aaa08,0,0);
      param_1[0x16] = 1;
    }
    if ((*piVar6 == 0x15) && (param_1[0x16] != 0)) {
      fn_82672C20(*param_1,0xffffffff821aa9f4,0,0);
      param_1[0x16] = 0;
    }
    *piVar5 = *piVar6;
    fn_822985B0((double)(float)param_1[0x14],param_1);
    param_1[0x20] = lbl_821CC160;
  }
  return;
}

