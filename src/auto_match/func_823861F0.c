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
extern int fn_823838E0();
extern int fn_82383FB0();
extern int fn_8265C9E0();


void fn_823861F0(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar4 = 5;
    }
    else if (param_3 == 2) {
      uVar4 = 4;
    }
    else {
      if (param_3 != 3) {
        uVar1 = fn_8265C9E0(0xf0);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_823838E0(uVar1,1,param_7,param_8);
        }
        *(undefined4 *)(param_1 + 0x1fa0) = uVar2;
        uVar1 = fn_8265C9E0(0x290);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82383FB0(uVar1,0xffffffff831cb064,param_4,param_5,param_6,1,param_7,param_8
                                 );
        }
        *(undefined4 *)(param_1 + 0x1fa4) = uVar2;
        uVar1 = fn_8265C9E0(0x290);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82383FB0(uVar1,0xffffffff831cb014,param_4,param_5,param_6,0,param_7,param_8
                                 );
        }
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x1fa8) = uVar2;
        goto LAB_82386334;
      }
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 0;
  }
  uVar1 = fn_8265C9E0(0xf0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_823838E0(uVar1,uVar4,param_7,param_8);
  }
  uVar3 = 1;
  *(undefined4 *)(param_1 + 0x1fa0) = uVar2;
LAB_82386334:
  *(undefined4 *)(param_1 + 0x1fc8) = uVar3;
  return;
}

