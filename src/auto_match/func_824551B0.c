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
extern int fn_82508078();
extern int fn_82536690();
extern int fn_8265CA20();
extern int fn_8288B760();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821BA6C0;
extern unsigned int lbl_821BA6E8;
extern unsigned int lbl_821BA6FC;
extern unsigned int lbl_821BA730;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_28;


void fn_824551B0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  longlong alStack_40 [2];
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar1 = param_2[4];
  if (iVar1 == 9) {
    return;
  }
  puVar5 = lbl_821BA730;
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      uVar6 = *param_1;
      puVar5 = lbl_821BA6E8;
      if (lbl_82191FC8 < (float)param_2[7]) {
        puVar5 = lbl_821BA730;
      }
      goto LAB_82455424;
    }
    puVar5 = lbl_821BA6FC;
    if (iVar1 != 5) {
      if (iVar1 != 8) {
        uVar6 = 0;
        iStack_30 = 0;
        iStack_2c = 0;
        uStack_28 = 0;
        if (((uint)param_2[3] < 3) || (param_2[3] == 6)) {
          uVar6 = 1;
        }
        alStack_40[0] = CONCAT44(((uint)LZCOUNT(uVar6) >> 5 ^ 1) + 0x10,((uint)(alStack_40[0])));
        fn_82536690(&iStack_30,alStack_40);
        if (param_2[6] == 3) {
          alStack_40[0] = CONCAT44(((uint)LZCOUNT(param_2[2]) >> 5 ^ 1) + 0x14,((uint)(alStack_40[0])));
          fn_82536690(&iStack_30,alStack_40);
        }
        uVar4 = param_2[5];
        if (uVar4 == 0) {
          uVar6 = 0x13;
        }
        else if ((uVar4 == 1) || (uVar4 < 3)) {
          uVar6 = 0x12;
        }
        else {
          if (uVar4 != 3) goto LAB_824552a8;
          uVar6 = 0x16;
        }
        alStack_40[0] = CONCAT44(uVar6,((uint)(alStack_40[0])));
        fn_82536690(&iStack_30,alStack_40);
LAB_824552a8:
        iVar3 = iStack_30;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar2 = param_2[1];
        iVar1 = (int)((float)(longlong)(iStack_2c - iStack_30 >> 2) *
                     ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
        alStack_40[0] = (longlong)iVar1;
        iVar1 = *(int *)(iVar1 * 4 + iStack_30);
        if (*(int *)(iVar2 + 0x24) != 0) {
          if (*(int *)(iVar2 + 0x168) == 0) {
            uVar4 = *(uint *)(iVar2 + 0x16c);
          }
          else {
            uVar4 = fn_8288B760();
            uVar4 = uVar4 & 0xff;
          }
          if (uVar4 != 0) {
            fn_82508078(*param_1,(&lbl_821BA6C0)[iVar1],0);
          }
        }
        if (iVar3 == 0) {
          return;
        }
        fn_8265CA20(iVar3);
        return;
      }
      iVar1 = *param_2;
      if (*(int *)(iVar1 + 0x24) == 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x168) == 0) {
        uVar4 = *(uint *)(iVar1 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      puVar5 = lbl_821BA6C0;
      if (uVar4 == 0) {
        return;
      }
    }
  }
  uVar6 = *param_1;
LAB_82455424:
  fn_82508078(uVar6,puVar5,0);
  return;
}

