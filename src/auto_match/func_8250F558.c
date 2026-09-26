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
extern unsigned int *auStack_70;
extern int fn_8250F738();
extern int fn_8250FBF0();
extern int fn_8250FF18();
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8250F558(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uStack_80;
  uint uStack_7c;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2 - param_1;
  uVar1 = (int)lVar2 >> 5;
  uVar3 = param_2;
  if (0x20 < (int)uVar1) {
    do {
      iVar4 = (int)param_3;
      param_2 = uVar3;
      if (iVar4 < 1) break;
      fn_8250F738(&uStack_80,param_1,uVar3,param_4);
      param_3 = (longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar5 = (ulonglong)uStack_7c;
      param_2 = (ulonglong)uStack_80;
      if ((int)(uStack_80 - (int)param_1 & 0xffffffe0) < (int)((int)uVar3 - uStack_7c & 0xffffffe0))
      {
        fn_8250F558(param_1,param_2,param_3,param_4);
        param_2 = uVar3;
        param_1 = uVar5;
      }
      else {
        fn_8250F558(uVar5,uVar3,param_3,param_4);
      }
      lVar2 = param_2 - param_1;
      uVar1 = (int)lVar2 >> 5;
      uVar3 = param_2;
    } while (0x20 < (int)uVar1);
    if (0x20 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        return;
      }
      uVar3 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (0 < (longlong)uVar3) {
        lVar6 = (uVar3 & 0x7ffffff) * 0x20 + param_1;
        do {
          uVar3 = uVar3 - 1;
          iVar4 = (int)lVar6;
          uStack_68 = *(undefined8 *)(iVar4 + -0x18);
          uStack_60 = *(undefined8 *)(iVar4 + -0x10);
          uStack_58 = *(undefined8 *)(iVar4 + -8);
          fn_8250FF18(param_1,uVar3,uVar1,auStack_70,param_4);
          lVar6 = lVar6 + -0x20;
        } while (0 < (int)uVar3);
      }
      if ((int)uVar1 < 2) {
        return;
      }
      lVar6 = param_2 - 0x20;
      do {
        puVar8 = (undefined8 *)param_1;
        puVar7 = (undefined8 *)lVar6;
        uStack_68 = puVar7[1];
        uStack_60 = puVar7[2];
        uStack_58 = puVar7[3];
        *puVar7 = *puVar8;
        puVar7[1] = puVar8[1];
        puVar7[2] = puVar8[2];
        puVar7[3] = puVar8[3];
        fn_8250FF18(param_1,0,(int)lVar2 + -0x20 >> 5,auStack_70,param_4);
        lVar6 = lVar6 + -0x20;
        lVar2 = (lVar6 - param_1) + 0x20;
      } while (0x20 < (int)((uint)lVar2 & 0xffffffe0));
      return;
    }
  }
  if (1 < (int)uVar1) {
    fn_8250FBF0(param_1,param_2,param_4);
  }
  return;
}

