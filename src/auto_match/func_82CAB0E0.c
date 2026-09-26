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
extern int fn_82C53220();
extern int fn_82C562F0();
extern int fn_82CAADA0();
extern int fn_82CAAFD8();
extern int fn_82F691F0();


undefined8
fn_82CAB0E0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000054;
  
  *param_2 = 0;
  param_2[2] = 0;
  if (param_2[3] == 0) {
    uVar4 = fn_82C562F0(param_1,0x18,0xffffffff82196582);
    param_2[3] = (int)uVar4;
    if ((uVar4 & 0xffffffff) == 0) {
LAB_82cab238:
      uVar5 = 0xfffffffffffffff7;
    }
    else {
      uVar5 = fn_82CAAFD8(uVar4,param_5);
      if ((int)uVar5 == 0) goto LAB_82cab150;
    }
LAB_82cab23c:
    fn_82CAADA0(param_1,param_2);
  }
  else {
LAB_82cab150:
    iVar7 = 0;
    if (0 < (int)param_5) {
      do {
        iVar6 = fn_82C562F0(param_1,0x288,0xffffffff82196582);
        if (iVar6 == 0) goto LAB_82cab238;
        if (in_stack_00000054 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar6,0,0x288);
        }
        uVar5 = fn_82C53220(param_1,iVar6,param_3,param_4,param_6);
        if ((int)uVar5 != 0) goto LAB_82cab23c;
        *(int *)(iVar6 + 0x280) = iVar7;
        piVar1 = (int *)param_2[3];
        if ((piVar1 == (int *)0x0) || (piVar1[4] < 0)) goto LAB_82cab238;
        piVar2 = (int *)piVar1[2];
        iVar3 = *piVar2;
        piVar1[2] = iVar3;
        if (iVar3 == 0) {
          piVar1[3] = 0;
        }
        piVar2[1] = iVar6;
        *piVar2 = *piVar1;
        *piVar1 = (int)piVar2;
        if (piVar1[1] == 0) {
          piVar1[1] = (int)piVar2;
        }
        iVar7 = iVar7 + 1;
        piVar1[4] = piVar1[4] + 1;
      } while (iVar7 < (int)param_5);
    }
    uVar5 = 0;
  }
  return uVar5;
}

