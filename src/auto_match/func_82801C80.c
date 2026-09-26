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
extern unsigned int fStack_70;
extern int fn_827F9E08();
extern int fn_82800E98();
extern int fn_82800EA0();
extern int fn_82800EC0();
extern int fn_82800FA8();
extern int fn_82801788();
extern int fn_82801870();
extern int fn_828114A8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_80;


void fn_82801C80(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                  int param_5,ulonglong param_6,int param_7,undefined8 param_8,ulonglong param_9)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  ushort in_stack_00000056;
  ushort uStack_80;
  float fStack_70;
  float *pfStack_6c;
  float *pfStack_68;
  
  if ((param_6 & 0xffffffff) != 0) {
    uVar5 = 0;
    if ((param_9 & 0xffff) != 0) {
      do {
        fn_828114A8(param_6,uVar5);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (param_9 & 0xffff));
    }
  }
  iVar3 = fn_827F9E08(param_2);
  if (iVar3 == 0) {
    fn_82801788(param_4,param_5,param_7,param_9,in_stack_00000056);
    return;
  }
  iVar3 = fn_827F9E08(param_2);
  if (iVar3 == 1) {
    fn_82801870(param_1,param_4,param_5,param_7);
    return;
  }
  iVar3 = fn_827F9E08(param_2);
  if (iVar3 != 0) {
    if (iVar3 != 1) goto LAB_82801d90;
    pfStack_68 = (float *)(*(int *)(param_7 + 8) * (uint)*param_4 * 4 + *(int *)(param_4 + 2));
  }
  pfStack_6c = (float *)(*(int *)(param_7 + 4) * (uint)*param_4 * 4 + *(int *)(param_4 + 2));
LAB_82801d90:
  if ((param_9 & 0xffff) != 0) {
    uVar5 = 0;
    dVar9 = (double)lbl_821AAD20;
    pfVar4 = pfStack_68;
    pfVar6 = pfStack_6c;
    do {
      uVar7 = 0;
      do {
        iVar3 = fn_827F9E08(param_2);
        if (iVar3 == 0) {
          *(float *)((int)(uVar7 << 2) + param_5) = *pfVar6;
LAB_82801df0:
          pfVar6 = pfVar6 + 1;
        }
        else if (iVar3 == 1) {
          iVar3 = (int)(uVar7 << 2);
          *(float *)(iVar3 + param_5) = *pfVar6;
          fVar1 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          *(float *)((int)&fStack_70 + iVar3) = fVar1;
          goto LAB_82801df0;
        }
        uVar7 = uVar7 + 1 & 0xffff;
      } while (uVar7 < 4);
      iVar3 = fn_827F9E08(param_2);
      if (iVar3 == 0) {
        fn_82800EA0();
      }
      else {
        fn_82800FA8(param_1,param_5,&fStack_70);
      }
      uStack_80 = 4;
      for (; uVar7 < in_stack_00000056; uVar7 = uVar7 + 1 & 0xffff) {
        iVar3 = fn_827F9E08(param_2);
        if (iVar3 == 0) {
          dVar8 = (double)fn_82800E98(param_1,dVar9,(double)*pfVar6,dVar9,dVar9);
LAB_82801e90:
          pfVar6 = pfVar6 + 1;
          *(float *)((uint)uStack_80 * 4 + param_5) = (float)dVar8;
        }
        else if (iVar3 == 1) {
          dVar8 = (double)fn_82800EC0(param_1,dVar9,(double)*pfVar6,(double)*pfVar4,dVar9);
          pfVar4 = pfVar4 + 1;
          goto LAB_82801e90;
        }
        uVar2 = uStack_80 + 1;
        if (uVar7 == 6) {
          uVar2 = uStack_80 + 2;
        }
        uStack_80 = uVar2;
      }
      param_5 = param_5 + 0x30;
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < (param_9 & 0xffff));
  }
  return;
}

