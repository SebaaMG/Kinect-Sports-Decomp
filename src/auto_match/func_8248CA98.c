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
extern int fn_82230040();
extern int fn_8248CBB8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


void fn_8248CA98(uint *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  if (0x7ffffff < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) >> 5) < (param_2 & 0xffffffff)) {
    lVar4 = 0;
    if (((param_2 & 0xffffffff) != 0) &&
       (lVar4 = fn_8265C9E0((param_2 & 0x7ffffff) << 5), lVar4 == 0)) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_40);
    }
    uVar5 = param_1[1];
    lVar3 = lVar4;
    for (uVar6 = (ulonglong)*param_1; (uVar6 & 0xffffffff) != (ulonglong)uVar5; uVar6 = uVar6 + 0x20
        ) {
      fn_8248CBB8(lVar3,uVar6);
      lVar3 = lVar3 + 0x20;
    }
    puVar7 = (undefined4 *)*param_1;
    puVar1 = (undefined4 *)param_1[1];
    iVar2 = (int)puVar1 - (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      for (; puVar7 != puVar1; puVar7 = puVar7 + 8) {
        (**(code **)*puVar7)(puVar7,0);
      }
      fn_8265CA20(*param_1);
    }
    uVar5 = (uint)lVar4;
    *param_1 = uVar5;
    param_1[2] = (int)((param_2 & 0xffffffff) << 5) + uVar5;
    param_1[1] = (iVar2 >> 5) * 0x20 + uVar5;
  }
  return;
}

