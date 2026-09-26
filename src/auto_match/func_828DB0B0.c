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
extern int fn_82311AB8();
extern int fn_8265CA20();
extern int fn_828E62F0();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_828DB0B0(int *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **appuStack_20 [8];
  
  uVar4 = param_1[1] - *param_1 >> 3;
  if ((0x1fffffffU - param_2 & 0xffffffff) < (ulonglong)uVar4) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar7 = (int)uVar4 + param_2;
  uVar4 = param_1[2] - *param_1 >> 3;
  if ((ulonglong)uVar4 < (uVar7 & 0xffffffff)) {
    uVar6 = 0;
    if ((ulonglong)uVar4 <= (0x1fffffff - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
      uVar6 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
    }
    if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
      uVar6 = uVar7;
    }
    if ((uVar6 & 0xffffffff) < 0x20000000) {
      if ((ulonglong)(uint)(param_1[2] - *param_1 >> 3) < (uVar6 & 0xffffffff)) {
        puVar5 = (undefined4 *)fn_828E62F0(param_1 + 3,uVar6);
        puVar1 = (undefined4 *)param_1[1];
        puVar8 = puVar5;
        for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar1; puVar9 = puVar9 + 2) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *puVar9;
            puVar8[1] = puVar9[1];
          }
          puVar8 = puVar8 + 2;
        }
        iVar2 = *param_1;
        iVar3 = param_1[1];
        if (iVar2 != 0) {
          fn_8265CA20();
        }
        *param_1 = (int)puVar5;
        param_1[2] = (int)((uVar6 & 0xffffffff) << 3) + (int)puVar5;
        param_1[1] = (int)(puVar5 + (iVar3 - iVar2 >> 3) * 2);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

