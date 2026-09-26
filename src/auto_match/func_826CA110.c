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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_af;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_826972E0();
extern int fn_8269A240();
extern int fn_826C59F8();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82005720;
extern unsigned int uStack_b0;


void fn_826CA110(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  uint *puVar7;
  double dVar8;
  double dVar9;
  undefined1 uStack_b0;
  undefined1 auStack_af [7];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  char acStack_90 [16];
  char acStack_80 [16];
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [80];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar4 = fn_826C59F8(param_1);
  if ((lVar4 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    iVar2 = *(int *)(param_1 + 0x18);
    puVar7 = (uint *)(iVar2 + 0x78);
    uVar5 = fn_826957D0(param_1,0);
    piVar6 = (int *)fn_82696AD0(uVar5,iVar2);
    if (piVar6 != (int *)0x0) {
      acStack_80[0] = '\0';
      acStack_90[0] = '\0';
      (**(code **)(*piVar6 + 0x2c))(piVar6,puVar7,(ulonglong)*puVar7 + 0x1ec,acStack_80);
      (**(code **)(*piVar6 + 0x2c))(piVar6,puVar7,(ulonglong)*puVar7 + 0x1f0,acStack_90);
      if ((acStack_80[0] == '\x03') || (bVar3 = false, acStack_80[0] == '\x04')) {
        bVar3 = true;
      }
      if (bVar3) {
        if ((acStack_90[0] == '\x03') || (bVar3 = false, acStack_90[0] == '\x04')) {
          bVar3 = true;
        }
        if (bVar3) {
          dVar8 = (double)fn_826972E0(acStack_90,*(undefined4 *)(param_1 + 0x18));
          dVar9 = (double)(float)dVar8;
          dVar8 = (double)fn_826972E0(acStack_80,*(undefined4 *)(param_1 + 0x18));
          fStack_a4 = (float)(dVar9 * (double)lbl_8200571C);
          fStack_a8 = (float)((double)(float)dVar8 * (double)lbl_8200571C);
          fn_8268CC00(auStack_50);
          fn_8269A240(lVar4,auStack_50);
          fn_8268CCB0(auStack_50,&fStack_a0,&fStack_a8);
          fStack_a8 = fStack_a0;
          uStack_b0 = 0;
          auStack_70[0] = 3;
          dStack_68 = (double)fStack_a0 * lbl_82005720;
          fStack_a4 = fStack_9c;
          dVar8 = lbl_82005720;
          (**(code **)(*piVar6 + 0x28))
                    (piVar6,puVar7,(ulonglong)*puVar7 + 0x1ec,auStack_70,&uStack_b0);
          fn_82696330(auStack_70);
          dStack_58 = (double)fStack_a4 * dVar8;
          auStack_60[0] = 3;
          auStack_af[0] = 0;
          (**(code **)(*piVar6 + 0x28))
                    (piVar6,puVar7,(ulonglong)*puVar7 + 0x1f0,auStack_60,auStack_af);
          fn_82696330(auStack_60);
        }
      }
      fn_82696330(acStack_90);
      fn_82696330(acStack_80);
    }
  }
  return;
}

