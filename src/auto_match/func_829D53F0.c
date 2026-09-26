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
extern unsigned int *auStack_78;
extern int fn_829D3EC8();
extern int fn_82A2B418();
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


undefined8 fn_829D53F0(uint param_1,uint param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  char cVar3;
  int iVar2;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [112];
  
  uVar9 = 0x18 - ((0x17 < param_2) + 0x18) & param_1;
  if (((0x32000 < param_2) || (iVar6 = 0x32000 - param_2, uVar9 == 0)) ||
     (0x66 < *(uint *)(uVar9 + 4))) {
    return 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = *(uint *)(uVar9 + 4);
  }
  uVar7 = 0;
  puVar11 = (uint *)(uVar9 + 8);
  uVar8 = 0;
  if (*(int *)(uVar9 + 4) != 0) {
    puVar10 = (undefined4 *)(param_5 + 0x14);
    do {
      if (param_2 < (int)puVar11 + (0x10 - param_1)) {
        return 0;
      }
      if (puVar11 == (uint *)0x0) {
        return 0;
      }
      uVar4 = *puVar11;
      if (uVar4 == 0) {
        return 0;
      }
      uVar1 = puVar11[1];
      if (uVar1 == 0) {
        return 0;
      }
      if (uVar4 < (uVar1 + 5) * 8) {
        return 0;
      }
      if (param_2 < (uVar4 - param_1) + (int)puVar11) {
        return 0;
      }
      cVar3 = fn_829D3EC8(puVar11,&uStack_7c,auStack_78,&iStack_80);
      if (cVar3 == '\0') {
        return 0;
      }
      puVar5 = puVar11 + (uVar1 + 1) * 2;
      uVar1 = puVar5[6];
      uVar4 = (int)puVar11 + (uVar4 - (int)puVar5) + -0x1c;
      if (uVar4 < uVar1 * iStack_80) {
        return 0;
      }
      uVar7 = uVar1 + uVar7;
      if (0x66 < uVar7) {
        return 0;
      }
      if (puVar10 != (undefined4 *)0x14) {
        puVar10[-5] = uVar1;
        puVar10[-1] = puVar5 + 7;
        *puVar10 = puVar5;
        puVar10[-3] = uStack_7c;
        puVar10[-2] = auStack_78[0];
        puVar10[-4] = iStack_80;
        puVar10 = puVar10 + 6;
      }
      iVar6 = uVar4 + iVar6;
      iVar2 = fn_82A2B418((int)puVar5 + 6,auStack_70);
      if (iVar2 == 0) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      puVar11 = (uint *)(*puVar11 + (int)puVar11);
    } while (uVar8 < *(uint *)(uVar9 + 4));
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar6;
  }
  return 1;
}

