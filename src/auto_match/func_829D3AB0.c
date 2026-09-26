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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_829D3A28();
extern int fn_82F67FE8();
extern int fn_82F68958();


undefined8 fn_829D3AB0(undefined8 param_1,int *param_2)

{
  int iVar4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  uint auStack_c0 [4];
  undefined1 auStack_b0 [176];
  
  piVar8 = param_2 + 2;
  piVar7 = param_2 + 1;
  iVar4 = fn_82F67FE8(param_1,0xffffffff82057450,param_2,piVar7,piVar8,param_2 + 4,param_2 + 3
                            ,param_2 + 5);
  if (iVar4 == 7) {
    uVar5 = (ulonglong)(uint)param_2[4];
    *piVar7 = *piVar7 * 100;
    uVar6 = (ulonglong)(uint)param_2[3];
    *param_2 = *param_2 * 100;
    *piVar8 = *piVar8 * 100;
    if (uVar5 < uVar6) {
      uVar6 = uVar6 - uVar5;
      trapWord(6,uVar6,0);
      param_2[6] = (int)((ulonglong)(uint)param_2[5] / (uVar6 & 0xffffffff));
    }
    else {
      param_2[6] = 0;
    }
    auStack_c0[0] = 0;
    uVar1 = fn_82F68958(auStack_b0,0xffffffff82196fac,auStack_c0);
    uVar2 = fn_82F68958(auStack_c0[0],0xffffffff82196fac,auStack_c0);
    uVar3 = fn_82F68958(auStack_c0[0],0xffffffff82196fac,auStack_c0);
    uVar5 = (ulonglong)auStack_c0[0];
    uVar1 = fn_829D3A28(uVar1,param_2 + 7);
    if ((-1 < (int)uVar1) && (uVar1 = fn_829D3A28(uVar2,param_2 + 0x1c), -1 < (int)uVar1)) {
      uVar1 = fn_829D3A28(uVar3,param_2 + 0x31);
      if (-1 < (int)uVar1) {
        uVar1 = fn_829D3A28(uVar5,param_2 + 0x46);
      }
    }
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

