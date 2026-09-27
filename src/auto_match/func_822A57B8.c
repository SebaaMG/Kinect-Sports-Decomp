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
extern int fn_82282360();
extern int fn_822A72B0();
extern int fn_82523340();
extern int fn_82549960();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern int fn_82A1EFC0();
extern int fn_82F68CC0();
extern unsigned int lbl_82195E58;
extern unsigned int lbl_82195E5C;
extern unsigned int lbl_82196288;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


int fn_822A57B8(double param_1,int param_2,undefined8 param_3,undefined4 *param_4,
                 ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 in_r0;
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_vr0 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar4 [16];
  undefined1 in_vr13 [16];

  memcpy((void *)(auVar4), in_vr1, 16);
  fn_82F68CC0(param_2,param_3,0x108);
  *(float *)(param_2 + 0x520) = (float)param_1;
  *(undefined4 *)(param_2 + 0x108) = 2;
  uVar2 = lbl_821CC160;
  *(undefined4 *)(param_2 + 0x500) = 2;
  memcpy((void *)((const void *)(param_2 + 0x510U & 0xfffffff0)), auVar4, 16);
  *(undefined4 *)(param_2 + 0x524) = uVar2;
  *(undefined4 *)(param_2 + 0x528) = uVar2;
  *(undefined4 *)(param_2 + 0x10c) = 0;
  memcpy((void *)((const void *)(param_2 + 0x5a0U & 0xfffffff0)), auVar4, 16);
  *(undefined4 *)(param_2 + 0x504) = 0;
  *(uint *)(param_2 + 0x52c) = (uint)(param_5 != 0);
  *(undefined4 *)(param_2 + 0x530) = 0;
  *(undefined4 *)(param_2 + 0x534) = 0;
  *(undefined4 *)(param_2 + 0x538) = 1;
  *(undefined4 *)(param_2 + 0x53c) = 0;
  *(undefined4 *)(param_2 + 0x540) = 0;
  *(undefined4 *)(param_2 + 0x544) = 0;
  *(undefined4 *)(param_2 + 0x548) = 0;
  *(undefined4 *)(param_2 + 0x54c) = 0;
  *(undefined4 *)(param_2 + 0x550) = 0;
  *(undefined4 *)(param_2 + 0x5bc) = 0;
  *(undefined4 *)(param_2 + 0x5c0) = 0;
  *(float *)(param_2 + 0x5b4) = (float)param_1;
  *(undefined4 *)(param_2 + 0x5b0) = uVar2;
  *(undefined4 *)(param_2 + 0x5b8) = uVar2;
  if (param_4 == (undefined4 *)0x0) {
    param_4 = &lbl_82196288;
  }
  iVar3 = param_2 + 0x118;
  *(undefined4 *)(param_2 + 0x114) = *param_4;
  if ((param_5 & 0xffffffff) == 0) {
    fn_82A1EFC0(iVar3,0,1000);
  }
  else {
    fn_82A1DD38(iVar3,param_5);
  }
  if (*(int *)(param_2 + 0x52c) == 0) {
    fn_82A1EFC0(param_2 + 0x554,0,0x48);
    uVar1 = fn_8265C9E0(0x200);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar2 = fn_82549960(uVar1,param_2 + 0x114,0,0,0,0);
      goto LAB_822a5970;
    }
  }
  else {
    fn_822A72B0(param_2,param_6,param_7);
    uVar1 = fn_8265C9E0(0x319c0);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar2 = fn_82523340(uVar1,iVar3,param_2 + 0x554,param_2 + 0x578,0,param_9,1,0);
      goto LAB_822a5970;
    }
  }
  uVar2 = 0;
LAB_822a5970:
  *(undefined4 *)(param_2 + 0x550) = uVar2;
  if (*(int *)(param_2 + 0x108) != 0) {
    *(undefined4 *)(param_2 + 0x108) = 0;
  }
  iVar3 = fn_8265C9E0(0xe0);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar4, &_vt0, 16); }
    loadVectorLeftIndexed128(0xffffffff821924e8,0x80);
    vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3);
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar4,3,2);
    uVar2 = fn_82282360((double)lbl_82195E58,(double)lbl_82195E58,(double)lbl_82195E5C);
  }
  *(undefined4 *)(param_2 + 0x5c4) = uVar2;
  *(undefined4 *)(param_2 + 0x5c8) = 1;
  *(undefined4 *)(param_2 + 0x5cc) = 0;
  *(undefined4 *)(param_2 + 0x5d0) = 0;
  *(undefined4 *)(param_2 + 0x5d4) = 0xffffffff;
  return param_2;
}
