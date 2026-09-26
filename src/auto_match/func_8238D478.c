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
extern unsigned int *auStack_830;
extern int fn_8229F910();
extern int fn_8229FDA0();
extern int fn_822A02D8();
extern int fn_82358FD8();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int iStack_834;
extern unsigned int iStack_838;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_840;


void fn_8238D478(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  double dVar6;
  ulonglong uStack_840;
  int iStack_838;
  int iStack_834;
  undefined1 auStack_830 [2096];
  
  dVar6 = (double)(**(code **)(*param_1 + 0x84))();
  uVar4 = (**(code **)(*param_1 + 0x88))(param_1);
  if ((uVar4 & 0xffffffff) != 0) {
    uVar1 = param_1[5];
    param_1[5] = (int)(uVar1 + uVar4);
    uVar4 = (uVar1 + uVar4) - (ulonglong)(uint)param_1[3];
    uVar4 = fn_8229FDA0(*(undefined4 *)(*(int *)(param_1[2] + 0xd4) + 0xc),
                              ((uVar4 & 0xffffffff) >> 0x1f) - (ulonglong)(uVar4 != 0) & uVar4);
  }
  if ((double)lbl_821CC160 < dVar6) {
    param_1[6] = (int)(float)(dVar6 + (double)(float)param_1[6]);
    uStack_840 = uStack_840 & 0xffffffff;
    iVar2 = *(int *)(param_1[2] + 0xd4);
    iStack_834 = 0;
    iStack_838 = 0;
    fn_822A02D8(dVar6,uVar4,&uStack_840,&iStack_834,&iStack_838);
    fn_82358FD8(*(undefined4 *)(iVar2 + 0x1c),auStack_830,0x400,0xffffffff821aae34);
    uStack_840 = (ulonglong)iStack_838;
    fn_8229F910((double)(longlong)iStack_834,(double)(longlong)uStack_840,
                      *(undefined4 *)(iVar2 + 0xc),auStack_830);
    iVar3 = param_1[2];
    iVar2 = param_1[6];
    *(int *)(iVar3 + 200) = iVar2;
    *(undefined4 *)(iVar3 + 0xbc) = 1;
    *(int *)(iVar3 + 0xc4) = iVar2;
    *(undefined4 *)(iVar3 + 0xc0) = 0xffffffff;
  }
  uStack_840 = CONCAT44(*(undefined4 *)(param_1[2] + 0x2fc),(((U64)(uStack_840) >> 32) & 0xFFFFFFFF));
  uVar5 = fn_82535298(&uStack_840,**(undefined4 **)(param_1[2] + 0x9b8),0xffffffff83296bc0,
                            0xffffffff83296bd0);
  uStack_840 = CONCAT44(uVar5,(((U64)(uStack_840) >> 32) & 0xFFFFFFFF));
  fn_82536288(&uStack_840);
  return;
}

