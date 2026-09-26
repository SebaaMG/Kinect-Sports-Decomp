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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE7E00();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_82D04B90(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  do {
    uVar1 = param_1[2];
    uVar2 = uVar1 & 0x3fffffff;
    uVar3 = thunk_FUN_82f6ede8(*param_1,uVar2,param_2,&stack0x00000020);
    if ((int)uVar3 < 0) {
      uVar3 = (uVar1 & 0x3fffffff) << 1;
      if (uVar3 < 0x100) {
        uVar3 = 0xff;
      }
    }
    else if ((int)uVar3 < (int)uVar2) {
      fn_82CE7E00(param_1,uVar3);
      return;
    }
    iVar6 = uVar3 + 1;
    iVar4 = fn_82CE5410();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar6) {
      iVar5 = (param_1[2] & 0x3fffffffU) << 1;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      fn_82CE6310(*(undefined4 *)(iVar4 + 0xc),param_1,iVar5,1);
    }
    param_1[1] = iVar6;
    *(undefined1 *)(*param_1 + uVar3) = 0;
  } while( true );
}

