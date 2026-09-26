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
extern unsigned int fStack_60;
extern int fn_82263978();
extern int fn_82264148();
extern int fn_822AA718();
extern int fn_822ABA88();
extern int fn_8230C220();
extern int fn_8236C6A0();
extern int fn_823CDBB0();
extern int fn_82508078();
extern unsigned int lbl_82192510;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;
extern unsigned int uStack_5c;
extern unsigned int uStack_6f;
extern unsigned int uStack_70;


void fn_82318498(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  float fStack_60;
  undefined4 uStack_5c;
  
  fStack_60 = *(float *)(*(int *)(param_1 + 0xc) + 0x28);
  uStack_5c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c);
  fn_8230C220((ulonglong)*(uint *)(param_1 + 0x10) + 0xa18,&fStack_60);
  if (*(int *)(param_1 + 0x618) != -1) {
    uStack_70 = 0;
    uStack_6f = 0;
    iVar6 = fn_823CDBB0(*(int *)(param_1 + 0x10),
                              *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28),
                              *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c),param_1 + 0x600,
                              &uStack_70,
                              (-(ulonglong)(*(int *)(*(int *)(param_1 + 0x10) + 0x54) == 9) &
                              0xfffffffe) + 3);
    if (iVar6 != 0) {
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x1ec) == 0) {
        if (lbl_831D1918 != 0) {
          iVar6 = *(int *)(param_1 + 0xc);
          piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) +
                            *(int *)(param_1 + 0x618) * 4);
          fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),*(undefined4 *)(param_1 + 0x614));
          fn_82263978(lbl_83276554,0,*(undefined4 *)(iVar6 + 0x2c),
                            *(undefined4 *)(iVar6 + 0x28));
        }
      }
      else {
        uVar2 = in_r0 + param_1 + 0x600 & 0xfffffff0;
        fVar7 = *(float *)(uVar2 + 4);
        fVar8 = *(float *)(uVar2 + 8);
        fn_822AA718(&fStack_60,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c));
        fVar5 = lbl_82192510;
        uVar2 = (int)&fStack_60 + in_r0 & 0xfffffff0;
        uVar3 = *(int *)(param_1 + 0xc) + 0x80U & 0xfffffff0;
        fVar7 = (fVar7 - *(float *)(uVar3 + 4)) * *(float *)(uVar2 + 4) + 0.0 +
                (fVar8 - *(float *)(uVar3 + 8)) * *(float *)(uVar2 + 8);
        pfVar4 = (float *)((int)&fStack_60 + in_r0 & 0xfffffff0);
        *pfVar4 = fVar7;
        pfVar4[1] = fVar7;
        pfVar4[2] = fVar7;
        pfVar4[3] = fVar7;
        if ((fVar5 < fStack_60) && (*(int *)(*(int *)(param_1 + 0x10) + 0x4c0) == 0)) {
          fn_82508078(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa4),0xffffffff821af75c,0);
        }
        if (lbl_831D1918 != 0) {
          iVar6 = *(int *)(param_1 + 0xc);
          piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 0x10) + 8) +
                            *(int *)(param_1 + 0x618) * 4);
          fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),*(undefined4 *)(param_1 + 0x614));
          fn_82264148(lbl_83276554,0,*(undefined4 *)(iVar6 + 0x2c),
                            *(undefined4 *)(iVar6 + 0x28));
        }
      }
    }
  }
  fn_8236C6A0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
  return;
}

