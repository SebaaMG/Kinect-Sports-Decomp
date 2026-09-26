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
extern int fn_8265C940();
extern int fn_82BD8098();


undefined8
fn_82BD81E0(longlong param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  piVar1 = (int *)fn_8265C940(0xc,0x618a8006);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_2;
    lVar4 = (longlong)(int)param_1 * (longlong)(int)param_3;
    iVar2 = fn_8265C940(lVar4,0x608a2002);
    *piVar1 = iVar2;
    iVar2 = fn_8265C940((longlong)param_2 * (longlong)(int)param_3,0x618a0009);
    piVar1[1] = iVar2;
    if ((*piVar1 != 0) && (iVar2 != 0)) {
      if ((param_3 & 0xffffffff) != 0) {
        uVar5 = param_3;
        do {
          param_3 = param_3 - 1;
          lVar4 = lVar4 - param_1;
          iVar2 = piVar1[2] * (int)param_3 + piVar1[1];
          *(int *)(iVar2 + 0xc) = (int)param_1 - param_4;
          *(int *)(iVar2 + 8) = *piVar1 + (int)lVar4 + param_4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      goto LAB_82bd82bc;
    }
  }
  uVar3 = 0xffffffff8007000e;
  fn_82BD8098(piVar1);
  piVar1 = (int *)0x0;
LAB_82bd82bc:
  *param_5 = piVar1;
  return uVar3;
}

