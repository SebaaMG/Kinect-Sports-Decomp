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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_8268D5D8();
extern int fn_8268D758();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_82748DE8();


void fn_82748EC8(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  float *pfVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  double dVar10;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = fn_826957D0(param_1,0);
    iVar3 = fn_82696958(uVar2,uVar1);
    if (iVar3 != 0) {
      cVar5 = fn_82695468(param_1,0x12);
      if (cVar5 == '\0') {
        fn_826954C0(param_1,0xffffffff8200eee4,0,0);
      }
      else {
        lVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
        if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
          lVar7 = 0;
        }
        iVar4 = (**(code **)(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10);
        if (iVar4 == 0x12) {
          fn_8268D5D8(lVar7 + 0x30,iVar3 + 0x30);
        }
        else {
          pfVar6 = &fStack_b0;
          lVar9 = 8;
          do {
            pfVar6 = pfVar6 + 4;
            *(undefined1 *)pfVar6 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          fn_82748DE8(*(undefined4 *)(param_1 + 0x18),iVar3,auStack_a0);
          fn_8268D758(&fStack_c0);
          dVar10 = (double)fn_826972E0(auStack_a0,*(undefined4 *)(param_1 + 0x18));
          fStack_c0 = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_90,*(undefined4 *)(param_1 + 0x18));
          fStack_b8 = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_80,*(undefined4 *)(param_1 + 0x18));
          fStack_b0 = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_70,*(undefined4 *)(param_1 + 0x18));
          fStack_a8 = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_60,*(undefined4 *)(param_1 + 0x18));
          fStack_bc = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_50,*(undefined4 *)(param_1 + 0x18));
          fStack_b4 = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_40,*(undefined4 *)(param_1 + 0x18));
          fStack_ac = (float)dVar10;
          dVar10 = (double)fn_826972E0(auStack_30,*(undefined4 *)(param_1 + 0x18));
          fStack_a4 = (float)dVar10;
          fn_8268D5D8(lVar7 + 0x30,&fStack_c0);
          puVar8 = auStack_20;
          lVar7 = 7;
          do {
            puVar8 = puVar8 + -0x10;
            fn_82696330(puVar8);
            lVar7 = lVar7 + -1;
          } while (-1 < lVar7);
        }
      }
    }
  }
  return;
}

