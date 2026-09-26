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
extern int fn_82D0B6F0();
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82D1EA60(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 in_r0;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  pfVar2 = (float *)((uint)(&lbl_8323B1A0 + (int)in_r0) & 0xfffffff0);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = pfVar2[2];
  fVar7 = pfVar2[3];
  if (*(int *)(param_2 + 0x18) < 1) {
    if (*(int *)(param_2 + 0x7b8) != 0) {
      iVar3 = fn_82D0B6F0();
      pfVar2 = (float *)((int)in_r0 + iVar3 & 0xfffffff0);
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar7 = pfVar2[3];
    }
    pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
    *pfVar2 = fVar4;
    pfVar2[1] = fVar5;
    pfVar2[2] = fVar6;
    pfVar2[3] = fVar7;
  }
  else {
    puVar1 = *(undefined4 **)(param_2 + 0x14);
    while (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
    }
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x20);
    pfVar2 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
    *pfVar2 = fVar4 * in_register_000100c0;
    pfVar2[1] = fVar5 * in_register_000100c4;
    pfVar2[2] = fVar6 * in_register_000100c8;
    pfVar2[3] = fVar7 * in_vr12;
  }
  return param_1;
}

