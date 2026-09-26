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
extern int fn_82510618();
extern int fn_82510AC8();
extern int fn_82510D60();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82510438(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 >> 4;
  uVar3 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar4 = (int)param_3;
      param_2 = uVar3;
      if (iVar4 < 1) break;
      fn_82510618(&uStack_60,param_1,uVar3,param_4);
      param_3 = (longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar5 = (ulonglong)uStack_5c;
      param_2 = (ulonglong)uStack_60;
      if ((int)(uStack_60 - (int)param_1 & 0xfffffff0) < (int)((int)uVar3 - uStack_5c & 0xfffffff0))
      {
        fn_82510438(param_1,param_2,param_3,param_4);
        param_2 = uVar3;
        param_1 = uVar5;
      }
      else {
        fn_82510438(uVar5,uVar3,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 >> 4;
      uVar3 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      uVar3 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < (longlong)uVar3) {
        lVar6 = (uVar3 & 0xfffffff) * 0x10 + param_1;
        do {
          uVar3 = uVar3 - 1;
          iVar4 = (int)lVar6;
          uStack_5c = *(undefined4 *)(iVar4 + -0xc);
          uStack_58 = *(undefined4 *)(iVar4 + -8);
          uStack_54 = *(undefined4 *)(iVar4 + -4);
          fn_82510D60(param_1,uVar3,uVar1,&uStack_60,param_4);
          lVar6 = lVar6 + -0x10;
        } while (0 < (int)uVar3);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar6 = param_2 - 0x10;
      do {
        puVar8 = (undefined4 *)param_1;
        puVar7 = (undefined4 *)lVar6;
        uStack_5c = puVar7[1];
        uStack_58 = puVar7[2];
        uStack_54 = puVar7[3];
        *puVar7 = *puVar8;
        puVar7[1] = puVar8[1];
        puVar7[2] = puVar8[2];
        puVar7[3] = puVar8[3];
        fn_82510D60(param_1,0,(int)lVar2 + -0x10 >> 4,&uStack_60,param_4);
        lVar6 = lVar6 + -0x10;
        lVar2 = (lVar6 - param_1) + 0x10;
      } while (0x10 < (int)((uint)lVar2 & 0xfffffff0));
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_82510AC8(param_1,param_2,param_4);
  }
  return;
}

