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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_826452A8();
extern int fn_8264B630();
extern int fn_8264D380();
extern int fn_8265C990();
extern int iRam83275b50;
extern unsigned int uRam83275b4c;


void fn_8262F6B8(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar4 = KeGetCurrentProcessType();
  iVar3 = iRam83275b50;
  piVar1 = __imp__VdGlobalDevice;
  if (iVar4 == 2) {
    piVar1 = __imp__VdGlobalXamDevice;
  }
  iVar4 = *piVar1;
  uVar5 = *param_1;
  uVar2 = uVar5 & 0xf;
  if (8 < uVar2 - 1) goto LAB_8262f8c4;
  if (uVar2 == 1) {
    if ((param_1[2] != 0) && (iVar4 != 0)) {
      fn_826452A8(iVar4,param_1[2],9,0);
    }
    uVar5 = param_1[6] & 0xfffffffc;
  }
  else {
    if (uVar2 == 2) {
      uVar5 = param_1[2];
      if ((uVar5 != 0) && (iVar4 != 0)) {
        uVar6 = 0xb;
        goto LAB_8262f82c;
      }
      goto LAB_8262f834;
    }
    if (uVar2 == 3) {
      if ((param_1[2] != 0) && (iVar4 != 0)) {
        fn_826452A8(iVar4,param_1[2],0xd,0);
      }
      uVar5 = param_1[0xc] & 0xfffff000;
      fn_8265C990(param_1[8] & 0xfffff000,0xffffffffb1800000);
    }
    else {
      if (uVar2 == 4) {
        if ((uVar5 & 0x40000000) == 0) {
          if ((uVar5 & 0x80000000) != 0) {
            uVar5 = param_1[0xb];
            uVar2 = param_1[7];
            RtlEnterCriticalSection();
            *(int *)(iVar3 + 0x1c) = (int)((ulonglong)uVar5 / 0x1400) + *(int *)(iVar3 + 0x1c);
            fn_8264D380(iVar3,(ulonglong)uVar2 & 0xfff,
                            ((ulonglong)uVar2 & 0xfff) + (ulonglong)uVar5 / 0x1400,0);
            RtlLeaveCriticalSection();
          }
          if ((param_1[8] & 1) != 0) {
            uRam83275b4c = 0;
          }
        }
        goto LAB_8262f8c4;
      }
      if (uVar2 == 5) goto LAB_8262f8c4;
      if (uVar2 == 6) {
        if ((param_1[2] != 0) && (iVar4 != 0)) {
          fn_826452A8(iVar4,param_1[2],7,0);
        }
        uVar5 = param_1[8];
      }
      else {
        if (uVar2 == 7) {
          uVar5 = param_1[2];
          if ((uVar5 != 0) && (iVar4 != 0)) {
            uVar6 = 8;
LAB_8262f82c:
            fn_826452A8(iVar4,uVar5,uVar6,0);
          }
        }
        else {
          if (uVar2 != 8) {
            if ((param_1[2] != 0) && (iVar4 != 0)) {
              fn_826452A8(iVar4,param_1[2],0xf,0);
            }
            fn_8264B630(param_1);
            goto LAB_8262f8c4;
          }
          uVar5 = param_1[2];
          if ((uVar5 != 0) && (iVar4 != 0)) {
            uVar6 = 0x11;
            goto LAB_8262f82c;
          }
        }
LAB_8262f834:
        uVar5 = param_1[6];
      }
    }
  }
  fn_8265C990(uVar5,0xffffffffb1800000);
LAB_8262f8c4:
  fn_8265C990(param_1,0x24800000);
  return;
}

