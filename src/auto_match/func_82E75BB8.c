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
extern unsigned int *auStack_58;
extern int fn_82E50BE8();
extern int fn_82E73540();
extern int fn_82E74F58();
extern int fn_82E758E0();
extern unsigned int uStack_60;


longlong fn_82E75BB8(int param_1,ulonglong param_2,undefined8 param_3,int *param_4,
                      undefined4 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uStack_60;
  undefined4 auStack_58 [2];
  undefined8 auStack_50 [10];
  
  if ((((param_2 & 0xffffffff) == 0) || (param_4 == (int *)0x0)) || (param_5 == (undefined4 *)0x0))
  {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    *param_5 = 0;
    uStack_60 = 0;
    lVar2 = fn_82E74F58();
    if (-1 < lVar2) {
      auStack_50[0] = 0;
      auStack_58[0] = 0;
      lVar5 = *(longlong *)(param_1 + 8);
      lVar6 = (longlong)uStack_60 / 10000;
      uStack_60 = uStack_60 & 0xffffffff;
      lVar2 = fn_82E758E0(param_1,param_2,param_3,auStack_50,&uStack_60,auStack_58);
      if (-1 < lVar2) {
        uVar3 = fn_82E50BE8(0x40,0,0,0,0);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_82E73540(uVar3,param_2,lVar6 + lVar5,auStack_50[0],
                                    *(undefined2 *)(param_1 + 0x14),(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0xff,
                                    auStack_58[0]);
        }
        *param_4 = iVar4;
        if (iVar4 != 0) {
          *param_5 = 1;
          return lVar2;
        }
        lVar2 = -0x7ff8fff2;
      }
    }
    puVar1 = (undefined4 *)*param_4;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_4 = 0;
  }
  return lVar2;
}

