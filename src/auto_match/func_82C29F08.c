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
extern unsigned int *auStack_4c;
extern int fn_82C29390();
extern int fn_82C29788();
extern int fn_82C29980();
extern int fn_82C29E40();


void fn_82C29F08(int param_1,ulonglong param_2,int *param_3,uint *param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piStack_50;
  undefined4 auStack_4c [19];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  piStack_50 = (int *)0x0;
  auStack_4c[0] = 0;
  iVar4 = fn_82C29E40();
  if ((-1 < iVar4) &&
     ((*(int *)(iVar1 + 0x40) == 0 ||
      ((iVar4 = fn_82C29980(param_1,*(undefined8 *)(iVar1 + 0x38)), -1 < iVar4 &&
       (iVar4 = fn_82C29E40(param_1,param_2), -1 < iVar4)))))) {
    lVar5 = *(longlong *)(iVar1 + 0x28);
    iVar4 = fn_82C29788(param_1,lVar5,&piStack_50,auStack_4c);
    piVar3 = piStack_50;
    if (-1 < iVar4) {
      if ((lVar5 == *(longlong *)(*piStack_50 + 8)) &&
         ((ulonglong)*(uint *)(iVar1 + 0x88) <= (ulonglong)(lVar5 - *(longlong *)(iVar1 + 0x80)))) {
        iVar4 = fn_82C29390(param_1);
        if (iVar4 < 0) {
          return;
        }
        lVar5 = *(longlong *)(iVar1 + 0x28);
        *(longlong *)(iVar1 + 0x80) = lVar5;
      }
      uVar2 = *(uint *)(*piVar3 + 4);
      lVar6 = *(longlong *)(*piVar3 + 8);
      if (((ulonglong)uVar2 - lVar5) + lVar6 < (param_2 & 0xffffffff)) {
        *param_4 = ((int)lVar6 - (int)lVar5) + uVar2;
        piVar3[1] = piVar3[1] + -1;
      }
      else {
        *param_4 = (uint)param_2;
        if (((ulonglong)*(uint *)(*piVar3 + 4) + *(longlong *)(*piVar3 + 8)) -
            *(longlong *)(iVar1 + 0x28) == (param_2 & 0xffffffff)) {
          piVar3[1] = piVar3[1] + -1;
        }
      }
      *param_3 = ((int)*(undefined8 *)(iVar1 + 0x28) - (int)*(undefined8 *)((int *)*piVar3 + 2)) +
                 *(int *)*piVar3;
      *param_5 = *(undefined8 *)(iVar1 + 0x28);
      *(ulonglong *)(iVar1 + 0x28) = (ulonglong)*param_4 + *(longlong *)(iVar1 + 0x28);
    }
  }
  return;
}

