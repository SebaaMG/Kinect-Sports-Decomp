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
extern unsigned int *auStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8306E7F8();
extern int fn_8306ECA8();
extern int fn_8306EE38();
extern int fn_8306EF40();
extern int fn_83075D80();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005718;
extern unsigned int lbl_821AAD20;


void fn_830758C0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined8 in_r0;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  double dVar5;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_2 + 0x528) < 1) {
    lVar4 = 0;
    do {
      fn_8306ECA8();
      fn_83075D80(param_4,lVar4);
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < 0x14);
  }
  else {
    dVar5 = (double)fn_8306E7F8(param_1,(double)lbl_821AAD20,(double)lbl_82005718);
    fStack_64 = (float)dVar5;
    lVar4 = 0;
    fStack_68 = (float)dVar5;
    fStack_6c = (float)dVar5;
    fStack_70 = (float)dVar5;
    do {
      uVar2 = (ulonglong)*(uint *)(param_2 + 0x520) * 0x29 + lVar4;
      pfVar1 = (float *)((int)((uVar2 & 0xffffffff) << 4) + param_2 & 0xfffffff0);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      if (*(int *)(param_2 + 0x528) < 2) {
        fn_8306ECA8();
        puVar3 = auStack_60;
        pfVar1 = (float *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
        *pfVar1 = in_register_00010010;
        pfVar1[1] = in_register_00010014;
        pfVar1[2] = in_register_00010018;
        pfVar1[3] = in_vr1;
      }
      else {
        puVar3 = (undefined1 *)(((int)uVar2 + 0x14) * 0x10 + param_2);
      }
      pfVar1 = (float *)((uint)(puVar3 + (int)in_r0) & 0xfffffff0);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      dVar5 = (double)fn_8306EE38();
      if ((double)lbl_82002AE0 < dVar5) {
        fn_8306EF40((double)lbl_82002AE0);
      }
      pfVar1 = (float *)((int)&fStack_70 + (int)in_r0 & 0xfffffff0);
      in_register_00010010 = fVar10 * *pfVar1 + fVar6;
      in_register_00010014 = fVar11 * pfVar1[1] + fVar7;
      in_register_00010018 = fVar12 * pfVar1[2] + fVar8;
      in_vr1 = fVar13 * pfVar1[3] + fVar9;
      fn_83075D80(param_4,lVar4);
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < 0x14);
  }
  return;
}

