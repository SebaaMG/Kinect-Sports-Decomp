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
extern int fn_826933E8();
extern int fn_826944C8();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_82720D48();
extern float lbl_82005718;


void fn_82720DD8(int param_1,int param_2,ulonglong param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int aiStack_60 [2];
  longlong lStack_58;
  longlong lStack_50;
  
  uVar5 = 0;
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) == '\x01') {
    uVar2 = fn_826933E8();
    iVar3 = fn_826A7398(param_2);
    if ((param_3 & 0xffffffff) < 4) {
      iVar3 = (int)param_3 * 0x24 + iVar3 + 0x944;
    }
    else {
      iVar3 = 0;
    }
    iVar1 = (int)(*(float *)(iVar3 + 0x14) * lbl_82005718);
    lStack_58 = (longlong)iVar1;
    iVar3 = (int)(*(float *)(iVar3 + 0x18) * lbl_82005718);
    lStack_50 = (longlong)iVar3;
    if ((((uVar2 / 1000 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x10) + 300)) &&
        (*(int *)(param_1 + 8) == iVar1)) && (*(int *)(param_1 + 0xc) == iVar3)) {
      uVar5 = 1;
    }
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0xc) = iVar3;
    *(int *)(param_1 + 0x10) = (int)(uVar2 / 1000);
  }
  if (param_5 == 0) {
    fn_82720D48(param_1 + -0x34,param_2,param_3,100,0,param_4,0,uVar5);
  }
  else {
    iVar3 = *(int *)(param_5 + 0x80);
    if (iVar3 == 0) {
      iVar3 = fn_8269F500(param_5);
    }
    aiStack_60[0] = *(int *)(iVar3 + 0xc);
    *(int *)(aiStack_60[0] + 8) = *(int *)(aiStack_60[0] + 8) + 1;
    fn_82720D48(param_1 + -0x34,param_2,param_3,100,aiStack_60,param_4,0,uVar5);
    lVar4 = (ulonglong)*(uint *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
  }
  return;
}

