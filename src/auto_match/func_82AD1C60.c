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
extern unsigned int *auStack_38;
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82ABE2E0();
extern int fn_82AC65F0();
extern int fn_82B82D28();
extern int fn_82B8AE98();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_82AD1C60(undefined8 param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  char cVar5;
  int iVar4;
  uint *puVar6;
  uint *puVar7;
  bool bVar10;
  uint *puVar8;
  uint *puVar9;
  uint uVar11;
  uint uStack_40;
  int iStack_3c;
  uint auStack_38 [14];
  
  if ((param_2[2] & 0x380000U) == 0) {
    for (puVar6 = (uint *)*param_2; (puVar6 != (uint *)0x0 && ((*puVar6 & 0xe000000) == 0));
        puVar6 = (uint *)puVar6[1]) {
    }
  }
  else {
    puVar6 = (uint *)param_2[0xb];
  }
  while( true ) {
    fn_82B82D28(puVar6,0,&uStack_40,auStack_38,&iStack_3c,0,0,0);
    uVar11 = uStack_40;
    if (iStack_3c != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar1 = *(uint *)(uStack_40 + 8);
    uVar3 = uVar1 >> 7 & 0x7f;
    if (uVar3 == 0x7d) break;
    if ((uVar3 < 0x15) || (bVar10 = true, 0x18 < uVar3)) {
      bVar10 = false;
    }
    if (bVar10) {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
    }
    cVar5 = fn_82ABDAA0(uStack_40);
    if ((cVar5 == '\0') || ((uVar1 & 0x380000) == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    puVar6 = *(uint **)(uVar11 + 0x2c);
  }
  if (((uint)param_2[2] >> 0x11 & 1) != 0) {
    iVar4 = fn_82AC65F0(param_2);
    uVar11 = *(uint *)(iVar4 + 0xc);
    puVar6 = (uint *)(param_2 + 1);
    while (puVar7 = (uint *)*puVar6, puVar7 != (uint *)0x0) {
      if (puVar7[4] != 0) {
        if (((*puVar7 & 0x40000000) == 0) || (bVar10 = true, (*puVar7 & 0xe000000) != 0)) {
          bVar10 = false;
        }
        if (bVar10) {
          uVar1 = *(uint *)(puVar7[4] + 8);
          uVar3 = uVar1 >> 7 & 0x7f;
          if (uVar3 == 0x55) {
LAB_82ad1dc8:
            if (((uVar1 ^ param_2[2]) >> 0x12 & 1) == 0) {
LAB_82ad1e2c:
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
          }
          else {
            if (((uVar1 ^ param_2[2]) >> 0x12 & 1) != 0) goto LAB_82ad1e2c;
            if (uVar3 == 0x55) goto LAB_82ad1dc8;
          }
          puVar8 = (uint *)(puVar7[3] + 4);
          for (puVar2 = (uint *)*puVar8; puVar2 != puVar7; puVar2 = (uint *)puVar2[2]) {
            puVar8 = puVar2 + 2;
          }
          *puVar8 = puVar7[2];
          puVar7[2] = *(uint *)(uVar11 + 4);
          *(uint **)(uVar11 + 4) = puVar7;
          puVar7[3] = uVar11;
        }
      }
      if ((uint *)*puVar6 == puVar7) {
        puVar6 = puVar7 + 2;
      }
    }
  }
  puVar6 = (uint *)(param_2 + 1);
  while (puVar7 = (uint *)*puVar6, puVar7 != (uint *)0x0) {
    if (puVar7[4] != 0) {
      uVar11 = *puVar7;
      if (((uVar11 & 0x40000000) == 0) || (bVar10 = true, (uVar11 & 0xe000000) != 0)) {
        bVar10 = false;
      }
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if ((uVar11 & 0xe000000) != 0) {
        puVar8 = (uint *)(puVar7[3] + 4);
        for (puVar2 = (uint *)*puVar8; puVar2 != puVar7; puVar2 = (uint *)puVar2[2]) {
          puVar8 = puVar2 + 2;
        }
        *puVar8 = puVar7[2];
        puVar7[2] = *(uint *)(uStack_40 + 4);
        *(uint **)(uStack_40 + 4) = puVar7;
        puVar7[3] = uStack_40;
        *puVar7 = ((((auStack_38[0] << 2 | auStack_38[0]) & 0xf) << 2 | auStack_38[0] & 0x3f) << 2 |
                  auStack_38[0] & 0xff) << 5 | *puVar7 & 0xffffe01f;
      }
    }
    if ((uint *)*puVar6 == puVar7) {
      puVar6 = puVar7 + 2;
    }
  }
  uVar11 = uStack_40;
  if ((*(uint *)(uStack_40 + 8) & 0x3f80) != 16000) {
LAB_82ad2000:
    fn_82B8AE98(param_1,param_2);
    return;
  }
  do {
    puVar6 = *(uint **)(uVar11 + 4);
    while( true ) {
      if (puVar6 == (uint *)0x0) goto LAB_82ad2000;
      uVar1 = puVar6[4];
      if ((uVar1 != 0) && ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3800)) break;
      puVar6 = (uint *)puVar6[2];
    }
    puVar7 = (uint *)(uVar1 + 4);
    while (puVar2 = (uint *)*puVar7, puVar2 != (uint *)0x0) {
      if (puVar2[4] != 0) {
        puVar9 = (uint *)(puVar2[3] + 4);
        for (puVar8 = (uint *)*puVar9; puVar8 != puVar2; puVar8 = (uint *)puVar8[2]) {
          puVar9 = puVar8 + 2;
        }
        *puVar9 = puVar2[2];
        puVar2[2] = *(uint *)(uVar11 + 4);
        *(uint **)(uVar11 + 4) = puVar2;
        puVar2[3] = uVar11;
        *puVar2 = *puVar2 & 0xffffe01f | *puVar6 & 0x1fe0;
        uVar11 = uStack_40;
      }
      if ((uint *)*puVar7 == puVar2) {
        puVar7 = puVar2 + 2;
      }
    }
    cVar5 = fn_82ABE2E0(uVar1);
    if (cVar5 != '\0') {
      fn_82B8AE98(param_1,uVar1);
      uVar11 = uStack_40;
    }
  } while( true );
}

