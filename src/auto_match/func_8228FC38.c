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
extern int fn_822848B8();
extern int fn_8228F078();
extern int fn_8228F3E8();
extern int fn_8228F478();
extern int fn_8228F4F0();
extern int fn_8228F738();
extern int fn_82512A48();
extern int fn_82512C30();
extern int fn_825552C8();
extern int fn_8266F628();
extern int fn_82672C20();
extern int fn_82BFEDE8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_83265988;
extern int (*lbl_83276794)();
extern int (*lbl_83276798)();


void fn_8228FC38(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int aiStack_40 [2];
  int aiStack_38 [14];
  
  if ((*(int *)(param_2 + 0x70) != 0) && (piVar2 = (int *)fn_82512C30(), *piVar2 != 0)) {
    fn_8228F478(param_2,0xffffffff821a9a24);
    *(undefined4 *)(param_2 + 0x70) = 0;
  }
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x94) + param_1);
      *(float *)(param_2 + 0x94) = fVar1;
      if (fVar1 < lbl_821916FC) {
        return;
      }
      fn_82672C20(*(undefined4 *)(param_2 + 0x14),0xffffffff821a9bf4,0,0);
      uVar4 = 4;
      goto LAB_8229005c;
    }
    if (iVar3 != 5) {
      if (iVar3 != 7) {
        if (iVar3 != 9) {
          return;
        }
        if (*(int *)(param_2 + 0x58) == 0) {
          iVar3 = 1;
        }
        else if (*(int *)(param_2 + 0x5c) == 0) {
          if (lbl_83276794 == (code *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (*lbl_83276794)();
          }
        }
        else {
          iVar3 = *(int *)(param_2 + 0x88);
        }
        if (iVar3 != 0) {
          fn_8228F3E8(param_2);
          fn_8228F738(param_2,0);
          if (*(int *)(param_2 + 100) != 0) {
            fn_82512A48();
            *(undefined4 *)(param_2 + 100) = 0;
          }
          if (*(int *)(param_2 + 0x68) != 0) {
            *(undefined4 *)(param_2 + 0x68) = 0;
            fn_8228F478(param_2,0xffffffff821a9a0c);
          }
          if (*(int *)(param_2 + 0x58) != 0) {
            *(undefined4 *)(param_2 + 4) = 10;
          }
        }
        if (*(int *)(param_2 + 0x58) != 0) {
          return;
        }
        fVar1 = (float)((double)*(float *)(param_2 + 0x94) + param_1);
        *(float *)(param_2 + 0x94) = fVar1;
        if (fVar1 < lbl_82193B00) {
          return;
        }
        *(undefined4 *)(param_2 + 4) = 10;
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x94) + param_1);
      *(float *)(param_2 + 0x94) = fVar1;
      if (fVar1 < lbl_82191FC4) {
        return;
      }
      fn_82672C20(*(undefined4 *)(param_2 + 0x14),0xffffffff821a9c30,0,0);
      uVar4 = 8;
      goto LAB_8229005c;
    }
    if (((*(int *)(param_2 + 0x74) != 0) || (*(int *)(param_2 + 0x78) != 0)) &&
       (*(int *)(param_2 + 0x50) == 0)) {
      if ((*(int *)(param_2 + 0x58) == 0) || (*(int *)(param_2 + 0x5c) != 0)) {
        iVar3 = 1;
      }
      else if (lbl_83276798 == (code *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*lbl_83276798)();
      }
      if (iVar3 != 0) {
        fn_8228F4F0(param_2);
      }
    }
    iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 0x18);
    if (iVar3 == 0) {
      aiStack_40[0] = 1;
    }
    else {
      fn_82BFEDE8(iVar3,aiStack_40);
    }
    if (*(int *)(param_2 + 0x80) == 0) {
      if (((*(int *)(param_2 + 0x7c) == 0) && (*(int *)(param_2 + 0x84) == 0)) &&
         ((uint)LZCOUNT(aiStack_40[0] + -7) >> 5 == 0)) {
        return;
      }
      iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 0x18);
      if (iVar3 == 0) {
        aiStack_38[0] = 1;
      }
      else {
        fn_82BFEDE8(iVar3,aiStack_38);
      }
      if (((*(int *)(param_2 + 0x6c) == 0) && (*(int *)(param_2 + 0x1c) != 0)) &&
         (aiStack_38[0] == 3)) {
        uVar4 = fn_825552C8();
        *(undefined4 *)(param_2 + 0x6c) = uVar4;
      }
      if (*(int *)(param_2 + 0x50) != 0) {
        fn_822848B8();
        *(undefined4 *)(param_2 + 0x50) = 0;
      }
LAB_8228ff8c:
      uVar4 = 9;
    }
    else {
      if (*(int *)(param_2 + 0x50) != 0) {
        fn_822848B8();
        *(undefined4 *)(param_2 + 0x50) = 0;
      }
      if (lbl_83265988 != 0) {
        iVar3 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
        if ((*(byte *)(iVar3 + 3) & 0x10) != 0) goto LAB_8228ff8c;
        *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 0x10;
      }
      fn_8228F078(param_2);
      fn_8228F3E8(param_2);
      fn_82672C20(*(undefined4 *)(param_2 + 0x14),0xffffffff821a9c10,0,0);
      uVar4 = 6;
    }
    goto LAB_8229005c;
  }
  if (*(int *)(param_2 + 0x58) == 0) {
    iVar3 = 1;
LAB_8229001c:
    if (iVar3 == 0) {
      return;
    }
  }
  else if (*(int *)(param_2 + 0x5c) == 0) {
    if (lbl_83276794 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*lbl_83276794)();
    }
    goto LAB_8229001c;
  }
  *(undefined4 *)(param_2 + 0x70) = 1;
  fn_8228F738(param_2,1);
  fn_8266F628(*(undefined4 *)(param_2 + 0x14),0);
  fn_82672C20(*(undefined4 *)(param_2 + 0x14),0xffffffff821a9bd4,0,0);
  uVar4 = 2;
LAB_8229005c:
  *(undefined4 *)(param_2 + 4) = uVar4;
  return;
}

