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
extern int fn_822315A0();
extern int fn_8229FE70();
extern int fn_8229FF28();
extern int fn_823807F0();
extern int fn_8238D478();
extern int fn_824BD858();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_831D1C34;


void fn_8238CAC8(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong alStack_30;
  
  iVar1 = param_1[2];
  *(undefined4 *)(*param_2 + 0x174) = 0;
  uVar5 = lbl_831D1C34;
  iVar4 = *param_2;
  *(undefined4 *)(iVar4 + 0xd4) = 1;
  *(undefined4 *)(iVar4 + 0xe0) = uVar5;
  *(undefined4 *)(iVar4 + 0xe4) = uVar5;
  iVar4 = (**(code **)(*param_1 + 0x78))();
  if (iVar4 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x38);
    piVar3 = *(int **)**(undefined4 **)(iVar1 + 8);
    uVar7 = (ulonglong)(uint)(int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20) + 1;
    alStack_30 = (longlong)(int)uVar7;
    *(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20) = (float)alStack_30;
    (*pcVar2)(param_1,uVar7);
    iVar4 = *(int *)(*(int *)(iVar1 + 0xd4) + 0xc);
    if (*(int *)(iVar4 + 0x58) == 0) {
      fn_8229FE70();
    }
    else {
      fn_8229FF28(iVar4,uVar7);
    }
    alStack_30 = CONCAT44(*(undefined4 *)(iVar1 + 0x2f4),((uint)(alStack_30)));
    uVar5 = fn_82535298(&alStack_30,**(undefined4 **)(iVar1 + 0x9b8),0xffffffff83296bc0,
                              0xffffffff83296bd0);
    alStack_30 = CONCAT44(uVar5,((uint)(alStack_30)));
    fn_82536288(&alStack_30);
    uVar6 = (**(code **)(*param_1 + 0x80))(param_1);
    if ((uVar6 != 0) &&
       (uVar7 == (longlong)(int)((uVar7 & 0xffffffff) / (ulonglong)uVar6) * (longlong)(int)uVar6)) {
      fn_8238D478(param_1);
    }
  }
  fn_824BD858((double)*(float *)(iVar1 + 0x6d4),(double)*(float *)(iVar1 + 0x6d8));
  fn_823807F0(*(undefined4 *)(param_1[2] + 0x664),0x19);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

