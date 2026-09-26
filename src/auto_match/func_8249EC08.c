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
extern int fn_8249EDB0();
extern int fn_8249F160();
extern int fn_8249F338();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8249EC08(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar5;
  longlong lVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 / 0xc;
  uVar6 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar5 = (int)param_3;
      param_2 = uVar6;
      if (iVar5 < 1) break;
      fn_8249EDB0(&uStack_50,param_1,uVar6);
      param_3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar7 = (ulonglong)uStack_4c;
      param_2 = (ulonglong)uStack_50;
      if ((int)(uStack_50 - (int)param_1) / 0xc < (int)((int)uVar6 - uStack_4c) / 0xc) {
        fn_8249EC08(param_1,param_2,param_3);
        param_2 = uVar6;
        param_1 = uVar7;
      }
      else {
        fn_8249EC08(uVar7,uVar6,param_3);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 / 0xc;
      uVar6 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < lVar4) {
        lVar3 = lVar4 * 0xc + param_1;
        do {
          lVar3 = lVar3 + -0xc;
          puVar8 = (uint *)lVar3;
          uStack_50 = *puVar8;
          lVar4 = lVar4 + -1;
          uStack_4c = puVar8[1];
          uStack_48 = puVar8[2];
          fn_8249F338(param_1,lVar4,uVar1,&uStack_50);
        } while (0 < (int)lVar4);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar4 = param_2 - 0xc;
      do {
        puVar9 = (uint *)param_1;
        puVar8 = (uint *)lVar4;
        uStack_50 = *puVar8;
        uStack_4c = puVar8[1];
        uStack_48 = puVar8[2];
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        fn_8249F338(param_1,0,((int)lVar2 + -0xc) / 0xc,&uStack_50);
        lVar4 = lVar4 + -0xc;
        lVar2 = (lVar4 - param_1) + 0xc;
      } while (1 < (int)lVar2 / 0xc);
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_8249F160(param_1,param_2);
  }
  return;
}

