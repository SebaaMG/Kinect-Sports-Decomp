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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82779C60();
extern int fn_82779CD8();
extern int fn_8277A9E0();
extern unsigned int lbl_8201545C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8277AE48(int param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  puVar9 = (uint *)(param_1 + 0x18);
  uVar8 = 0;
  if (param_2[1] != 0) {
    uStack_58 = lbl_821AAD20;
    do {
      fVar4 = lbl_8201545C;
      uVar1 = *puVar9;
      puVar5 = (undefined4 *)
               (*(int *)((uVar8 + param_2[2] >> 6 & 0x3fffffc) + *(int *)(*param_2 + 0x14)) +
               ((uVar8 + param_2[2]) * 8 & 0x7f8));
      uStack_60 = *puVar5;
      uStack_5c = puVar5[1];
      if (1 < uVar1) {
        pfVar7 = (float *)(*(int *)((uVar1 - 2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                          (uVar1 - 2 & 0x3f) * 0xc);
        pfVar6 = (float *)(*(int *)((uVar1 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) +
                          (uVar1 - 1 & 0x3f) * 0xc);
        fVar2 = *pfVar6 - *pfVar7;
        fVar3 = pfVar6[1] - pfVar7[1];
        fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
        pfVar7[2] = fVar2;
        if ((fVar2 <= fVar4) && (*puVar9 != 0)) {
          *puVar9 = *puVar9 - 1;
        }
      }
      fn_82779C60(puVar9,&uStack_60);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_2[1]);
  }
  fn_82779CD8(puVar9,(param_4 & 0xff) == 0);
  fn_8277A9E0(param_1,param_3,param_4);
  return;
}

