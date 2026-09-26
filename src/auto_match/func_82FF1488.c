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
extern int fn_82FEF940();
extern int fn_82FF0638();
extern int fn_82FF0798();
extern int fn_82FF2608();
extern int fn_82FF5028();
extern int fn_83000878();
extern int fn_830039A8();
extern int fn_83008550();
extern int fn_8301B6D8();
extern int fn_8301B7F0();
extern int fn_8301B8C0();
extern int fn_83027348();
extern int fn_83027358();
extern int fn_830273B8();
extern int fn_83029C68();
extern int fn_83029C70();
extern unsigned int lbl_832642F8;
extern unsigned int lbl_83264304;


undefined8 fn_82FF1488(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    return 2;
  }
  uVar1 = fn_82FF5028(lbl_83264304,*(int *)(param_1 + 0x50),param_1 + 4,param_1 + 8);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar1 = fn_82FEF940(param_1);
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  uVar1 = fn_82FF0638(param_1);
  if ((int)uVar1 == 1) {
    piVar3 = (int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    fn_830039A8(*(undefined4 *)(param_1 + 0x68),piVar3,*(undefined4 *)(param_1 + 0x70),0,
                      param_1 + 0x150);
    if ((ulonglong)*(uint *)(param_1 + 0x38) != 0) {
      iVar2 = fn_82FF2608((ulonglong)*(uint *)(param_1 + 0x38) + 4);
      if (iVar2 == 0) {
        if (*(int *)(*piVar3 + 0xc) != 0) {
          return 2;
        }
      }
      else {
        fn_83027348((double)*(float *)(iVar2 + 0x18),*piVar3);
        fn_83027358((double)*(float *)(iVar2 + 0x1c),*piVar3);
        uVar1 = fn_82FF0798(param_1,iVar2);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
      }
      iVar2 = *piVar3;
      if (((iVar2 != 0) && (*(int *)(iVar2 + 8) == 2)) && (*(int *)(iVar2 + 0x44) != 0)) {
        iVar4 = *(int *)(iVar2 + 4);
        if ((*param_2 != 0) && (param_2[1] == iVar4)) {
          *(int *)(param_1 + 0x17c) = *param_2;
          *(int *)(param_1 + 0x180) = param_2[1];
        }
        if ((*(int *)(param_1 + 0x17c) == 0) || ((*(uint *)(iVar2 + 0x34) & 4) != 0)) {
          iVar2 = fn_8301B7F0(lbl_832642F8,0);
          *(int *)(param_1 + 0x17c) = iVar2;
          if (iVar2 != 0) {
            uVar1 = fn_83000878(*(undefined4 *)(param_1 + 0x68));
            uVar1 = fn_830273B8(*piVar3,*(undefined4 *)(param_1 + 0x17c),uVar1);
            if ((int)uVar1 != 1) {
              fn_8301B6D8(lbl_832642F8,*(undefined4 *)(param_1 + 0x17c));
              iVar4 = 0;
              *(undefined4 *)(param_1 + 0x17c) = 0;
            }
            *(int *)(param_1 + 0x180) = iVar4;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x17c) != 0) {
      iVar2 = fn_8301B8C0(lbl_832642F8,*(int *)(param_1 + 0x17c),param_1);
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      else {
        fn_83029C68(*(undefined4 *)(param_1 + 0x17c),
                        *(undefined4 *)(*(int *)(param_1 + 0x68) + 0xc));
        fn_83029C70(*(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x50));
      }
    }
    fn_83008550(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x138,param_1 + 0x13c,param_1);
    return uVar1;
  }
  return uVar1;
}

