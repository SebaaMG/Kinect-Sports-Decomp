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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_a0;
extern int fn_8229F688();
extern int fn_82358FD8();
extern int fn_824556F0();
extern int fn_82456AC8();
extern int fn_82508078();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern unsigned int lbl_821B80A0;
extern unsigned int lbl_821BA6C0;
extern unsigned int lbl_821CA460;


void fn_8240C558(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 auStack_130 [4];
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [160];
  
  uVar6 = *(uint *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0xe0) = uVar6 + 1;
  *(undefined4 *)(param_1 + 0xf8) = 1;
  uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
  if (1 < (int)uVar6) {
    uVar6 = 2;
  }
  fn_82508078(**(undefined4 **)(param_1 + 0x24),
                    (&lbl_821BA6C0)[*(int *)(&lbl_821B80A0 + uVar6 * 4)],0);
  auStack_130[0] = **(undefined4 **)(param_1 + 0x30);
  auStack_130[0] =
       fn_82535298(auStack_130,*(undefined4 *)(*(undefined4 **)(param_1 + 0x30))[3],
                         0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(auStack_130);
  iVar4 = *(int *)(param_1 + 0x2c);
  fn_824556F0(iVar4,iVar4 + 4);
  fn_8254EDB0((double)*(float *)(iVar4 + 0x68),(double)*(float *)(iVar4 + 0x6c),
                    *(undefined4 *)(iVar4 + 0x7c),*(undefined4 *)(iVar4 + 0x28));
  iVar5 = *(int *)(iVar4 + 0x7c);
  uVar1 = *(undefined4 *)(iVar4 + 0x6c);
  uVar2 = *(undefined4 *)(iVar4 + 0x5c);
  uVar3 = *(undefined4 *)(iVar4 + 0x58);
  if (*(int *)(iVar5 + 4) != 0) {
    *(undefined4 *)(iVar5 + 0x1cc) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(iVar5 + 0x1dc) = uVar1;
    *(undefined4 *)(iVar5 + 0x1d4) = 1;
    *(undefined4 *)(iVar5 + 0x1d0) = uVar3;
    *(undefined4 *)(iVar5 + 0x1d8) = uVar2;
    *(undefined4 *)(iVar5 + 0x1e0) = lbl_821CA460;
  }
  fn_82456AC8((ulonglong)*(uint *)(param_1 + 0x28),(ulonglong)*(uint *)(param_1 + 0x28) + 0x1c
                   );
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 0xf4) + 0x510) = 1;
  fn_82358FD8(*(undefined4 *)(param_1 + 4),auStack_120,0x40,0xffffffff821b80ac);
  fn_82528EE0(auStack_a0,0x40,auStack_120,*(undefined4 *)(param_1 + 0xe0));
  fn_8229F688(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xd4) + 0xc),auStack_a0,0);
  return;
}

