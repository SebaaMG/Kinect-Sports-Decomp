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
extern int fn_8234E808();
extern int fn_825613E0();
extern V16 loadVectorLeftIndexed128();


void fn_822D8A28(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 in_r0;
  float *pfVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar4 = (ulonglong)uVar1;
    pfVar3 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
    loadVectorLeftIndexed128(in_r0,uVar4 + 0x40);
    fVar5 = *pfVar3 * in_register_000100d0;
    fVar6 = pfVar3[1] * in_register_000100d4;
    fVar7 = pfVar3[2] * in_register_000100d8;
    fVar8 = pfVar3[3] * in_vr13;
    fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
    pfVar3 = (float *)(uVar1 + 0x10 & 0xfffffff0);
    *pfVar3 = fVar5;
    pfVar3[1] = fVar6;
    pfVar3[2] = fVar7;
    pfVar3[3] = fVar8;
    loadVectorLeftIndexed128(uVar4,0x48);
    fn_822C6938(uVar4);
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x24) != 0) {
    iVar2 = *(int *)(param_1 + 0x80);
    for (pfVar3 = (float *)(iVar2 + 0x18); pfVar3 != (float *)(iVar2 + 0x60); pfVar3 = pfVar3 + 3) {
      pfVar3[2] = (pfVar3[1] - *pfVar3) + *pfVar3;
    }
    fn_8234E808();
  }
  return;
}

