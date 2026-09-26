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
extern int fn_8266C8F0();
extern int fn_82F622A8();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_82835128(int *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar5;
  undefined4 *puVar9;
  undefined **appuStack_20 [8];
  
  uVar1 = (param_1[1] - *param_1) / 0xc;
  if ((0x15555555U - param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar5 = (int)uVar1 + param_2;
  uVar1 = (param_1[2] - *param_1) / 0xc;
  if ((ulonglong)uVar1 < (uVar5 & 0xffffffff)) {
    uVar4 = 0;
    if ((ulonglong)uVar1 <= (0x15555555 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
      uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
    }
    if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      uVar4 = uVar5;
    }
    if ((uVar4 & 0xffffffff) < 0x15555556) {
      if ((ulonglong)(uint)((param_1[2] - *param_1) / 0xc) < (uVar4 & 0xffffffff)) {
        puVar3 = (undefined4 *)fn_8266C8F0(uVar4,0);
        puVar2 = (undefined4 *)param_1[1];
        puVar6 = puVar3;
        for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar2; puVar9 = puVar9 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar9;
            puVar6[1] = puVar9[1];
            puVar6[2] = puVar9[2];
          }
          puVar6 = puVar6 + 3;
        }
        iVar8 = *param_1;
        iVar7 = param_1[1] - iVar8;
        if (iVar8 != 0) {
          for (; iVar8 != param_1[1]; iVar8 = iVar8 + 0xc) {
          }
          fn_8265CA20();
        }
        *param_1 = (int)puVar3;
        param_1[2] = (int)(puVar3 + (int)uVar4 * 3);
        param_1[1] = (int)(puVar3 + (iVar7 / 0xc) * 3);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

