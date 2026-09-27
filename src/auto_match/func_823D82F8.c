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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_80;
extern int fn_823D84A0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern float lbl_82195800;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D19E0;
extern unsigned int lbl_831D19E4;
extern unsigned int lbl_831D19E8;
extern unsigned int lbl_831D19EC;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_68;
extern unsigned int uStack_7b;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


void fn_823D82F8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,float *param_6)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [96];
  
  fStack_80 = param_6[2];
  if (fStack_80 == 0.0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fStack_80 = 2.8026e-45;
    fVar1 = (lbl_82193E50 - ABS(param_6[1])) * lbl_82195800 * *param_6 *
            ((lbl_831D19E4 - lbl_831D19E0) *
             ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + lbl_831D19E0);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar1 = lbl_821CC160;
    }
    fVar4 = lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 - lbl_821CA460 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1 - lbl_821CA460) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    if (fVar4 <= lbl_831D19E8) {
      if (fVar4 < lbl_831D19EC) {
        fStack_80 = 4.2039e-45;
      }
    }
    else {
      fStack_80 = 1.4013e-45;
    }
  }
  uStack_7c = *(undefined1 *)(param_6 + 0x12);
  uStack_7b = *(undefined1 *)((int)param_6 + 0x49);
  puVar5 = &uStack_68;
  fVar1 = param_6[3];
  puVar2 = (undefined4 *)((uint)(param_6 + 0xc) & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  lVar7 = 6;
  puVar6 = &uStack_98;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (fVar1 != 0.0) {
    uStack_90 = param_2;
    uStack_8c = param_3;
    uStack_88 = param_4;
    uStack_84 = param_5;
    fn_823D84A0((double)lbl_82005748,(double)param_6[0x10],param_1,auStack_60,fVar1,
                      *(undefined1 *)(param_6 + 6),0x20,param_6,param_6[0x11],2);
  }
  return;
}

