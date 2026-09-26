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
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822C72E0();
extern int fn_822CEF30();
extern int fn_822CF260();
extern int fn_822D0570();
extern int fn_822DF348();
extern int fn_82365BD8();
extern int fn_824D2AE8();
extern int fn_824D6F28();
extern int fn_824D7000();
extern int fn_8288B760();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_821916F4;


void fn_822DE518(int param_1)

{
  undefined4 uVar1;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar7;
  undefined8 in_r7;
  undefined8 in_r8;
  double dVar8;
  double dVar9;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [96];
  
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x168) == 0) {
    uVar4 = *(uint *)(*(int *)(param_1 + 0x14) + 0x16c);
  }
  else {
    uVar4 = fn_8288B760();
    uVar4 = uVar4 & 0xff;
  }
  if (uVar4 != 0) {
    if ((*(int *)(param_1 + 0xcc) == 0) &&
       (iVar5 = fn_822CF260(*(undefined4 *)(param_1 + 0x14),0), iVar5 != 0)) {
      iVar5 = *(int *)(param_1 + 0x14);
      iVar6 = fn_822CEF30((double)lbl_821916F4,iVar5);
      if ((iVar6 == 0) &&
         (iVar5 = fn_822C72E0(*(undefined4 *)(*(int *)(iVar5 + 0x114) + 0x20),
                                    0xffffffff821ad284), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0xcc) = 1;
      }
    }
    fn_822D0570(param_1,0,0,0);
    if (*(int *)(param_1 + 0xa0) < 0x18) {
      uVar7 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x14) + 0x24);
      if ((*(int *)(param_1 + 0xa4) == 0) &&
         (iVar5 = fn_824D6F28(uVar7,param_1 + 0xa8), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0xa4) = 1;
      }
      if ((*(int *)(param_1 + 0xac) == 0) &&
         (iVar5 = fn_824D7000(uVar7,param_1 + 0xb0), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 1;
      }
      if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xac) != 0)) {
        fn_824D2AE8(&iStack_70,param_1 + 0xb4);
        if (iStack_70 != 0) {
          dVar9 = (double)*(float *)(param_1 + 0xb0);
          dVar8 = (double)*(float *)(param_1 + 0xa8);
          uVar1 = *(undefined4 *)(param_1 + 0xa0);
          uVar2 = fn_82230110(auStack_60,0xffffffff82196582);
          uVar3 = fn_82365BD8(&iStack_68,&iStack_70);
          fn_822DF348(dVar8,dVar9,param_1,uVar3,uVar2,uVar1,in_r7,in_r8,1,0);
        }
        *(undefined4 *)(param_1 + 0xa0) = 0x18;
        fn_824D2AE8(&iStack_68,param_1 + 0xb4);
        if (iStack_68 != 0) {
          *(undefined4 *)(iStack_68 + 0xac) = 1;
        }
        if (iStack_64 != 0) {
          fn_822315A0();
        }
        if (iStack_6c != 0) {
          fn_822315A0();
        }
      }
    }
  }
  return;
}

