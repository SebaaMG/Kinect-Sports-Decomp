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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern int fn_8268D5D8();
extern int fn_82699058();
extern int fn_8269A240();
extern int fn_8269A3C0();
extern int fn_826C58D8();
extern int fn_826C78F0();
extern int fn_8270D570();
extern int fn_8270D668();
extern int fn_82758E40();
extern int fn_82F68CC0();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_826C9258(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  int *piVar6;
  char cVar7;
  undefined8 uVar5;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  if ((param_1[0x23] & 3U) != 1) {
    bVar4 = false;
    if ((param_1[0x23] & 0x8000U) == 0) goto LAB_826c928c;
  }
  bVar4 = true;
LAB_826c928c:
  if (bVar4) {
    iVar1 = param_2[8];
    puVar2 = (undefined4 *)param_2[0x10];
    iVar3 = param_2[0x11];
    param_2[8] = *(int *)(param_1[0x1f] + 0x1c) + 0x18;
    piVar6 = (int *)fn_826C58D8(param_1);
    bVar4 = false;
    if (piVar6 != (int *)0x0) {
      cVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6);
      if ((cVar7 == '\0') || ((*(byte *)((int)piVar6 + 0x66) & 0x10) != 0)) {
        fn_826C78F0(param_1,0);
      }
      else {
        fn_8268CC00(auStack_80);
        fn_8269A240(piVar6[8],auStack_80);
        param_2[0x10] = (int)auStack_80;
        fn_8270D570(param_2,piVar6);
        bVar4 = true;
      }
    }
    uStack_a0 = *puVar2;
    uStack_9c = puVar2[1];
    uStack_98 = puVar2[2];
    uStack_94 = puVar2[3];
    uStack_90 = puVar2[4];
    uStack_8c = puVar2[5];
    fn_8268CEC0(&uStack_a0,param_1 + 0x11);
    param_2[0x10] = (int)&uStack_a0;
    fn_82F68CC0(auStack_60,iVar3,0x20);
    fn_8268D5D8(auStack_60,param_1 + 9);
    param_2[0x11] = (int)auStack_60;
    if (param_1[0x6e] != 0) {
      uVar5 = fn_8269A3C0(param_1);
      fn_82758E40(param_1[0x6e],param_2,param_2[0x10],auStack_60,uVar5,
                        *(short *)(param_1 + 0x19) != 0);
    }
    if ((ulonglong)(uint)param_1[0x72] == 0) {
      fn_82699058(param_1 + 0x2a,param_2);
    }
    else {
      (**(code **)(**(int **)(*param_2 + 0xc) + 0x34))
                (*(int **)(*param_2 + 0xc),(ulonglong)(uint)param_1[0x72] + 0x48);
      fn_82699058(param_1 + 0x2a,param_2);
      (**(code **)(**(int **)(*param_2 + 0xc) + 0x38))();
    }
    param_2[0x10] = (int)puVar2;
    param_2[8] = iVar1;
    param_2[0x11] = iVar3;
    (**(code **)(*param_1 + 0xf4))(param_1);
    if (bVar4) {
      fn_8270D668(param_2);
    }
  }
  return;
}

