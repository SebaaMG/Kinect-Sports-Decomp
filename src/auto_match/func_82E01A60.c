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
extern unsigned int *auStack_c0;
extern unsigned int fStack_b0;
extern unsigned int iStack_70;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_80;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;


void fn_82E01A60(int *param_1,undefined8 param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_c0 [16];
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_80;
  int iStack_70;
  
  uVar1 = (ulonglong)*(byte *)(*(int *)(param_3 + 0x1c) + 0x20);
  if (uVar1 != 0) {
    uVar3 = 0;
    dVar4 = (double)lbl_82002AE0;
    do {
      fStack_b0 = (float)dVar4;
      uStack_ac = 0xffffffff;
      uStack_80 = 0;
      uStack_a0 = 0xffffffff;
      iStack_70 = 0;
      lVar2 = uVar3 * 0x60 + param_4;
      (**(code **)(*param_1 + 0x38))
                (param_1,uVar3 * 0xe0 + (ulonglong)*(uint *)(param_3 + 0x48),auStack_c0);
      if (iStack_70 == 0) {
        (**(code **)(*param_1 + 0x40))(param_1,param_3,1,lVar2);
      }
      else {
        (**(code **)(*param_1 + 0x3c))(param_1,param_3,uVar3,auStack_c0,lVar2);
      }
      (**(code **)(*param_1 + 0x2c))(param_1,param_3,uVar3,lVar2);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar1);
  }
  return;
}

