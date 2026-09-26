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
extern int fn_82CEB1F0();
extern int fn_82CEB8F0();
extern int fn_82CFD5B0();
extern int fn_82CFD5B8();
extern int fn_82CFD8C0();
extern unsigned int uStack_30;


undefined8 fn_82CEB498(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  uVar1 = fn_82CEB1F0(param_1,param_2,&uStack_30,aiStack_2c);
  if ((int)uVar1 == 0) {
    if (*(char *)(aiStack_2c[0] + 0xc) == '\x14') {
      uVar2 = fn_82CFD5B0(aiStack_2c[0]);
      param_3[5] = uVar2;
      *param_3 = 0x14;
      param_3[4] = uStack_30;
    }
    else if (*(char *)(aiStack_2c[0] + 0xc) == '\x18') {
      uVar2 = fn_82CFD5B8(aiStack_2c[0]);
      uVar3 = fn_82CFD8C0(aiStack_2c[0],uStack_30);
      param_3[4] = uVar3;
      param_3[5] = uVar2;
      *param_3 = 0x18;
    }
    else {
      uVar1 = fn_82CEB8F0(param_3,uStack_30);
    }
  }
  return uVar1;
}

