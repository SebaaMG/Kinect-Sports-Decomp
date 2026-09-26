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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_3c;
extern int fn_82D89BD8();
extern int fn_82DF0C68();
extern int fn_82DF1050();
extern unsigned int lbl_82002C5C;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82DF1108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined1 in_vs41 [16];
  undefined1 in_vs43 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  undefined1 auStack_40 [4];
  float fStack_3c;
  undefined1 auStack_30 [48];
  
  if (*(int *)((int)param_1 + 0x24) == 0) {
    iVar4 = fn_82DF0C68(param_1,param_2,param_3);
    if (iVar4 != 0) {
      pfVar1 = (float *)(in_r0 + (int)param_2 & 0xfffffff0);
      fVar6 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar7 = pfVar1[3];
      loadVectorLeftIndexed128(param_1,0x38);
      pfVar2 = (float *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *pfVar2 = *pfVar1 * in_register_000100c0;
      pfVar2[1] = fVar6 * in_register_000100c4;
      pfVar2[2] = fVar5 * in_register_000100c8;
      pfVar2[3] = fVar7 * in_vr12;
      fn_82D89BD8();
      (**(code **)(*(int *)(iVar4 + 0xe0) + 0x4c))(iVar4 + 0xe0,auStack_30);
    }
  }
  else {
    iVar4 = fn_82DF1050(param_1,0);
    fVar6 = lbl_82002C5C;
    pfVar1 = (float *)(in_r0 + (int)param_2 & 0xfffffff0);
    fVar5 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    loadVectorLeftIndexed128(param_1,0x3c);
    pfVar2 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar2 = *pfVar1 * in_register_000100c0;
    pfVar2[1] = fVar5 * in_register_000100c4;
    pfVar2[2] = fVar7 * in_register_000100c8;
    pfVar2[3] = fVar8 * in_vr12;
    fStack_3c = fStack_3c + fVar6;
    vectorAddFloatingPoint(in_vs41,in_vs43);
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010080;
    puVar3[1] = in_register_00010084;
    puVar3[2] = in_register_00010088;
    puVar3[3] = in_vr8;
    fn_82D89BD8();
    (**(code **)(*(int *)(iVar4 + 0xe0) + 0x40))(iVar4 + 0xe0,auStack_40);
    *(undefined1 *)(iVar4 + 0x2a) = 6;
  }
  return;
}

