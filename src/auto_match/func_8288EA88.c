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
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_8288B2D8();
extern int fn_8288CD40();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern int fn_828B55C0();
extern int fn_828B55F8();
extern int fn_828B5608();
extern int fn_828B57E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_50;


void fn_8288EA88(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 *param_5
                  )

{
  int iVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [72];
  
  iVar1 = *(int *)(param_1 + 8);
  uVar7 = 0;
  if (0 < iVar1) {
    iVar3 = fn_828E9DA8(param_3);
    iVar4 = fn_828E9D90(param_3);
    if (iVar3 - iVar4 < iVar1) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_3,iVar1);
    }
  }
  fn_828B5608(auStack_48);
  fn_828B57E8(auStack_48,param_2,param_3);
  *(undefined4 *)(param_4 + 0x10) = 1;
  fn_828B55C0(param_4 + 8,auStack_48);
  uStack_50 = fn_828B55F8(auStack_48);
  lVar2 = fn_828A12E8(param_2);
  piVar5 = (int *)fn_8288CD40(auStack_4c,lVar2 + 0x94,&uStack_50);
  uVar6 = fn_8288B2D8(*(undefined4 *)(*piVar5 + 0x40),uVar7);
  *param_5 = uVar6;
  fn_828B55B0(auStack_48);
  return;
}

