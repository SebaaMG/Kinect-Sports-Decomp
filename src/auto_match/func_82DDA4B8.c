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
extern int fn_82CE5040();
extern int fn_82CE50D8();
extern int fn_82CE6820();
extern int fn_83080DA8();
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DDA4B8(double param_1,uint *param_2,undefined8 param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  
  pfVar1 = (float *)param_2[0x10];
  dVar7 = (double)(float)((double)pfVar1[2] * param_1);
  fn_83080DA8((double)*pfVar1,dVar7,(ulonglong)*param_2 + 0x40,param_3,param_4,param_4);
  fn_83080DA8((double)*pfVar1,dVar7,(ulonglong)param_2[1] + 0x40);
  iVar5 = param_4 + 0x80;
  fn_82CE6820(iVar5,param_4,param_4 + 0x40);
  fn_82CE50D8(param_4 + 0xc0,iVar5,param_2 + 8);
  fn_82CE5040(param_4 + 0xd0,iVar5,param_2 + 0xc);
  *(float *)(param_4 + 0xcc) = -(float)param_2[5];
  lVar6 = 2;
  puVar2 = (undefined4 *)(*param_2 + 0x80 & 0xfffffff0);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  iVar4 = param_4 + 0x100;
  puVar3 = (undefined4 *)(param_4 + 0x110U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  do {{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs32); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar8, &_vt1, 16); }
    vectorMergeHighWord(auVar8,auVar9);
    puVar2 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
    *puVar2 = in_register_00010040;
    puVar2[1] = in_register_00010044;
    puVar2[2] = in_register_00010048;
    puVar2[3] = in_vr4;
    iVar4 = iVar4 + -0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  fn_82CE5040(param_4 + 0x120,iVar5,(ulonglong)param_2[1] + 0x80);{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs32); memcpy(auVar9, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar8, &_vt3, 16); }
  vectorMergeHighWord(auVar8,auVar9);
  puVar2 = (undefined4 *)(param_4 + 0xe0U & 0xfffffff0);
  *puVar2 = in_register_00010040;
  puVar2[1] = in_register_00010044;
  puVar2[2] = in_register_00010048;
  puVar2[3] = in_vr4;
  return;
}

