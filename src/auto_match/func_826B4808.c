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
extern int fn_826944C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_82697210();
extern int fn_826A73F8();
extern int fn_826A9138();
extern int fn_826ADE60();
extern int fn_826B1B88();
extern int fn_826B3E08();
extern unsigned int iStack_7c;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8
fn_826B4808(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  char cVar6;
  int *piVar5;
  longlong lVar7;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined4 *apuStack_78 [2];
  char acStack_70 [16];
  undefined1 auStack_60 [16];
  int *piStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  
  iVar4 = (**(code **)(*(int *)param_1[0x1d] + 0x40))();
  if ((*(uint *)(iVar4 + 0xb00) >> 2 & 1) != 0) {
    uVar3 = fn_82695DA0(&piStack_50,param_3);
    fn_82697210(apuStack_78,uVar3,param_1);
    fn_82696330(&piStack_50);
    fn_826A9138(param_1,0xffffffff82007ae4,*(undefined4 *)*param_2,*apuStack_78[0]);
    uVar1 = apuStack_78[0][2];
    apuStack_78[0][2] = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_826944C8(apuStack_78[0]);
    }
  }
  if (((*(uint *)(*param_2 + 0xc) >> 0x19 & 1) == 0) &&
     (cVar6 = fn_826A73F8(param_2), cVar6 != '\0')) {
    puStack_4c = auStack_60;
    acStack_70[0] = '\0';
    pcStack_40 = acStack_70;
    uStack_48 = (undefined4)param_4;
    iStack_7c = *(int *)(param_1[0x1e] + 8);
    *(int *)(iStack_7c + 8) = *(int *)(iStack_7c + 8) + 1;
    uStack_44 = 0;
    uStack_3c = 0;
    auStack_60[0] = 0;
    piStack_50 = param_2;
    fn_826B3E08(param_1,&piStack_50,0,&iStack_7c);
    if ((acStack_70[0] == '\0') || (bVar2 = false, acStack_70[0] == '\n')) {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_5 != '\0') {
        cVar6 = (**(code **)(*param_1 + 4))(param_1);
        if (cVar6 != '\0') {
          fn_826ADE60(param_1,0xffffffff82007aac,*(undefined4 *)*param_2);
        }
      }
    }
    else {
      piVar5 = (int *)fn_82696AD0(acStack_70,param_1);
      if (piVar5 != (int *)0x0) {
        auStack_80[0] = 0;
        (**(code **)(*piVar5 + 0xc))(piVar5,param_1,&iStack_7c,param_3,auStack_80);
        fn_82696330(auStack_60);
        lVar7 = (ulonglong)*(uint *)(iStack_7c + 8) - 1;
        *(int *)(iStack_7c + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(iStack_7c);
        }
        fn_82696330(acStack_70);
        goto LAB_826b4a30;
      }
    }
    fn_82696330(auStack_60);
    lVar7 = (ulonglong)*(uint *)(iStack_7c + 8) - 1;
    *(int *)(iStack_7c + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iStack_7c);
    }
    fn_82696330(acStack_70);
    uVar3 = 0;
  }
  else {
    fn_826B1B88(param_1,param_2,param_3,param_4);
LAB_826b4a30:
    uVar3 = 1;
  }
  return uVar3;
}

