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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int *fStack_100;
extern unsigned int fStack_f8;
extern unsigned int *fStack_fc;
extern int fn_82809CB0();
extern int fn_8280AD30();
extern int fn_8280B0E8();
extern int fn_8280BA60();
extern int fn_8280BFD8();
extern int fn_8280CB70();
extern int fn_8280CED8();
extern int fn_82810280();
extern int fn_82810470();
extern int fn_828105C8();
extern int fn_82810B78();
extern int fn_828611B8();
extern int fn_828616F0();
extern int fn_82F68CC0();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82861BB8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [208];
  
  puVar2 = (undefined4 *)fn_82F6A538();
  bVar1 = false;
  fn_82F68CC0();
  *puVar2 = 0;
  puVar2[1] = 0;
  fn_8280BFD8(auStack_d0,param_3,param_4);
  puVar5 = puVar2 + 8;
  fn_8280CB70(param_2 + 0x20,auStack_d0,puVar5);
  puVar4 = puVar2 + 0x18;
  fn_8280CED8(puVar5,puVar4);
  if ((*(byte *)(puVar2 + 6) & 1) != 0) {
    fn_828611B8(puVar2 + 0x3f,puVar4,0xfc,0xfc,puVar2 + 0x49);
    goto code_r0x82861de0;
  }
  if ((*(byte *)(puVar2 + 6) & 2) != 0) goto code_r0x82861de0;
  if (param_5 != 0) {
    fn_8280AD30(puVar5,param_3,auStack_f0);
    fn_8280B0E8(puVar5,param_4,&fStack_100);
    dVar12 = (double)lbl_82002AE0;
    dVar14 = (double)lbl_821AAD20;
    if (param_5 == 1) {
      iVar3 = fn_82810470(auStack_f0);
      if (iVar3 != 0) {
        fn_828105C8(dVar14,dVar14,dVar12,auStack_f0);
      }
      fn_82810B78(auStack_f0,auStack_e0);
      dVar6 = (double)fn_82810280(auStack_e0,&fStack_100);
      if (((dVar14 < dVar6) && ((double)fStack_f8 < dVar14)) ||
         ((dVar6 < dVar14 && (dVar14 < (double)fStack_f8)))) goto code_r0x82861d08;
    }
    else if (param_5 == 2) {
code_r0x82861d08:
      bVar1 = true;
    }
    if (bVar1) {
      dVar10 = (double)fStack_f8;
      dVar6 = (double)fn_82810280(auStack_f0,&fStack_100);
      iVar3 = (int)param_2;
      dVar9 = (double)*(float *)(iVar3 + 0x120);
      dVar13 = (double)lbl_8200133C;
      dVar11 = (double)((float)(dVar12 / (double)fStack_f8) * fStack_100);
      dVar8 = (double)((float)(dVar12 / (double)fStack_f8) * fStack_fc);
      dVar7 = (double)(float)(dVar6 * (double)(float)(dVar13 / dVar10));
      dVar12 = (double)fn_82809CB0(dVar11);
      dVar10 = (double)*(float *)(iVar3 + 0xb4);
      dVar6 = (double)(float)(dVar12 * (double)(float)(dVar9 / (double)*(float *)(iVar3 + 0xa0)));
      dVar12 = (double)fn_82809CB0(dVar8);
      dVar12 = (double)(float)((double)(float)(dVar13 / (double)(float)((double)(float)((double)(
                                                  float)(dVar12 * (double)(float)(dVar9 / dVar10) +
                                                        dVar6) + dVar9) - dVar7)) * dVar9);
      fn_8280BA60((double)*(float *)(iVar3 + 0xa0),dVar14,dVar14,dVar14,dVar14,dVar10,dVar14,
                      dVar14,(double)(float)(dVar12 * dVar11),(double)(float)(dVar12 * dVar8),dVar12
                      ,(double)(float)(dVar12 * dVar7),dVar14,puVar2 + 0x28);
    }
  }
  fn_828616F0(puVar2 + 0x45,puVar4,puVar2 + 0x49);
code_r0x82861de0:
  fn_82F6A584();
  return;
}

