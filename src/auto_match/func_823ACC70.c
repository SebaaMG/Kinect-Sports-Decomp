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
extern unsigned int *auStack_40;
extern int fn_823AC9D8();
extern unsigned int lbl_821CC160;


int fn_823ACC70(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  int in_r0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint in_register_00010410;
  uint in_register_00010414;
  uint in_register_00010418;
  uint in_vr65;
  undefined4 in_register_00010440;
  undefined4 in_register_00010444;
  undefined4 in_register_00010448;
  undefined4 in_vr68;
  undefined4 in_register_00010470;
  undefined4 in_register_00010474;
  undefined4 in_register_00010478;
  undefined4 in_vr71;
  undefined1 auStack_40 [16];
  float afStack_30 [6];
  
  fn_823AC9D8(afStack_30);
  fVar4 = lbl_821CC160;
  if (*(float *)(param_2 + 0x38) <= lbl_821CC160) {
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010470;
    puVar2[1] = in_register_00010474;
    puVar2[2] = in_register_00010478;
    puVar2[3] = in_vr71;
  }
  else {
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = in_register_00010440;
    puVar2[1] = in_register_00010444;
    puVar2[2] = in_register_00010448;
    puVar2[3] = in_vr68;
  }
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar8 = pfVar3[3];
  fVar1 = fVar5 * 0.0 + *(float *)(((uint)(auStack_40 + in_r0) & 0xfffffff0) + 4) * fVar6 +
          *(float *)(((uint)(auStack_40 + in_r0) & 0xfffffff0) + 8) * fVar7;
  pfVar3 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  if (afStack_30[0] <= fVar4) {
    fVar8 = (float)((uint)fVar8 ^ in_vr65);
    fVar7 = (float)((uint)fVar7 ^ in_register_00010418);
    fVar6 = (float)((uint)fVar6 ^ in_register_00010414);
    fVar5 = (float)((uint)fVar5 ^ in_register_00010410);
  }
  pfVar3 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar3 = fVar5;
  pfVar3[1] = fVar6;
  pfVar3[2] = fVar7;
  pfVar3[3] = fVar8;
  return param_1;
}

