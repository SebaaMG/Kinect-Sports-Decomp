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
extern int fn_82FA4F38();
extern int fn_82FA5060();
extern int fn_82FA5538();
extern int fn_830562D0();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC978;


undefined8 fn_83050938(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if (((param_2[4] == 0) || ((param_2[1] != 0 && ((float)param_2[9] < lbl_821AAD20)))) ||
     (((param_2[5] & 2) != 0 && ((param_2[0xb] == 0 || (0x400 < (uint)param_2[0xb])))))) {
    uVar1 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = param_2[4];
    *(undefined4 *)(param_1 + 0x88) = param_2[9];
    *(undefined4 *)(param_1 + 4) = param_2[10];
    *(undefined4 *)(param_1 + 8) = param_2[0xb];
    *(undefined4 *)(param_1 + 0x90) = param_3;
    if (param_2[1] != 0) {
      uVar2 = fn_82FA5538(*param_2,param_2[1],param_2[4],param_2[3] | 8,param_2[2]);
      *(undefined4 *)(param_1 + 0x8c) = uVar2;
    }
    if (*(int *)(param_1 + 0x8c) == -1) {
      if (param_2[1] == 0) {
        uVar1 = fn_830562D0(param_1,param_2 + 6);
        return uVar1;
      }
    }
    else {
      fn_82FA4F38(*(int *)(param_1 + 0x8c),0);
      uVar4 = (ulonglong)(uint)param_2[4];
      trapWord(6,uVar4,0);
      uVar4 = ((uVar4 + (uint)param_2[1]) - 1 & 0xffffffff) / uVar4;
      lVar6 = (uVar4 + (uVar4 & 0x7fffffff) * 2 & 0x1fffffff) * 8;
      uVar4 = fn_82FA5060(lbl_831BC978,lVar6);
      *(int *)(param_1 + 0x7c) = (int)uVar4;
      if ((uVar4 & 0xffffffff) != 0) {
        uVar3 = lVar6 + uVar4;
        do {
          iVar5 = (int)uVar4;
          if (*(int *)(param_1 + 0x78) == 0) {
            *(int *)(param_1 + 0x78) = iVar5;
            *(undefined4 *)(iVar5 + 0x10) = 0;
          }
          else {
            *(int *)(iVar5 + 0x10) = *(int *)(param_1 + 0x78);
            *(int *)(param_1 + 0x78) = iVar5;
          }
          uVar4 = uVar4 + 0x18;
        } while ((uVar4 & 0xffffffff) < (uVar3 & 0xffffffff));
        uVar1 = fn_830562D0(param_1,param_2 + 6);
        return uVar1;
      }
    }
    uVar1 = 2;
  }
  return uVar1;
}

