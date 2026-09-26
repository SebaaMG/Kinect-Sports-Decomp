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
extern int fn_825010E8();
extern int fn_8265C9E0();
extern int fn_828EB518();
extern int fn_82A81B88();
extern int fn_82F50D88();
extern int fn_82F51A50();
extern int fn_82F51EF0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265988;


undefined8 fn_82500A58(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar3;
  ulonglong uVar2;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0xffc) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined8 *)(param_1 + 0xf58) = 0;
  *(undefined8 *)(param_1 + 0xf60) = 0;
  *(undefined8 *)(param_1 + 0xf68) = 0;
  *(undefined4 *)(param_1 + 0xf70) = 0;
  if (*(int *)(param_2 + 0xd4) != 0) goto LAB_82500b4c;
  iVar3 = *(int *)(param_2 + 0x5bc);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff831c2a10;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        if (*(int *)(param_2 + 0x5dc) < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = lbl_83265988;
          if (*(int *)(param_2 + 0x5dc) != 0xff) {
            iVar3 = fn_828EB518();
          }
        }
        if (iVar3 != 0) {
          uVar1 = *(undefined4 *)(param_2 + 0x5dc);
          *(undefined1 *)(param_1 + 0xb69) = 1;
          *(undefined4 *)(param_1 + 0xb6c) = uVar1;
          goto LAB_82500b4c;
        }
      }
      else if (iVar3 != 4) {
        uVar4 = 0xffffffff831c2240;
        goto LAB_82500b44;
      }
      fn_82A81B88(3,1,param_1 + 0xb70,param_1 + 0xf58);
      *(undefined1 *)(param_1 + 0xb6a) = 1;
      *(undefined1 *)(param_1 + 0xb69) = 1;
      goto LAB_82500b4c;
    }
    uVar4 = 0xffffffff831c2628;
  }
LAB_82500b44:
  fn_825010E8(param_1,uVar4);
LAB_82500b4c:
  *(undefined4 *)(param_1 + 0xff4) = *(undefined4 *)(param_2 + 0x5bc);
  *(char *)(param_1 + 0xff8) = '\x01' - (*(int *)(param_2 + 0x5d4) == 0);
  *(undefined4 *)(param_1 + 0xfec) = *(undefined4 *)(param_2 + 0x5c0);
  uVar2 = fn_8265C9E0(8);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82F51A50(uVar2,0);
  }
  *(int *)(param_1 + 0xb60) = (int)uVar4;
  fn_82F51EF0(uVar4,*(int *)(param_2 + 0x5c4) != 0);
  fn_82F50D88((double)lbl_821CA460,(double)lbl_821CA460,*(undefined4 *)(param_1 + 0xb60));
  *(undefined1 *)(param_1 + 0x1000) = 1;
  return 1;
}

