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
extern unsigned int *auStack_40;
extern int fn_823AB470();
extern int fn_82512308();
extern int fn_82519EF0();
extern int fn_8251A108();
extern int fn_82521120();
extern int fn_82593A50();
extern int fn_828BB4B8();
extern int fn_828EB518();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;


void fn_824C1930(int *param_1)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [64];
  
  iVar4 = lbl_83265988;
  uVar5 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((iVar4 == 0) || ((param_1[3] == 2 && (iVar3 = fn_823AB470(iVar4), iVar3 != 2)))) {
    if ((lbl_832659D4 == '\0') && ((lbl_83265A58 != 1 && (lbl_83265A5C == 0)))) {
      if (param_1[4] == 0) {
        param_1[6] = 1;
      }
      else {
        if (iVar4 == 0) {
          do {
            iVar4 = lbl_83265988;
            if ((uVar5 & 0xffffffff) != 0xff) {
              iVar4 = fn_828EB518(uVar5);
            }
            if (iVar4 != 0) {
              fn_82593A50();
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 4);
        }
        else {
          fn_82512308();
        }
        param_1[4] = param_1[4] + -1;
      }
    }
  }
  else {
    param_1[4] = 0;
    if (param_1[5] == 0) {
      param_1[7] = 1;
    }
    else {
      uVar2 = fn_828BB4B8(auStack_40,param_1[2]);
      fn_82519EF0(*param_1,uVar2);
      *(undefined4 *)*param_1 = 0;
      *(undefined4 *)(*param_1 + 0x24) = 2;
      *(undefined4 *)(*param_1 + 0x28) = 0;
      *(undefined4 *)(*param_1 + 0x2c) = 8;
      *(undefined4 *)(*param_1 + 0x30) = 1;
      piVar1 = (int *)param_1[1];
      iVar4 = *param_1;
      iVar3 = param_1[3];
      fn_82521120(piVar1);
      *piVar1 = iVar3;
      *(undefined1 *)(piVar1 + 0x15) = 1;
      *(undefined1 *)(piVar1 + 1) = 1;
      *(undefined1 *)((int)piVar1 + 0x4d) = 0;
      piVar1[0x14] = 0;
      if (iVar4 == 0) {
        *(undefined1 *)(piVar1 + 0x13) = 0;
      }
      else {
        *(undefined1 *)(piVar1 + 0x13) = 1;
        fn_8251A108(piVar1 + 3,iVar4);
      }
      param_1[5] = param_1[5] + -1;
    }
  }
  return;
}

