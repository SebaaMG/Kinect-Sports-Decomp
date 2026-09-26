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
extern int fn_82450AE0();
extern int fn_82450E80();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_824508A8(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  uint uStack_40;
  uint uStack_3c;
  
  uVar5 = (int)param_2 - (int)param_1 >> 3;
  uVar7 = param_2;
  if (0x20 < (int)uVar5) {
    do {
      iVar8 = (int)param_3;
      param_2 = uVar7;
      if (iVar8 < 1) break;
      fn_82450AE0(&uStack_40,param_1,uVar7,param_4);
      param_3 = (longlong)(iVar8 >> 1) + (ulonglong)(iVar8 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar9 = (ulonglong)uStack_3c;
      param_2 = (ulonglong)uStack_40;
      if ((int)(uStack_40 - (int)param_1 & 0xfffffff8) < (int)((int)uVar7 - uStack_3c & 0xfffffff8))
      {
        fn_824508A8(param_1,param_2,param_3,param_4);
        param_2 = uVar7;
        param_1 = uVar9;
      }
      else {
        fn_824508A8(uVar9,uVar7,param_3,param_4);
      }
      uVar5 = (int)param_2 - (int)param_1 >> 3;
      uVar7 = param_2;
    } while (0x20 < (int)uVar5);
    if (0x20 < (int)uVar5) {
      if ((int)uVar5 < 2) {
        return;
      }
      uVar7 = (longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0);
      if (0 < (longlong)uVar7) {
        lVar6 = (uVar7 & 0x1fffffff) * 8 + param_1;
        do {
          lVar6 = lVar6 + -8;
          uStack_40 = *(uint *)lVar6;
          uVar7 = uVar7 - 1;
          uStack_3c = ((uint *)lVar6)[1];
          fn_82450E80(param_1,uVar7,uVar5,&uStack_40,param_4);
        } while (0 < (int)uVar7);
      }
      if ((int)uVar5 < 2) {
        return;
      }
      puVar3 = (undefined4 *)param_1;
      lVar6 = param_2 - 4;
      do {
        puVar4 = (undefined4 *)lVar6;
        uStack_40 = puVar4[-1];
        uStack_3c = *puVar4;
        puVar4[-1] = *puVar3;
        *puVar4 = puVar3[1];
        fn_82450E80(param_1,0,(-4 - (int)puVar3) + (int)puVar4 >> 3,&uStack_40,param_4);
        lVar6 = lVar6 + -8;
      } while (8 < (int)((4 - (int)puVar3) + (int)lVar6 & 0xfffffff8U));
      return;
    }
  }
  if ((1 < (int)uVar5) && (uVar7 = param_1, (param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    while (uVar9 = uVar7 + 8, (uVar9 & 0xffffffff) != (param_2 & 0xffffffff)) {
      puVar3 = (undefined4 *)param_1;
      puVar4 = (undefined4 *)uVar9;
      iVar8 = puVar4[1];
      uVar1 = *puVar4;
      if (iVar8 < (int)puVar3[1]) {
        lVar6 = uVar7 + 0xc;
        if ((param_1 & 0xffffffff) != (uVar9 & 0xffffffff)) {
          do {
            uVar7 = lVar6 - 0xc;
            puVar4 = (undefined4 *)lVar6;
            puVar4[-1] = puVar4[-3];
            *puVar4 = *(undefined4 *)(lVar6 + -8);
            lVar6 = lVar6 + -8;
          } while ((uVar7 & 0xffffffff) != (param_1 & 0xffffffff));
        }
        *puVar3 = uVar1;
        puVar3[1] = iVar8;
        uVar7 = uVar9;
      }
      else {
        iVar2 = puVar4[-1];
        uVar7 = uVar9;
        while( true ) {
          puVar3 = (undefined4 *)uVar7;
          if (iVar2 <= iVar8) break;
          puVar4 = (undefined4 *)(uVar7 - 8);
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          iVar2 = puVar4[-1];
          uVar7 = uVar7 - 8;
        }
        *puVar3 = uVar1;
        puVar3[1] = iVar8;
        uVar7 = uVar9;
      }
    }
  }
  return;
}

