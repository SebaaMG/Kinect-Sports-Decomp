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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_30;
extern int fn_824A7F80();
extern int fn_824A7FF8();
extern int fn_824A8070();
extern int fn_824A8118();
extern unsigned int uStack_50;


void fn_824A7E58(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int in_r0;
  undefined8 uVar4;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_register_00010460;
  float in_register_00010464;
  float in_register_00010468;
  float in_register_00010470;
  float in_register_00010474;
  float in_register_00010478;
  float in_register_00010490;
  float in_register_00010494;
  float in_register_00010498;
  undefined8 uStack_50;
  int aiStack_48 [6];
  undefined4 auStack_30 [6];
  
  fn_824A7F80(aiStack_48);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010470 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010474 +
          *(float *)(uVar2 + 8) * in_register_00010478;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(3,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010440 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010444 +
          *(float *)(uVar2 + 8) * in_register_00010448;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(4,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010460 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010464 +
          *(float *)(uVar2 + 8) * in_register_00010468;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(2,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  uVar2 = in_r0 + param_2 & 0xfffffff0;
  fVar1 = in_register_00010490 * 0.0 + *(float *)(uVar2 + 4) * in_register_00010494 +
          *(float *)(uVar2 + 8) * in_register_00010498;
  pfVar3 = (float *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar1;
  pfVar3[1] = fVar1;
  pfVar3[2] = fVar1;
  pfVar3[3] = fVar1;
  uStack_50 = CONCAT44(1,auStack_30[0]);
  fn_824A8070(aiStack_48,&uStack_50);
  fn_824A8118(aiStack_48);
  uVar4 = *(undefined8 *)(*(int *)(aiStack_48[0] + 4) + 8);
  uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
  if (*(float *)(param_1 + 0x48) < (((U64)(uStack_50) >> 32) & 0xFFFFFFFF)) {
    uStack_50 = ((((U64)(uStack_50)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    *(undefined4 *)(param_1 + 0x5c) = (((U64)(uStack_50) >> 0) & 0xFFFFFFFF);
  }
  uStack_50 = uVar4;
  fn_824A7FF8(aiStack_48);
  return;
}

