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
extern int fn_82B226D0();
extern unsigned int lbl_83160D5C;
extern unsigned int lbl_83223CCC;
extern unsigned int lbl_83223CD0;
extern unsigned int lbl_83223CD4;
extern unsigned int lbl_83223CD8;
extern unsigned int lbl_83223CDC;
extern unsigned int lbl_83223CE0;
extern unsigned int lbl_83223CE4;
extern unsigned int lbl_83223CE8;


void fn_82B23720(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  uint uVar6;
  ulonglong uVar5;
  uint uVar7;
  uint uVar8;
  
  if ((*(uint *)(param_1 + 0x30) & 0xffff0000) != 0xffff0000) {
    uVar7 = 0xffffffff;
    uVar2 = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x218) != 0) {
      puVar3 = (uint *)(param_1 + 0x15c);
      do {
        uVar1 = *puVar3 & 0x1f;
        if (uVar1 != 0x12) {
          if ((*puVar3 & 0x1e0) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdd7);
          }
          if ((1 << uVar1 & uVar2) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdd7);
          }
          uVar2 = 1 << uVar1 | uVar2;
          uVar6 = 0;
          puVar4 = &lbl_83160D5C;
          do {
            if ((*puVar4 >> 0xb == uVar1) &&
               ((*puVar4 >> 8 & 7) == (*(uint *)(puVar3[1] + 8) >> 0xe & 7))) {
              uVar7 = (ushort)(&lbl_83160D5C)[uVar6] >> 1 & uVar7 & 0x7f;
              break;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 < 8);
          if (uVar6 == 8) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdd7);
          }
        }
        uVar8 = uVar8 + 1;
        puVar3 = puVar3 + 3;
      } while (uVar8 < *(uint *)(param_1 + 0x218));
      if (uVar2 != 0) {
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdd7);
        }
        if ((lbl_83223CE8 & 1) == 0) {
          lbl_83223CE8 = lbl_83223CE8 | 1;
          lbl_83223CCC = 0x8000000;
          lbl_83223CD0 = 0x17340000;
          lbl_83223CD4 = 0x8038000;
          lbl_83223CD8 = 0x37240000;
          lbl_83223CDC = 0x1713d200;
          lbl_83223CE0 = 0x1813c1c0;
          lbl_83223CE4 = 0x183381e0;
        }
        uVar5 = 0x1f - LZCOUNT(uVar7 & ~(uVar7 - 1));
        *(int *)(param_1 + 0x220) = (int)uVar5;
        uVar7 = *(uint *)((int)&lbl_83223CCC + (int)((uVar5 & 0xffffffff) << 2));
        uVar8 = uVar7 >> 0x17 & 0x1f;
        if (((1 << (uVar7 >> 5 & 0x1f) | 1 << (uVar7 >> 0xe & 0x1f) | 1 << uVar8) & 0xfffffffeU) !=
            uVar2) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdd7);
        }
        if (uVar7 >> 0x1c != 0) {
          fn_82B226D0(param_1,uVar7 >> 0x1c,uVar8,uVar7 >> 0x13 & 0xf);
        }
        uVar7 = (&lbl_83223CCC)[*(int *)(param_1 + 0x220)];
        uVar2 = uVar7 >> 10 & 0xf;
        if (uVar2 != 0) {
          fn_82B226D0(param_1,(uVar7 >> 9 | uVar7) >> 0x13 & 0xf,uVar7 >> 0x17 & 0x1f,uVar2,
                        uVar7 >> 5 & 0x1f);
        }
      }
    }
  }
  return;
}

