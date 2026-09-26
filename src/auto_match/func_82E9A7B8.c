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
extern int fn_82E9A160();
extern int fn_82F68CC0();


undefined8
fn_82E9A7B8(undefined8 param_1,undefined1 *param_2,uint *param_3,uint param_4,undefined8 param_5,
             int param_6,int param_7)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_50 [20];
  
  uVar3 = param_6 + 4;
  if (param_4 < uVar3) {
code_r0x82e9a7e4:
    uVar1 = 0xffffffffffffff9c;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 1;
    param_2[3] = 0xf;
    fn_82F68CC0(param_2 + 4,param_5,param_6);
    *param_3 = uVar3;
    if (param_7 != 0) {
      aiStack_50[0] = 0;
      iVar2 = fn_82E9A160(param_1,param_2 + uVar3,param_4 - uVar3,0x1f,aiStack_50);
      if (iVar2 != 0) goto code_r0x82e9a7e4;
      *param_3 = *param_3 + aiStack_50[0];
    }
    uVar1 = 0;
  }
  return uVar1;
}

