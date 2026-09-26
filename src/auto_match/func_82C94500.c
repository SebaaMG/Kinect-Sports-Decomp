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
extern int fn_82C93EF8();
extern int fn_82C94128();
extern int fn_82C942F0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


undefined8
fn_82C94500(int param_1,uint *param_2,longlong param_3,undefined8 param_4,ulonglong param_5,
             ulonglong param_6,int *param_7,uint *param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 in_stack_00000054;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [26];
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar3 = (uint)param_6;
  uVar5 = ((ulonglong)uVar1 & 0x7fffffff) << 1;
  iVar2 = *(int *)(param_1 + 0x120);
  uVar7 = 0;
  iVar8 = 0;
  uVar4 = ((longlong)(int)uVar1 * (longlong)(int)uVar3 & 0x7fffffffU) * 2 + param_5;
  if ((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x88);
    uVar4 = (longlong)((int)uVar3 >> 1) * (longlong)(int)*(uint *)(param_1 + 0x88) +
            (longlong)((int)param_5 >> 1);
  }
  uVar9 = 0;
  if (((((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) && ((param_6 & 1) != 0)) ||
      ((uVar3 != 0 &&
       (((iVar2 == 0 || (iVar2 == 4)) ||
        (*(short *)((int)((uVar4 - uVar5 & 0xffffffff) << 1) + *(int *)(param_1 + 0x6f0)) == 0x4000)
        ))))) &&
     (((uVar3 & 1) == 1 || (*(int *)(((int)uVar3 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) == 0)))) {
    iVar8 = *(int *)(param_1 + 0x78c);
    uVar9 = param_3 + ((ulonglong)uVar1 & 0x3ffffff) * -0x40;
  }
  uVar6 = uVar9;
  if ((((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) && ((param_5 & 1) != 0)) ||
     (((int)param_5 != 0 &&
      (((iVar2 == 0 || (iVar2 == 4)) ||
       (*(short *)(*(int *)(param_1 + 0x6f0) + (int)((uVar4 & 0xffffffff) << 1) + -2) == 0x4000)))))
     ) {
    uVar6 = param_3 - 0x20;
    iVar8 = *(int *)(param_1 + 0x788);
    if (uVar6 == 0) goto LAB_82c947ac;
    if ((uVar9 & 0xffffffff) != 0) {
      iStack_70 = 0;
      if ((((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) && (((param_5 | param_6) & 1) != 0))
         || (((iVar2 == 0 || (iVar2 == 4)) ||
             (*(short *)((int)(((uVar4 - uVar5) - 1 & 0xffffffff) << 1) + *(int *)(param_1 + 0x6f0))
              == 0x4000)))) {
        iStack_70 = (int)*(short *)((*(int *)(param_1 + 0x784) + -0x10) * 2 + (int)uVar9);
      }
      aiStack_68[0] = (int)*(short *)(*(int *)(param_1 + 0x784) * 2 + (int)uVar9);
      iStack_6c = (int)*(short *)(*(int *)(param_1 + 0x780) * 2 + (int)uVar6);
      fn_82C942F0(param_1,param_4,param_2,aiStack_68,&iStack_6c,&iStack_70);
      uVar1 = iStack_70 - iStack_6c >> 0x1f;
      uVar3 = iStack_70 - aiStack_68[0] >> 0x1f;
      if ((int)((iStack_70 - iStack_6c ^ uVar1) - uVar1) <
          (int)((iStack_70 - aiStack_68[0] ^ uVar3) - uVar3)) {
        iVar8 = *(int *)(param_1 + 0x78c);
        uVar6 = uVar9;
      }
    }
  }
  if ((uVar6 & 0xffffffff) != 0) {
    uVar1 = *param_2;
    uVar7 = 1;
    if (iVar8 == *(int *)(param_1 + 0x788)) {
      fn_82C94128();
    }
    else {
      fn_82C93EF8(param_1,param_4,uVar6,in_stack_00000054,param_2,-((ulonglong)uVar1 & 0x18));
    }
    if ((uVar1 & 0x18) == 0) {
      iVar8 = -1;
    }
  }
LAB_82c947ac:
  *param_8 = (uint)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar8) >> 5;
  *param_7 = iVar8;
  return uVar7;
}

