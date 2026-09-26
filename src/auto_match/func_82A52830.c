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
extern int fn_82A6C8E8();
extern int fn_82A6CEF0();
extern int fn_82A6D200();
extern int fn_82C17460();
extern int fn_82C30368();


undefined8 fn_82A52830(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  longlong lVar6;
  
  iVar1 = param_2[4];
  lVar6 = *(longlong *)(param_2 + 6);
  iVar2 = param_2[8];
  iVar3 = param_2[2];
  if (((param_1[0xb0] != 0) && (param_1[0x38] == 0)) && (param_1[0xae] == 0)) {
    if (iVar3 == 0) goto LAB_82a52904;
    fn_82C17460();
    param_1[0xae] = 1;
  }
  if ((iVar3 != 0) && (iVar1 != 0)) {
    if (1 < *(short *)((int)param_1 + 0x9a)) {
      *(short *)((int)param_1 + 0x9a) = *(short *)((int)param_1 + 0x9a) + -1;
    }
    if (*(longlong *)(param_1 + 0x2a) != lVar6) {
      if (param_1[0x27] == 0) {
        *(longlong *)(param_1 + 0x2a) = lVar6;
        param_1[0x27] = 1;
        *(undefined2 *)((int)param_1 + 0x9a) = 1;
      }
      else {
        *(longlong *)(param_1 + 0x2c) = lVar6;
        sVar5 = *(short *)((int)param_1 + 0x9a) + 1;
        *(short *)((int)param_1 + 0x9a) = sVar5;
        if (sVar5 != 2) {
          param_1[0x27] = 0;
          *(undefined2 *)((int)param_1 + 0x9a) = 0;
        }
      }
    }
  }
LAB_82a52904:
  if ((param_1[0xb0] != 0) && (iVar3 != 0)) {
    fn_82A6C8E8(param_1 + 0x38);
  }
  if (param_2[9] == 0) {
    uVar4 = fn_82C30368(param_1 + 0x38,*param_2,param_2[1],param_2[2],param_2[3],param_1[0xb0],
                            *(undefined4 *)(*param_1 + 0x3c));
  }
  else {
    uVar4 = fn_82A6CEF0();
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 == 6) {
      *(undefined4 *)(*param_1 + 0x48) = 6;
      param_1[0xae] = 1;
    }
    if (param_1[0xb0] != 0) {
      if (iVar3 == 0) {
        if (iVar2 == 0) {
          return uVar4;
        }
      }
      else {
        if (iVar2 == 0) {
          return uVar4;
        }
        if (iVar2 < 8) {
          uVar4 = fn_82A6D200(param_1 + 0x38,iVar2);
          return uVar4;
        }
      }
      uVar4 = 0xffffffff80070057;
    }
  }
  return uVar4;
}

