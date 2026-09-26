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
extern int fn_82BE1A10();
extern int fn_82BE1FE0();
extern int fn_82BE5100();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEF650();
extern int fn_82BF0180();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


undefined8 fn_82BF08E0(int *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (param_1[10] == 0) {
    uVar1 = 0;
  }
  else {
    fn_82BE1A10();
    lVar2 = fn_82BE1FE0();
    iVar6 = param_1[0xf];
    if (iVar6 != 0) {
      if ((*(longlong *)(iVar6 + 0x70) != 0) && (*(longlong *)(iVar6 + 0x70) != lVar2)) {
        *(undefined8 *)(iVar6 + 0x70) = 0;
      }
      lVar5 = *(longlong *)(param_1[0xf] + 0xd0);
      if ((lVar5 != 0) && (lVar5 != lVar2)) {
        *(undefined8 *)(param_1[0xf] + 0xd0) = 0;
      }
    }
    piVar7 = param_1 + 7;
    iVar6 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    fn_82BE5340(piVar7);
    while (param_1[9] != 0) {
      iVar3 = fn_82BE5378(piVar7);
      if ((*(char *)((int)param_1 + 0x41) == '\0') || (*(int *)(iVar3 + 0x14) != 0)) {
        iVar4 = fn_82BE5100(iVar3);
        if (iVar4 == 0) {
          iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_1[9],&uStack_60,iVar6);
          if (iVar3 != 0) {
            iVar6 = 1;
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x60) = 3;
        }
      }
      fn_82BE5350(piVar7);
    }
    if ((param_2 == 0) && (((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) != 0 || ((((U64)(uStack_48) >> 32) & 0xFFFFFFFF) != 0)))) {
      if (((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) == 0) || (iVar6 == 0)) {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 3;
    }
    if (iVar6 != param_1[0xe]) {
      fn_82BEF650(param_1);
    }
    uVar1 = fn_82BF0180(param_1,&uStack_60);
  }
  return uVar1;
}

