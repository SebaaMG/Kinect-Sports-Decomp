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
extern int fn_82AA64F8();
extern int fn_82AD1270();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Removing unreachable block (ram,0x82ad128c) */
/* WARNING: Removing unreachable block (ram,0x82ad12b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B81180(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  
  uVar5 = *(uint *)(param_1 + 8);
  uStack00000048 = (ulonglong)(uVar5 >> 7) & 0x7f;
  if (uStack00000048 < 0x3c) {
    if (uStack00000048 == 0x3b) {
      uVar5 = uVar5 & 0xffffc07f | 0x1e00;
      goto code_r0x82b81268;
    }
    if (uStack00000048 == 0x15) {
      uVar5 = uVar5 & 0xffffc07f | 0xb00;
      goto code_r0x82b81268;
    }
    if (uStack00000048 != 0x16) {
      if (uStack00000048 == 0x17) {
        *(uint *)(param_1 + 8) = uVar5 & 0xffffc07f | 0xc00;
        puVar1 = *(uint **)(param_1 + 0x30);
      }
      else {
        if (uStack00000048 != 0x18) goto code_r0x82b8121c;
        *(uint *)(param_1 + 8) = uVar5 & 0xffffc07f | 0xb80;
        puVar1 = *(uint **)(param_1 + 0x30);
      }
      goto fn_82AD1270;
    }
    iVar3 = 0x15;
  }
  else {
    if (uStack00000048 != 0x3c) {
      if (uStack00000048 == 0x3d) {
        *(uint *)(param_1 + 8) = uVar5 & 0xffffc07f | 0x1f00;
        puVar1 = *(uint **)(param_1 + 0x2c);
      }
      else {
        if (uStack00000048 != 0x3e) {
code_r0x82b8121c:
          uStack00000020 = param_3;
          uStack00000028 = param_4;
          uStack00000030 = param_5;
          uStack00000038 = param_6;
          uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
          fn_82AA64F8(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x12c0,
                            &stack0x00000020);
        }
        *(uint *)(param_1 + 8) = uVar5 & 0xffffc07f | 0x1e80;
        puVar1 = *(uint **)(param_1 + 0x2c);
      }
fn_82AD1270:
      uVar5 = *puVar1;
      uVar2 = 4;
      uVar4 = uVar5 & 0x1f;
      if ((uVar5 & 4) != 0) {
        uVar4 = uVar4 - 4;
        uVar2 = 0;
      }
      *puVar1 = uVar5 & 0xffffffe0 | uVar4 & 0x1f | uVar2;
      return;
    }
    iVar3 = 0x3b;
  }
  uVar5 = iVar3 << 7 | uVar5 & 0xffffc07f;
code_r0x82b81268:
  *(uint *)(param_1 + 8) = uVar5;
  return;
}

