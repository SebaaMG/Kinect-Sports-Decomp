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
extern int fn_82A775C0();
extern int fn_82A78740();
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82A78930(int *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if ((int *)param_1[0x14] == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)param_1[0x14];
  }
  uVar4 = (ulonglong)*(ushort *)(*(int *)(iVar5 + 0x2c) + 0xc);
  uVar3 = *(uint *)(iVar5 + 0x34) / uVar4;
  trapWord(6,uVar4,0);
  uVar4 = 0;
  if ((int *)param_1[0x3f] != (int *)0x0) {
    uVar3 = (**(code **)(*(int *)param_1[0x3f] + 0x2c))();
    uVar4 = uVar3;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x2c))(piVar1,uVar3);
  }
  if ((param_1[0x42] != 0) && (param_1[0x1f] == 0)) {
    fn_82A775C0(param_1,uVar4);
  }
  iStack_48 = (int)uVar4;
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (((iVar2 == 0) || (param_1[0x1f] != 0)) || ((param_1[0x2e] == 0 && (param_1[0x2c] == 0)))) {
    uStack_50 = 0;
    uStack_4c = 0;
  }
  else {
    uStack_50 = fn_82A78740(param_1,(longlong)(int)(uint)*(ushort *)(param_1[0x1e] + 0xc) *
                                      (longlong)(int)uVar4);
    uStack_4c = 1;
  }
  if ((param_1[2] == 0) || (param_1[0x3f] == 0)) {
    puVar6 = &uStack_50;
    if (param_1[0x3f] == 0) {
      puVar6 = (undefined4 *)(iVar5 + 0x38);
    }
  }
  else {
    uStack_38 = (undefined4)uVar3;
    uStack_3c = 0;
    uStack_40 = *(undefined4 *)(param_1[1] + 0x220);
    puVar6 = &uStack_40;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(int *)param_1[2] + 0x28))((int *)param_1[2],1,&uStack_50,1,puVar6,param_1[0x18]);
  }
  piVar1 = (int *)param_1[0x3f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,1,puVar6,1,(undefined4 *)(iVar5 + 0x38),param_1[0x41]);
  }
  if ((int *)param_1[0x42] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x42] + 0x1c))();
  }
  return 0;
}

