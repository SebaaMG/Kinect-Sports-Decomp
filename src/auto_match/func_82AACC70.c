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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A29A38();
extern int fn_82F68CC0();


undefined8 fn_82AACC70(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82A29A38();
  }
  if (param_1[1] == 0) {
    fn_82A29A38();
  }
  uVar1 = param_1[2];
  if (param_2 < uVar1) {
LAB_82aacd44:
    uVar3 = 1;
  }
  else {
    if (uVar1 == 0) {
      uVar4 = 0x1000;
    }
    else {
      uVar4 = (longlong)(int)param_1[1] * (longlong)(int)uVar1 + 0xfffU & 0xfffff000;
    }
    do {
      uVar5 = uVar4 - 0x20;
      if (((longlong)(int)param_1[1] * (longlong)(int)(param_2 + 1) & 0xffffffffU) <=
          (uVar5 & 0xffffffff)) {
        lVar2 = fn_8265C940(uVar5,0x24870000);
        if (lVar2 != 0) {
          if (param_1[2] != 0) {
            fn_82F68CC0(lVar2,*param_1,(longlong)(int)param_1[1] * (longlong)(int)param_1[2]);
            fn_8265C990(*param_1,0x24870000);
          }
          *param_1 = (int)lVar2;
          trapWord(6,(ulonglong)(uint)param_1[1],0);
          param_1[2] = (int)((uVar5 & 0xffffffff) / (ulonglong)(uint)param_1[1]);
          goto LAB_82aacd44;
        }
        break;
      }
      uVar5 = uVar4 & 0x7fffffff;
      uVar4 = uVar5 << 1;
    } while (uVar5 != 0);
    uVar3 = 0;
  }
  return uVar3;
}

