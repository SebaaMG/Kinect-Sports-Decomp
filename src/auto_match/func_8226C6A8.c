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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_8280CB70();
extern int fn_8280D2A0();
extern int fn_8280E890();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_100;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_8226C6A8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e0 [48];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [72];
  
  iVar3 = *(int *)((uint)*(ushort *)(param_2 + 0x2e) * 4 + *(int *)(param_1 + 0x58)) * 0xf0 +
          *(int *)(param_1 + 0x40);
  fn_8280CB70(param_5,param_6,param_7);
  fn_8280CB70(iVar3 + 0x40,param_7,auStack_e0);
  puVar1 = (undefined4 *)(iVar3 + 0xd0U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((int)&uStack_f0 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  uStack_fc = lbl_821CC160;
  uStack_100 = uStack_f0;
  uStack_f8 = uStack_ec;
  fn_8280D2A0((double)*(float *)(iVar3 + 0xc0),auStack_60,&uStack_100);
  fn_8280E890(iVar3 + 0xb0,auStack_a0);
  fn_8280CB70(auStack_a0,auStack_60,auStack_a0);
  fn_8280CB70(auStack_a0,auStack_e0,auStack_e0);
  fStack_b0 = *(float *)(iVar3 + 0x90) + fStack_b0;
  fStack_ac = *(float *)(iVar3 + 0x98) + fStack_ac;
  fStack_a8 = *(float *)(iVar3 + 0x94) + fStack_a8;
  fn_8280CB70(iVar3,auStack_e0,param_7);
  return;
}

