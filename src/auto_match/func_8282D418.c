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
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_82826B48();
extern int fn_8282CF00();
extern int fn_8282D1C0();
extern int fn_8282D3A8();
extern int fn_82831478();
extern int fn_82831600();
extern int fn_828316A0();


undefined8 fn_8282D418(int *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar6;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  
  fn_8282D3A8();
  iVar6 = fn_8282D1C0(param_2,param_1);
  if (iVar6 == 0) {
    if (*(int *)(*param_1 + 0x130) == 1) {
      fn_8282CF00();
      uVar3 = 0;
      *param_1 = 0;
    }
    else {
      uVar4 = fn_8265C9E0(0xc);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_82831478(uVar4,param_1,*param_1);
      }
      param_1[1] = iVar6;
      puVar10 = (uint *)(param_1 + 2);
      fn_82826B48(*param_1,puVar10);
      lVar5 = -1;
      uVar1 = param_1[2];
      uVar12 = (ulonglong)uVar1;
      uVar4 = ((ulonglong)uVar1 & 0xfffffff) << 4;
      if (0xfffffff < uVar12) {
        uVar4 = 0xffffffffffffffff;
      }
      if ((uVar4 & 0xffffffff) < 0xfffffffc) {
        lVar5 = uVar4 + 4;
      }
      puVar7 = (uint *)fn_8265CA60(lVar5);
      if (puVar7 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = puVar7 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar9;
        while (uVar12 = uVar12 - 1, -1 < (longlong)uVar12) {
          fn_82831600(puVar7);
          puVar7 = puVar7 + 4;
        }
      }
      uVar4 = 1;
      param_1[3] = (int)puVar9;
      iVar6 = *(int *)(*param_1 + 0xac);
      iVar2 = **(int **)(*param_1 + 300);
      if (*puVar10 != 0) {
        lVar5 = 0x10;
        iVar11 = 4;
        do {
          lVar8 = 0;
          for (puVar7 = *(uint **)(*(int *)(*param_1 + 300) + iVar11 + -4);
              (puVar7 != (uint *)(iVar2 + iVar6 * 0x14) &&
              ((ulonglong)*puVar7 == (uVar4 & 0xffffffff))); puVar7 = puVar7 + 5) {
            lVar8 = lVar8 + 1;
          }
          fn_828316A0(lVar5 + (ulonglong)(uint)param_1[3] + -0x10,param_1,uVar4,lVar8);
          uVar4 = uVar4 + 1;
          iVar11 = iVar11 + 4;
          lVar5 = lVar5 + 0x10;
        } while ((uVar4 & 0xffffffff) <= (ulonglong)*puVar10);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

