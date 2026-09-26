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
extern int fn_82EE6048();


undefined8 fn_82F48580(int *param_1,int param_2,uint *param_3)

{
  int iVar2;
  undefined8 uVar1;
  longlong lVar3;
  uint uVar4;
  int aiStack_40 [16];
  
  lVar3 = 0;
  aiStack_40[0] = 0;
  iVar2 = (**(code **)(*param_1 + 0x50))();
  if (iVar2 == 0) {
    uVar1 = 0xffffffff80004001;
  }
  else if (param_1[4] == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if (param_3 == (uint *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else if ((uint)param_1[0x12] < param_1[7] * param_1[9] + 8U) {
    uVar1 = 0xffffffffc00d3a9e;
  }
  else {
    uVar4 = 0;
    if (param_1[9] != 0) {
      do {
        uVar1 = fn_82EE6048(param_1 + 0xc,lVar3,aiStack_40,4);
        if ((int)uVar1 < 0) break;
        if (aiStack_40[0] == param_2) {
          *param_3 = uVar4;
          return uVar1;
        }
        uVar4 = uVar4 + 1;
        lVar3 = (ulonglong)(uint)param_1[7] + lVar3;
      } while (uVar4 < (uint)param_1[9]);
    }
    uVar1 = 0xffffffffc00d36bf;
  }
  return uVar1;
}

