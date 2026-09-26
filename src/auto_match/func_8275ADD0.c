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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82686228();
extern int fn_82686CA8();
extern int fn_82687270();
extern int fn_826874B8();
extern int fn_82687570();
extern int fn_82687AB8();
extern int fn_826F3700();
extern int fn_8275A5A0();
extern unsigned int iStack_90;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


ulonglong fn_8275ADD0(undefined8 param_1,int param_2,undefined8 param_3,int *param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  int iStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  fn_82686228(&piStack_88,0xffffffff831566a4,param_1);
  uVar5 = 0;
  iStack_90 = 0;
  uStack_8c = 0;
  iVar3 = fn_82687AB8(param_2,&iStack_90,&piStack_88);
  if (iVar3 != 3) {
    uVar5 = fn_82686CA8(&iStack_90);
    goto LAB_8275af34;
  }
  uVar1 = fn_8275A5A0(param_1,param_3,*(undefined4 *)(param_2 + 0x2c));
  if (uVar1 == 0) {
LAB_8275af04:
    fn_82687570(uStack_8c,0xffffffff82014600);
  }
  else {
    uStack_58 = *(undefined4 *)(param_2 + 0x2c);
    uStack_80 = 1;
    uVar4 = 0;
    uStack_78 = 0;
    uStack_7c = 2;
    uStack_74 = 1;
    uStack_6c = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_70 = (int)uVar1;
    uStack_68 = param_5;
    uStack_64 = param_6;
    uStack_54 = param_7;
    if (param_4 != (int *)0x0) {
      uVar4 = (**(code **)(*param_4 + 4))(param_4,&uStack_80);
    }
    uVar2 = fn_8267B890(uStack_58,0x1c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar5 = fn_826F3700(uVar2,uVar4,&piStack_88,2);
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_826874B8(uStack_8c,uVar5);
    }
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8267C498(uVar4);
    }
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275af04;
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C498(uVar1);
  }
LAB_8275af34:
  if (iStack_90 == 1) {
    fn_82687270(uStack_8c);
  }
  else if (1 < iStack_90) {
    fn_8267C4F0(uStack_8c);
  }
  if (piStack_88 != (int *)0x0) {
    (**(code **)(*piStack_88 + 8))(piStack_88,uStack_84);
  }
  return uVar5;
}

