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
extern int fn_8265C990();
extern int fn_82F68CC0();


undefined8 fn_828FA548(uint *param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar2 = *param_1;
  uVar10 = (ulonglong)uVar2;
  uVar12 = 0;
  uVar6 = 0;
  uVar8 = (ulonglong)(uVar2 >> 1);
  if (uVar10 == 0) {
LAB_828fa5b8:
    if (uVar10 == (~uVar10 + 1 & uVar10)) {
      uVar6 = ((ulonglong)uVar2 & 0x7fffffff) << 1;
      if (uVar10 == 0) {
        uVar6 = 1;
      }
      lVar5 = fn_8265C940((uVar6 & 0x3fffffff) << 2,0x24810000);
      if (lVar5 != 0) {
        fn_82F68CC0(lVar5,param_1[2],*param_1 << 2);
        fn_8265C990(param_1[2],0x24810000);
        param_1[2] = (uint)lVar5;
        uVar6 = ((ulonglong)*param_1 & 0x7fffffff) << 1;
        if (*param_1 == 0) {
          uVar6 = 1;
        }
        lVar5 = fn_8265C940((uVar6 & 0x3fffffff) << 2,0x24810000);
        if (lVar5 != 0) {
          fn_82F68CC0(lVar5,param_1[1],*param_1 << 2);
          fn_8265C990(param_1[1],0x24810000);
          param_1[1] = (uint)lVar5;
          goto LAB_828fa66c;
        }
      }
      uVar12 = 0xffffffff8007000e;
      goto LAB_828fa6dc;
    }
LAB_828fa66c:
    uVar2 = *param_1;
    if (uVar8 < uVar2) {
      lVar5 = uVar2 - uVar8;
      iVar11 = uVar2 << 2;
      do {
        *(undefined4 *)(param_1[1] + iVar11) = ((undefined4 *)(param_1[1] + iVar11))[-1];
        puVar9 = (undefined4 *)(iVar11 + param_1[2]);
        iVar11 = iVar11 + -4;
        *puVar9 = puVar9[-1];
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    iVar11 = (int)(uVar8 << 2);
    *(uint *)(param_1[1] + iVar11) = param_2;
    *(undefined4 *)(param_1[2] + iVar11) = 1;
    *param_1 = *param_1 + 1;
  }
  else {
    uVar7 = uVar10;
    do {
      uVar3 = *(uint *)((int)(uVar8 << 2) + param_1[1]);
      if (uVar3 < param_2) {
        uVar6 = uVar8 + 1;
        uVar8 = uVar7;
      }
      else if (uVar3 <= param_2) break;
      bVar1 = uVar6 < uVar8;
      uVar4 = (uVar8 + uVar6 & 0xffffffff) >> 1;
      uVar7 = uVar8;
      uVar8 = uVar4;
    } while (bVar1);
    if (uVar7 <= uVar6) goto LAB_828fa5b8;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (int)uVar8;
  }
LAB_828fa6dc:
  fn_8265C990(0,0x24810000);
  return uVar12;
}

