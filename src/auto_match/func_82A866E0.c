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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F69148();
extern unsigned int stack0x00000000;
extern unsigned int uStack_3d;
extern unsigned int uStack_44;


void fn_82A866E0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uStack_44;
  undefined1 uStack_3d;
  
  uVar2 = ZEXT48(&stack0x00000000);
  if ((param_3 & 0xffffffff) == 0) {
    uStack_3d = 0;
  }
  else {
    uVar1 = (param_2 + param_3) - 1 & 0x1f;
    uVar8 = (((param_2 & 0x1f) + param_3) - 1 & 0xffffffff) >> 5;
    fn_82F69148(uVar2 - 0x40,((param_2 & 0xffffffff) >> 3 & 0x1ffffffc) + param_1,(uVar8 + 1) * 4);
    lVar4 = -(uVar8 + 1);
    if (-1 < (int)lVar4 + 1) {
      lVar3 = (uVar8 + 1) * 4 + uVar2 + -0x44;
      for (lVar4 = lVar4 + 2; lVar4 != 0; lVar4 = lVar4 + -1) {
        lVar3 = lVar3 + 4;
        *(undefined4 *)lVar3 = 0;
      }
    }
    if (uVar1 < 0x1f) {
      iVar7 = (int)(uVar8 + 1);
      (&uStack_44)[iVar7] = (&uStack_44)[iVar7] & ~(-1 << (int)uVar1 + 1);
    }
    lVar4 = uVar2 - 0x40;
    puVar5 = (uint *)lVar4;
    iVar7 = (int)(param_2 & 0x1f);
    if (-1 < (longlong)(uVar8 - 1)) {
      do {
        puVar6 = (uint *)lVar4;
        lVar4 = lVar4 + 4;
        puVar5 = (uint *)lVar4;
        *puVar6 = puVar6[1] << (0x20U - iVar7 & 0x3f) | *puVar6 >> iVar7;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *puVar5 = *puVar5 >> iVar7;
  }
  *param_4 = uStack_3d;
  return;
}

