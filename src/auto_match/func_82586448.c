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
extern unsigned int *auStack_80;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern int fn_826310E0();
extern int fn_82631290();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82645EA8();
extern int fn_82A1EFC0();
extern int fn_82F65E20();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821955F0;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82586448(double param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 auStack_80 [4];
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  dVar5 = (double)*(float *)(*(int *)(param_2 + 8) + 0xe4);
  dVar7 = (double)*(float *)(*(int *)(param_2 + 8) + 0x104);
  if ((double)lbl_821955F0 < dVar5) {
    dVar5 = (double)lbl_821955F0;
  }
  dVar5 = (double)fn_82F65E20(dVar5);
  dVar6 = (double)(float)dVar5;
  fStack_54 = (float)param_1;
  fStack_50 = (float)(dVar7 * (double)lbl_8218E8E8);
  fStack_4c = (float)((double)lbl_821CA460 / dVar6);
  dVar5 = (double)fn_82F65E20(lbl_82195830);
  fStack_44 = (float)dVar7;
  fStack_48 = (float)(dVar6 / (double)(float)dVar5);
  fn_826310E0(lbl_8320A898,0xc0,&uStack_60,2,0x8000);
  puVar4 = lbl_8320A898;
  uVar1 = *(uint *)(param_2 + 0x9c);
  uStack_6c = 0x4b000000;
  uStack_68 = uStack_68 & 0xc0f8 | 0x4b072602;
  uVar2 = *(uint *)(param_2 + 0xa0);
  *(undefined4 *)((int)lbl_8320A898 + 0x13a4) = 0x4b000000;
  *(uint *)(puVar4 + 0x275) = uStack_68;
  uStack_64 = (uVar2 & 0x3fffff) << 1 | 0x4b000000;
  *(uint *)((int)puVar4 + 0x13ac) = uStack_64;
  uStack_70 = ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffffffc) >> 2 | 0x40000000;
  *(uint *)(puVar4 + 0x274) = uStack_70;
  *puVar4 = *puVar4 | 0x8000;
  iVar3 = *(int *)(param_2 + 8);
  if (*(int *)(iVar3 + 0xc0) != 0) {
    uStack_60 = *(undefined4 *)(iVar3 + 0xd0);
    uStack_5c = *(undefined4 *)(iVar3 + 0xc4);
    uStack_58 = *(undefined4 *)(iVar3 + 200);
    fStack_54 = *(float *)(iVar3 + 0xcc);
    fStack_50 = *(float *)(iVar3 + 0xd4);
    fStack_4c = *(float *)(iVar3 + 0xd8);
    fStack_48 = *(float *)(iVar3 + 0xdc);
    fStack_44 = *(float *)(iVar3 + 0xe0);
    fn_826310E0(lbl_8320A898,0xc3,&uStack_60,2,0xc000);
    auStack_80[0] = *(undefined4 *)(*(int *)(param_2 + 8) + 0xb8);
    fn_82631290(lbl_8320A898,0,auStack_80,1);
    fn_82645EA8(lbl_8320A898,3);
    puVar4 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x5db) = 0;
    puVar4[2] = puVar4[2] | 0x80000;
    fn_82631920(lbl_8320A898,*(undefined4 *)(param_2 + 0xa4));
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,*(undefined4 *)(param_2 + 0xa8));
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(&uStack_60,0,0x20);
}

