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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82E74E58();
extern int fn_82E74F58();
extern int fn_82E75338();


longlong fn_82E758E0(int *param_1,int *param_2,undefined8 param_3,ulonglong param_4,
                      undefined4 *param_5,uint *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  uint auStack_50 [2];
  ulonglong auStack_48 [9];
  
  if ((((param_2 == (int *)0x0) || ((param_4 & 0xffffffff) == 0)) || (param_5 == (undefined4 *)0x0))
     || (param_6 == (uint *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    auStack_50[0] = 0;
    auStack_48[0] = 0;
    lVar1 = fn_82E74F58();
    if (-1 < lVar1) {
      lVar5 = *(longlong *)(param_1 + 2) * 10000 + auStack_48[0];
      lVar1 = (**(code **)(*param_2 + 0xb4))(param_2,auStack_50);
      if (-1 < lVar1) {
        lVar1 = fn_82E74E58(param_1,lVar5,auStack_50[0],param_4);
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        uVar4 = fn_82E75338(param_1,param_2);
        *param_5 = uVar4;
        if (-1 < (int)lVar1) {
          uVar3 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff82153458,auStack_48);
          if ((((uVar3 & 0xffffffff) >> 0x1f) - 1 & auStack_48[0] >> 0x20) != 0) {
            *param_6 = *param_6 | 1;
          }
          if (*(longlong *)(param_1 + 0x12) == 0) {
            *(ulonglong *)(param_1 + 0xc) =
                 (ulonglong)(lVar5 + *(longlong *)(param_1 + 2) * -10000) / 10000;
          }
          *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 1;
          *(ulonglong *)(param_1 + 0x14) = (ulonglong)auStack_50[0] + *(longlong *)(param_1 + 0x14);
          if ((ulonglong)(uint)param_1[0x16] < (ulonglong)auStack_50[0]) {
            param_1[0x16] = auStack_50[0];
          }
        }
      }
    }
  }
  return lVar1;
}

