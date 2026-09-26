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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_825268A8();
extern int fn_82544F40();
extern int fn_825462D0();
extern int fn_82547240();
extern int fn_82560690();
extern int fn_82576D30();
extern int fn_82576EE8();
extern int fn_82577000();
extern int fn_8257CA30();
extern int fn_8257CAB8();
extern int fn_8257DF30();
extern int fn_8258A818();
extern int fn_8258A880();
extern int fn_82590090();
extern int fn_82591A90();
extern int fn_825C46F8();
extern int fn_825C8058();
extern int fn_825CD470();
extern int fn_825CEB28();
extern int fn_825D9560();
extern int fn_825F2D00();
extern int fn_825F3A00();
extern int fn_825F3D30();
extern int fn_825F4738();
extern int fn_825F49C0();
extern int fn_825F4B40();
extern int fn_825F52E0();
extern int fn_82639EA8();
extern int fn_82639F28();
extern int fn_8263CBB0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern int (*lbl_8326B8FC)();
extern unsigned int lbl_8327F8A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_8258FC38(int param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  undefined4 in_register_000104b0;
  undefined4 in_register_000104b4;
  undefined4 in_register_000104b8;
  undefined4 in_vr75;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a0 [32];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  fStack_5c = lbl_821CC160;
  uStack_78 = *(undefined4 *)(param_1 + 0x44);
  dVar4 = (double)lbl_821CC160;
  uStack_80 = lbl_8327F8A0;
  puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104b0;
  puVar2[1] = in_register_000104b4;
  puVar2[2] = in_register_000104b8;
  puVar2[3] = in_vr75;
  uStack_7c = 4;
  fStack_4c = fStack_5c;
  uStack_74 = (undefined4)param_3;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uVar1 = *(undefined4 *)(param_1 + 0x8ac);
  if ((param_2 & 0xffffffff) == 0) {
    fn_82590090(param_1,param_3);
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x40200;
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) & 0xffffffef;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x200;
    fn_8257CA30(param_1 + 0x78,&uStack_80);
    if ((*(int *)(param_1 + 0xd58) == 0) && (*(int *)(param_1 + 0x93c) != 0)) {
      fn_82576D30((double)*(float *)(param_1 + 0x828),*(int *)(param_1 + 0x93c),param_1);
    }
    fn_825D9560(param_1,param_3);
    fn_825F2D00(param_1,param_3);
    fn_825CEB28(param_1,param_3);
    fn_8258A818(*(undefined4 *)(param_1 + 0x8ac),param_3);
    fn_82639F28(lbl_8320A898,auStack_a0);
    fn_8257DF30(*(undefined4 *)(param_1 + 0xb8),&uStack_80,*(undefined4 *)(param_1 + 0x40),
                      auStack_a0);
    fn_8263CBB0(lbl_8320A898,1,0,0x40000000);
  }
  else if ((param_2 & 0xffffffff) == 1) {
    fn_82639F28(lbl_8320A898,&uStack_c0);
    fStack_ac = (float)dVar4;
    fStack_b0 = (float)lbl_821CA460;
    fn_82639EA8(lbl_8320A898,&uStack_c0);
    fn_8258A880(uVar1,param_3);
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x494) = *(uint *)(lbl_8320A898 + 0x494) | 0x18;
    *(ulonglong *)(iVar3 + 0x18) = *(ulonglong *)(iVar3 + 0x18) | 0x80000000;
    iVar3 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x4ac) = *(uint *)(lbl_8320A898 + 0x4ac) | 0x18;
    *(ulonglong *)(iVar3 + 0x18) = *(ulonglong *)(iVar3 + 0x18) | 0x40000000;
    fn_825F3A00(param_1,param_3);
    fn_82591A90(param_1,param_3);
    iVar3 = fn_82560690(0);
    if (iVar3 == 1) {
      fn_825CD470(param_1);
    }
    fn_825C46F8(param_1,param_3);
    if (*(int *)(param_1 + 0x93c) != 0) {
      fn_82576EE8((double)*(float *)(param_1 + 0x828));
    }
    if (lbl_8326B8FC != (code *)0x0) {
      (*lbl_8326B8FC)(param_1,1,param_3);
    }
  }
  else if ((param_2 & 0xffffffff) < 3) {
    dVar4 = (double)*(float *)(param_1 + 0x828);
    if (*(int *)(param_1 + 0x93c) != 0) {
      fn_82577000(dVar4,*(int *)(param_1 + 0x93c),param_2,param_3);
    }
    fn_825F3D30(dVar4,param_1,param_3);
    *(undefined4 *)(param_1 + 0xbac) = 0;
    *(undefined4 *)(param_1 + 0xbb0) = 0;
    fn_825C8058(param_1,param_3);
  }
  else if ((param_2 & 0xffffffff) == 3) {
    fn_825462D0(param_1,param_3);
    fn_825F4738(param_3);
    fn_825F49C0(*(undefined4 *)(param_1 + 0x408));
    fn_82547240(param_3);
  }
  else if ((param_2 & 0xffffffff) < 5) {
    fn_825F4B40(param_1);
    fStack_b0 = (float)dVar4;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0x500;
    uStack_b4 = 0x2d0;
    fStack_ac = (float)lbl_821CA460;
    fn_82639EA8(lbl_8320A898,&uStack_c0);
    fn_8257CAB8(param_1 + 0x78,&uStack_80);
    fn_82544F40();
    iVar3 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x2f14) = 0;
    *(uint *)(iVar3 + 0x2934) = *(uint *)(iVar3 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x20800;
    iVar3 = lbl_8320A898;
    *(float *)(lbl_8320A898 + 0x2904) = (float)dVar4;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x8000000;
    fn_825268A8(0);
    iVar3 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x2f14) = 1;
    *(uint *)(iVar3 + 0x2934) =
         (-(uint)(*(int *)(iVar3 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar3 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(iVar3 + 0x10) = *(ulonglong *)(iVar3 + 0x10) | 0x20800;
    fn_825F52E0();
  }
  else if ((((param_2 & 0xffffffff) == 5) && (*(int *)(param_1 + 0xd58) != 0)) &&
          (iVar3 = *(int *)(param_1 + 0x93c), iVar3 != 0)) {
    fStack_ac = fStack_5c;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0x500;
    uStack_b4 = 0x2d0;
    fStack_b0 = (float)lbl_821CA460;
    fn_82639EA8(lbl_8320A898,&uStack_c0);
    fn_82576D30((double)*(float *)(param_1 + 0x828),iVar3,param_1);
  }
  return;
}

