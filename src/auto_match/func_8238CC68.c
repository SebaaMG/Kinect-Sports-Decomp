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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229FDA0();
extern int fn_8236FB68();
extern int fn_823807F0();
extern int fn_82508078();
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern int fn_82536590();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1C34;


void fn_8238CC68(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  undefined4 auStack_30 [12];
  
  param_1[3] = param_1[3] + 1;
  *(undefined4 *)(*param_2 + 0x174) = 0;
  uVar2 = lbl_831D1C34;
  iVar5 = *param_2;
  *(undefined4 *)(iVar5 + 0xe0) = lbl_831D1C34;
  *(undefined4 *)(iVar5 + 0xd4) = 1;
  *(undefined4 *)(iVar5 + 0xe4) = uVar2;
  fn_823807F0(*(undefined4 *)(param_1[2] + 0x664),0x1a);
  dVar7 = (double)(**(code **)(*param_1 + 0x70))(param_1);
  if (dVar7 <= (double)lbl_821CC160) {
    uVar6 = (ulonglong)(uint)param_1[5] - (ulonglong)(uint)param_1[3];
    fn_8229FDA0(*(undefined4 *)(*(int *)(param_1[2] + 0xd4) + 0xc),
                      ((uVar6 & 0xffffffff) >> 0x1f) - (ulonglong)(uVar6 != 0) & uVar6);
    if ((int)uVar6 < 1) {
      if (param_1[0x12] != 0) {
        iVar5 = param_1[2];
        if (((*(int *)(iVar5 + 0xa0) == 0) || (*(int *)(*(int *)(iVar5 + 0xa0) + 0x40) != 1)) &&
           (*(int *)(iVar5 + 0xc48) != 0)) {
          fn_82536590(iVar5 + 0xc40,0);
          *(undefined4 *)(iVar5 + 0xc48) = 0;
        }
        param_1[0x12] = 0;
      }
    }
    else {
      if ((int)uVar6 == 1) {
        iVar5 = param_1[2];
        lVar3 = fn_8236FB68(0xc);
        if (lVar3 != 0) {
          fn_82508078(*(undefined4 *)(iVar5 + 0xa4),lVar3,0);
        }
      }
      iVar5 = param_1[2];
      iVar1 = *(int *)(iVar5 + 0xa0);
      if (((uVar6 & 0xffffffff) == 0) || ((uVar6 & 0xffffffff) == 1)) {
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) || (*(int *)(iVar5 + 0xc48) == 0))
        goto LAB_8238ce64;
        uVar4 = 0xffffffff821b34d4;
      }
      else if ((uVar6 & 0xffffffff) < 3) {
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) || (*(int *)(iVar5 + 0xc48) == 0))
        goto LAB_8238ce64;
        uVar4 = 0xffffffff821b34c4;
      }
      else {
        if (((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) || (*(int *)(iVar5 + 0xc48) == 0))
        goto LAB_8238ce64;
        uVar4 = 0xffffffff821b34ac;
      }
      fn_82536070(0xffffffff821b34b4,uVar4);
    }
  }
  else {
    iVar5 = param_1[2];
    lVar3 = fn_8236FB68(0xc);
    if (lVar3 != 0) {
      fn_82508078(*(undefined4 *)(iVar5 + 0xa4),lVar3,0);
    }
  }
LAB_8238ce64:
  auStack_30[0] = *(undefined4 *)(param_1[2] + 0x2f8);
  auStack_30[0] =
       fn_82535298(auStack_30,**(undefined4 **)(param_1[2] + 0x9b8),0xffffffff83296bc0,
                         0xffffffff83296bd0);
  fn_82536288(auStack_30);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

