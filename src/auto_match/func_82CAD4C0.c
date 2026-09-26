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
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82CAD2F8();


undefined8 fn_82CAD4C0(int param_1,int *param_2,int param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(*param_4 >> 6);
  uVar4 = 0;
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  puVar2 = param_4;
  if (*param_4 >> 6 != 0) {
    do {
      uVar1 = puVar2[1] & 0x3f;
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar6 != 0);
  }
  uVar1 = param_5 & 0xff;
  if (uVar1 < uVar4) {
    uVar4 = param_5;
  }
  if (0x7f < uVar1) {
    uVar4 = uVar1 + 0x80 & 0xff;
  }
  param_2[1] = param_3;
  *(char *)(param_2 + 2) = (char)uVar4;
  if (*param_2 != 0) {
    fn_82C563B0(lVar5);
    *param_2 = 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    uVar6 = fn_82C562F0(lVar5,(((ulonglong)(*param_4 >> 5) & 0x7fffffe) +
                                     (ulonglong)(uint)(1 << (uVar4 & 0x3f)) & 0x7fffffff) << 1,
                              0xffffffff82196582);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) =
         ((*param_4 >> 5 & 0x7fffffe) + (1 << (uVar4 & 0x3f))) * 2 + *(uint *)(param_1 + 4);
  }
  if ((uVar6 & 0xffffffff) == 0) {
    uVar3 = 5;
  }
  else {
    fn_82CAD2F8(uVar6,param_4,0,uVar4 & 0xff);
    *param_2 = (int)uVar6;
    uVar3 = 0;
  }
  return uVar3;
}

