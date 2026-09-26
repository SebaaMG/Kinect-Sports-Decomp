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
extern int fn_82AA66A8();
extern int fn_82ABE870();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B47350();
extern int fn_82B4B9A8();
extern int fn_82B4BAA8();
extern int fn_82B84350();


void fn_82B4BC48(int param_1,int param_2,ulonglong param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar3;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar12 = 0;
  uVar13 = 0;
  puVar14 = (undefined4 *)0x0;
  if ((param_3 & 0xffffffff) != 0) {
    uVar7 = 0;
    do {
      puVar4 = (undefined4 *)fn_82ABE870(param_2);
      if (puVar14 != (undefined4 *)0x0) {
        iVar5 = fn_82B4B9A8(param_1,puVar14);
        iVar6 = fn_82B4B9A8(param_1,puVar4);
        if (iVar5 != iVar6) break;
        uVar9 = puVar14[1] & 3;
        if (uVar9 < 2) {
LAB_82b4bcdc:
          uVar9 = 0;
        }
        else {
          if (uVar9 != 2) {
            if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            goto LAB_82b4bcdc;
          }
          uVar9 = *(uint *)*puVar14 & 0x1f;
        }
        uVar10 = puVar4[1] & 3;
        if (uVar10 < 2) {
LAB_82b4bcfc:
          uVar10 = 0;
        }
        else {
          if (uVar10 != 2) {
            if (3 < uVar10) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            goto LAB_82b4bcfc;
          }
          uVar10 = *(uint *)*puVar4 & 0x1f;
        }
        if (uVar9 != uVar10) break;
      }
      iVar5 = fn_82B47350(param_1,puVar4);
      uVar13 = uVar13 + 1;
      uVar12 = (ulonglong)(uint)(iVar5 << (uVar7 & 0x3f)) |
               uVar12 & ~(ulonglong)(uint)(3 << (uVar7 & 0x3f));
      uVar7 = uVar7 + 2;
      puVar14 = puVar4;
    } while ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  if ((param_5 == '\0') || ((param_3 & 0xffffffff) <= (uVar13 & 0xffffffff))) {
    puVar11 = (uint *)fn_82B4BAA8(param_1,puVar14);
    *puVar11 = (uint)(((uVar13 & 7) << 0x14 | uVar12 & 0xff) << 5) | *puVar11 & 0xf1ffe01f;
  }
  else {
    *(undefined4 *)(param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
    uVar7 = fn_82B84350(param_1,*(undefined4 *)(param_1 + 0x234),0,param_3);
    if ((param_3 & 0xffffffff) != 0) {
      puVar14 = (undefined4 *)(uVar7 + 0x28);
      do {
        uVar3 = fn_82ABE870(param_2);
        uVar3 = fn_82B4BAA8(param_1,uVar3);
        uVar8 = fn_82AD1978(uVar7,uVar3);
        param_3 = param_3 - 1;
        puVar14 = puVar14 + 1;
        *puVar14 = uVar8;
      } while (param_3 != 0);
    }
    iVar5 = *(int *)(param_1 + 0x234);
    uVar9 = uVar7 & 0xfffffffe;
    puVar11 = (uint *)(iVar5 + 0x18);
    *(uint *)(uVar9 + 0x24) = *puVar11;
    *(uint *)(*puVar11 & 0xfffffffe) = uVar9;
    *(uint *)(uVar9 + 0x28) = iVar5 - 0xcU | 1;
    *puVar11 = uVar9 + 0x28;
    fn_82AD17B0(param_1,uVar7);
  }
  if (param_4 != '\0') {
    *(undefined4 *)(param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
  }
  return;
}

