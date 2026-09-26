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
extern unsigned int *auStack_50;
extern int fn_82A6D200();
extern int fn_82A75410();
extern int fn_82C30370();


void fn_82C3B5D0(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint auStack_50 [20];
  
  while( true ) {
    do {
      uVar1 = *(uint *)(param_5 + 4);
    } while (5 < uVar1);
    if (uVar1 == 1) break;
    if (uVar1 == 2) {
      iVar2 = fn_82C30370(param_3,0x10,param_1);
      goto joined_r0x82c3b6dc;
    }
    if (uVar1 == 3) {
      iVar2 = fn_82C30370(param_3,0x18,param_1);
      goto joined_r0x82c3b6dc;
    }
    if (uVar1 == 4) {
      iVar2 = fn_82C30370(param_3,0x18,param_5 + 0x34);
      if (iVar2 < 0) {
        return;
      }
      *(undefined4 *)(param_5 + 4) = 5;
LAB_82c3b73c:
      iVar2 = fn_82C30370(param_3,7,param_1);
      if (iVar2 < 0) {
        return;
      }
      *param_1 = *(int *)(param_5 + 0x34) << 7 | *param_1;
      goto LAB_82c3b768;
    }
    if (uVar1 != 0) goto LAB_82c3b73c;
    iVar2 = fn_82A75410(param_3,3,auStack_50);
    if (iVar2 < 0) {
      return;
    }
    auStack_50[0] = auStack_50[0] >> 0x1d;
    if ((auStack_50[0] & 4) == 0) {
      iVar2 = fn_82A6D200(param_3,1);
      if (iVar2 < 0) {
        return;
      }
      *(undefined4 *)(param_5 + 4) = 1;
    }
    else if ((auStack_50[0] & 6) == 4) {
      iVar2 = fn_82A6D200(param_3,2);
      if (iVar2 < 0) {
        return;
      }
      *(undefined4 *)(param_5 + 4) = 2;
    }
    else if (auStack_50[0] == 6) {
      iVar2 = fn_82A6D200(param_3,3);
      if (iVar2 < 0) {
        return;
      }
      *(undefined4 *)(param_5 + 4) = 3;
    }
    else {
      iVar2 = fn_82A6D200(param_3,3);
      if (iVar2 < 0) {
        return;
      }
      *(undefined4 *)(param_5 + 4) = 4;
    }
  }
  iVar2 = fn_82C30370(param_3,8,param_1);
joined_r0x82c3b6dc:
  if (iVar2 < 0) {
    return;
  }
LAB_82c3b768:
  *param_1 = *param_1 + param_2;
  *(undefined4 *)(param_5 + 4) = 0;
  return;
}

