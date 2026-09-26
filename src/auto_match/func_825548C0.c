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
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_827F21F0();
extern int fn_827F2220();
extern int fn_827F58A8();
extern int fn_827F6210();
extern int fn_827F62A8();
extern int fn_827F6308();
extern int fn_827F6318();
extern int fn_827F6370();
extern int fn_827F6418();
extern int fn_827F6420();
extern int fn_827F6430();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_825548C0(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (double)*(float *)(param_4 + 0x14);
  uVar2 = *(undefined4 *)(param_4 + 0x18);
  dVar6 = (double)lbl_821CA460;
  if (dVar7 == (double)lbl_82192734) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 400) + (int)((param_2 & 0xffffffff) << 2)) + 0x114) ==
        0) {
      dVar7 = (double)lbl_821CC160;
    }
    else {
      dVar7 = (double)fn_827F6318();
    }
  }
  else if (dVar7 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    dVar7 = (double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6);
  }
  fn_827F62A8(dVar7,param_3);
  fn_827F6430(dVar7,param_3);
  fn_827F6308(param_3,uVar2);
  if (*(float *)(param_4 + 8) == lbl_821CC160) {
    fn_827F6210((double)*(float *)(param_4 + 4),param_3);
  }
  else {
    fn_827F6370();
  }
  iVar3 = (int)((param_2 & 0x3fffffff) << 2);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 400) + iVar3) + 0x184) =
       *(undefined4 *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x38) == 1) {
    fn_827F6420(param_3,1);
    fn_827F6418(param_3,0);
  }
  if (*(int *)(param_4 + 0x2c) == 0) {
    uVar2 = *(undefined4 *)(param_4 + 0x30);
    iVar4 = *(int *)(*(int *)(param_1 + 400) + iVar3);
    uVar5 = fn_8251F720(param_4 + 0x24,0);
    fn_8255F448(iVar4,param_3,uVar5,uVar2);
    *(undefined4 *)(iVar4 + 0x168) = 0;
    *(undefined4 *)(iVar4 + 0x160) = *(undefined4 *)(param_4 + 0x24);
  }
  else {
    fn_8255F448(*(undefined4 *)(*(int *)(param_1 + 400) + iVar3),param_3,
                      *(int *)(param_4 + 0x2c),*(undefined4 *)(param_4 + 0x30));
  }
  if ((*(uint *)(param_4 + 0x34) & 1) != 0) {
    fn_827F21F0(*(undefined4 *)(*(int *)(param_1 + 400) + iVar3));
  }
  if ((*(uint *)(param_4 + 0x34) & 2) != 0) {
    fn_827F2220(*(undefined4 *)(*(int *)(param_1 + 400) + iVar3));
  }
  if ((param_2 & 0xffffffff) != 0) {
    fVar1 = *(float *)(param_4 + 0x10);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x198) + iVar3 + -4);
    if (*(int *)(param_4 + 0xc) == 0x20) {
      dVar6 = (double)lbl_8218E8E8;
    }
    if (*(int *)(param_4 + 0x1c) == 0x41) {
      *(undefined1 *)(*(int *)(param_1 + 0x19c) + (int)param_2) = 3;
    }
    iVar3 = *(int *)(param_4 + 0xc);
    uVar5 = 0;
    if (iVar3 == 0x20) {
      uVar5 = 0;
    }
    else if (iVar3 == 0x21) {
      uVar5 = 1;
    }
    else if (iVar3 == 0x22) {
      uVar5 = 4;
    }
    fn_827F58A8(dVar6,(double)fVar1,uVar2,uVar5);
  }
  return;
}

