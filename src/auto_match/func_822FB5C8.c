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
extern int fn_822C6938();
extern int fn_825613E0();
extern V16 loadVectorLeftIndexed128();


void fn_822FB5C8(int param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar3 = (ulonglong)uVar1;
  pfVar2 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  loadVectorLeftIndexed128(in_r0,uVar3 + 0x40);
  fVar4 = *pfVar2 * in_register_000100d0;
  fVar5 = pfVar2[1] * in_register_000100d4;
  fVar6 = pfVar2[2] * in_register_000100d8;
  fVar7 = pfVar2[3] * in_vr13;
  fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
  pfVar2 = (float *)(uVar1 + 0x10 & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar5;
  pfVar2[2] = fVar6;
  pfVar2[3] = fVar7;
  loadVectorLeftIndexed128(uVar3,0x48);
  fn_822C6938(uVar3);
  return;
}

