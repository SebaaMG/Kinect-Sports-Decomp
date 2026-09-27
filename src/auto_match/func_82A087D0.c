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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int fStack_84;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_a4;
extern int fn_829F4D48();
extern int fn_829F4D58();
extern int fn_829F4D70();
extern int fn_82A05998();
extern int fn_82A05A90();
extern int memset();
extern unsigned int lbl_821AAD20;
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A087D0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int *piVar8;
  ulonglong uVar7;
  double dVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs55 [16];
  undefined1 in_vs59 [16];
  undefined1 auVar11 [16];
  undefined4 in_register_000103c0;
  undefined4 in_register_000103c4;
  undefined4 in_register_000103c8;
  undefined4 in_vr60;
  uint in_register_000103e0;
  uint in_register_000103e4;
  uint in_register_000103e8;
  uint in_vr62;
  uint in_register_000103f0;
  uint in_register_000103f4;
  uint in_register_000103f8;
  uint in_vr63;
  undefined1 auStack_b0 [12];
  float fStack_a4;
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [12];
  float fStack_84;

  piVar8 = (int *)(param_1 + 0x410);
  memset(piVar8,0,0x7c);
  fn_829F4D48(*(undefined4 *)(param_1 + 0x4144));
  uVar4 = 0;
  uVar5 = 0;
  dVar10 = (double)lbl_821AAD20;
  puVar6 = (undefined4 *)(param_1 + 0x57c);
  do {
    memset(puVar6 + 1,0,0x100);
    *puVar6 = 0;
    puVar6[-2] = 0xffffffff;
    uVar7 = 0;
    puVar6[-1] = 0xffffffff;
    do {
      fn_829F4D58(uVar4,auStack_b0);
      dVar9 = (double)fStack_a4;
      if (dVar9 <= dVar10) break;
      if ((uVar7 & 0xffffffff) == 0) {
        puVar6[-2] = 0;
      }
      else if (dVar9 <= (double)*(float *)((int)(((uint)puVar6[-2] + uVar5 & 0xffffffff) << 4) +
                                           param_1 + 0x58c)) {
        if ((puVar6[-1] == 0xffffffff) ||
           ((double)*(float *)((int)(((uint)puVar6[-1] + uVar5 & 0xffffffff) << 4) + param_1 + 0x58c
                              ) < dVar9)) {
          puVar6[-1] = (int)uVar7;
        }
      }
      else {
        puVar6[-1] = puVar6[-2];
        puVar6[-2] = (int)uVar7;
      }
      lVar3 = uVar5 + uVar7;
      uVar7 = uVar7 + 1;
      altv300_23(in_vs55,in_vs42);
      altv300_21(in_vs32,in_vs41);
      puVar1 = (uint *)((int)((lVar3 + 0x58U & 0xffffffff) << 4) + param_1 & 0xfffffff0);
      *puVar1 = in_register_000103e0 | in_register_000103f0;
      puVar1[1] = in_register_000103e4 | in_register_000103f4;
      puVar1[2] = in_register_000103e8 | in_register_000103f8;
      puVar1[3] = in_vr62 | in_vr63;
      *piVar8 = *piVar8 + 1;
    } while ((uVar7 & 0xffffffff) < 8);
    *puVar6 = (int)uVar7;
    if ((uVar7 & 0xffffffff) != 0) {
      altv207_13(in_vs40,in_vs59);
      puVar2 = (undefined4 *)((uint)(auStack_a0 + (int)in_r0) & 0xfffffff0);
      *puVar2 = in_register_000103c0;
      puVar2[1] = in_register_000103c4;
      puVar2[2] = in_register_000103c8;
      puVar2[3] = in_vr60;
      fn_82A05998((double)fStack_98,(double)fStack_94,puVar6 + -0x3b);
    }
    if ((uVar7 & 0xffffffff) == 1) {
      fn_82A05A90(puVar6 + -0x3b);
    }
    else {{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar11, &_vt0, 16); }
      puVar6[-0x21] = 0;
      puVar6[-0x20] = 0;
      memcpy((void *)((const void *)((uint)(puVar6 + -0x1f) & 0xfffffff0)), auVar11, 16);
      memcpy((void *)((const void *)((uint)(puVar6 + -0x1b) & 0xfffffff0)), auVar11, 16);
      if ((((uVar7 & 0xffffffff) == 8) && (*(int *)(param_1 + 0x4148) == 0)) &&
         (((uVar4 & 0xffffffff) == 0xc || ((uVar4 & 0xffffffff) == 0xd)))) {
        do {
          fn_829F4D58(uVar4,auStack_90);
          if ((double)fStack_84 <= dVar10) break;
          uVar7 = uVar7 + 1;
          *piVar8 = *piVar8 + 1;
        } while ((uVar7 & 0xffffffff) < 0xe);
      }
    }
    uVar5 = uVar5 + 0x1f;
    uVar4 = uVar4 + 1;
    puVar6 = puVar6 + 0x7c;
    piVar8 = piVar8 + 1;
    if (0x3c0 < (uVar5 & 0xffffffff)) {
      fn_829F4D70();
      return;
    }
  } while( true );
}
