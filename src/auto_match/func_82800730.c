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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82817C98();
extern int fn_828182C0();


bool fn_82800730(int param_1,ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int aiStack_30 [12];
  
  pcVar1 = strstr((char *)param_2,"BLENDSHAPE_");
  if (ZEXT48(pcVar1) == (param_2 & 0xffffffff)) {
    param_2 = param_2 + 0xb;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
  }
  else {
    pcVar1 = strstr((char *)param_2,"TEXANIM_");
    if (ZEXT48(pcVar1) == (param_2 & 0xffffffff)) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x28);
      param_2 = param_2 + 8;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
    }
  }
  fn_828182C0(uVar2,param_2,0,aiStack_30);
  if (aiStack_30[0] != 0) {
    fn_82817C98(aiStack_30[0],param_3);
  }
  return aiStack_30[0] != 0;
}

