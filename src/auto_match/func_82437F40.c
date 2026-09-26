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
extern int fn_822A53D8();
extern int fn_82438150();
extern int fn_8243E0D8();
extern int fn_82F622A8();
extern unsigned int lbl_821B9328;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Removing unreachable block (ram,0x82437f8c) */
/* WARNING: Removing unreachable block (ram,0x82437f90) */

void fn_82437F40(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  
  uVar2 = *param_1;
  uVar1 = (int)(param_1[1] - uVar2) / 0x18;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    uVar5 = param_2 * 0x18 + (ulonglong)uVar2;
    if ((uVar5 & 0xffffffff) != (ulonglong)param_1[1]) {
      uVar1 = param_1[1];
      uVar6 = uVar5;
      if ((uVar5 & 0xffffffff) != (ulonglong)uVar1) {
        do {
          fn_8243E0D8(uVar6);
          uVar6 = uVar6 + 0x18;
        } while ((uVar6 & 0xffffffff) != (ulonglong)uVar1);
      }
      param_1[1] = (uint)uVar5;
    }
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    lVar4 = param_2 - (longlong)(int)uVar1;
    if ((0xaaaaaaaU - lVar4 & 0xffffffff) < (ulonglong)uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = lVar4 + (int)uVar1;
    uVar1 = (int)(param_1[2] - uVar2) / 0x18;
    if ((ulonglong)uVar1 < (uVar5 & 0xffffffff)) {
      uVar6 = 0;
      if ((ulonglong)uVar1 <= (0xaaaaaaa - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
        uVar6 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
      }
      if ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar6 = uVar5;
      }
      fn_82438150(param_1,uVar6);
    }
    puVar7 = (undefined4 *)param_1[1];
    for (lVar4 = param_2 - (longlong)((int)((int)puVar7 - *param_1) / 0x18); lVar4 != 0;
        lVar4 = lVar4 + -1) {
      ppuStack_60 = &lbl_821B9328;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_4c = 0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = &lbl_821B9328;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        cVar3 = fn_822A53D8(puVar7 + 1,0);
        if (cVar3 != '\0') {
          puVar7[2] = puVar7[1];
        }
        puVar7[5] = 0;
      }
      fn_8243E0D8(&ppuStack_60);
      puVar7 = puVar7 + 6;
    }
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0x18) * 0x18 + param_1[1];
  }
  return;
}

