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
extern unsigned int *auStack_20;
extern int fn_822BEA00();
extern int fn_824556F0();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern unsigned int lbl_821B80B4;
extern unsigned int lbl_821BA6C0;
extern unsigned int lbl_821CA460;


void fn_8240C6D8(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined4 auStack_20 [2];
  
  *(undefined4 *)(*(int *)(param_1[0xd] + 0xf4) + 0x510) = 0;
  if ((param_1[0x10] == 0) || (param_1[0x10] == 1)) {
    uVar7 = (((ulonglong)(uint)param_1[0x38] - 1 & 0xffffffff) >> 0x1f) - 1 &
            (ulonglong)(uint)param_1[0x38] - 1;
    if (1 < (int)uVar7) {
      uVar7 = 2;
    }
    fn_82508078(*(undefined4 *)param_1[9],
                      (&lbl_821BA6C0)
                      [*(int *)(&lbl_821B80B4 + (int)((uVar7 & 0xffffffff) << 2))],0);
    if ((param_1[0x38] != param_1[0x39]) && (param_1[0x10] == 0)) {
      auStack_20[0] = *(undefined4 *)(param_1[0xc] + 4);
      auStack_20[0] =
           fn_82535298(auStack_20,**(undefined4 **)(param_1[0xc] + 0xc),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_20);
    }
    iVar3 = param_1[0xb];
    fn_824556F0(iVar3,iVar3 + 8);
    fn_8254EDB0((double)*(float *)(iVar3 + 0x68),(double)*(float *)(iVar3 + 0x6c),
                      *(undefined4 *)(iVar3 + 0x7c),*(undefined4 *)(iVar3 + 0x2c));
    iVar4 = *(int *)(iVar3 + 0x7c);
    uVar1 = *(undefined4 *)(iVar3 + 0x5c);
    uVar5 = *(undefined4 *)(iVar3 + 0x54);
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    if (*(int *)(iVar4 + 4) != 0) {
      *(undefined4 *)(iVar4 + 0x1dc) = *(undefined4 *)(iVar3 + 0x6c);
      *(undefined4 *)(iVar4 + 0x1d0) = uVar2;
      *(undefined4 *)(iVar4 + 0x1d8) = uVar1;
      *(undefined4 *)(iVar4 + 0x1cc) = uVar5;
      *(undefined4 *)(iVar4 + 0x1d4) = 1;
      *(undefined4 *)(iVar4 + 0x1e0) = lbl_821CA460;
    }
  }
  piVar6 = (int *)(**(code **)(*param_1 + 8))(param_1);
  (**(code **)(*piVar6 + 4))();
  fn_822BEA00();
  piVar6 = (int *)(**(code **)(*param_1 + 8))(param_1);
  (**(code **)(*piVar6 + 8))();
  fn_822BEA00();
  return;
}

