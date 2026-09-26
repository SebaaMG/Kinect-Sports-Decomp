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
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D1BDE0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821347B4;
extern unsigned int stack0x00000000;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D1C120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 in_vs32 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uVar2 = ZEXT48(&stack0x00000000);
  puVar3 = (undefined1 *)fn_82F6A544();
  dVar12 = (double)lbl_82134508;
  uVar7 = 0;
  lVar8 = 0;
  if (0 < *(int *)((int)param_3 + 4)) {
    dVar11 = (double)lbl_82002D08;
    dVar10 = (double)lbl_82002AE0;
    dVar9 = (double)lbl_821347B4;
    uVar7 = 0;
    do {
      if (((int)lVar8 != (int)param_4) && ((int)lVar8 != (int)param_5)) {
        uVar1 = storeVectorElementWordIndexed(in_vs44,0,uVar2 - 0xd0);
        *(undefined4 *)(uVar2 - 0xd0) = uVar1;
        if (dVar9 < (double)fStack_d0) {
          *(float *)(param_6 + 0xc) = (float)dVar10;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs43); memcpy(auVar14, &_vt0, 16); }
          uVar1 = storeVectorElementWordIndexed(auVar14,0,uVar2 - 0xcc);
          *(undefined4 *)(uVar2 - 0xcc) = uVar1;
          dVar13 = (double)(float)((double)fStack_cc / ABS((double)fStack_d0));
          if ((dVar13 < (double)(float)(dVar12 + dVar11)) &&
             (iVar4 = fn_82D1BDE0(param_3,param_4,param_5,lVar8,uVar2 - 0xc0), iVar4 == 0)) {
            uVar7 = 1;
            piVar5 = (int *)param_7;
            if (dVar11 <= ABS((double)(float)(dVar13 - dVar12))) {
              piVar5[1] = 0;
              iVar4 = fn_82CE5410();
              dVar12 = dVar13;
              if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_7,0x20);
                dVar12 = dVar13;
              }
              puVar6 = (undefined8 *)(piVar5[1] * 0x20 + *piVar5);
              if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = uStack_c0;
                puVar6[1] = uStack_b8;
                puVar6[2] = uStack_b0;
                puVar6[3] = uStack_a8;
              }
            }
            else {
              iVar4 = fn_82CE5410();
              if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_7,0x20);
              }
              puVar6 = (undefined8 *)(piVar5[1] * 0x20 + *piVar5);
              if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = uStack_c0;
                puVar6[1] = uStack_b8;
                puVar6[2] = uStack_b0;
                puVar6[3] = uStack_a8;
              }
            }
            piVar5[1] = piVar5[1] + 1;
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)((int)param_3 + 4));
  }
  *puVar3 = uVar7;
  fn_82F6A590(puVar3);
  return;
}

