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
extern int fn_82F68CC0();
extern int fn_831427AC();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82655C68(int param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uStack_48;
  uint uStack_44;
  uint uVar6;
  
  uVar1 = param_4[1];
  uVar2 = *param_4;
  uStack_48 = param_4[2];
  uStack_44 = param_4[3];
  if ((((uVar2 == 0) && (uStack_48 == 0)) && (uVar1 == 0)) && (uStack_44 == 0)) {
    uStack_48 = param_2;
    uStack_44 = param_3;
  }
  uVar4 = param_4[4];
  if (uVar4 == 0) {
    uVar4 = *(uint *)(param_1 + 0x5500);
  }
  uVar6 = param_4[5];
  if (uVar6 == 0) {
    uVar5 = ((longlong)(int)uVar4 * (longlong)(int)(uStack_44 - uVar1) & 0xffffffffU) /
            ((ulonglong)uStack_48 - (ulonglong)uVar2 & 0xffffffff);
    uVar6 = (uint)uVar5;
    trapWord(6,(ulonglong)uStack_48 - (ulonglong)uVar2,0);
    if ((((*(uint *)(param_1 + 0x35e8) & 1) != 0) || (uVar3 = fn_831427AC(), (uVar3 & 1) != 0))
       || ((uStack_44 - uVar1 < uVar5 || (*(uint *)(param_1 + 0x5504) < uVar5)))) {
      uVar6 = *(uint *)(param_1 + 0x5504);
    }
  }
  fn_82F68CC0(param_5,param_4,0x38);
  param_5[4] = uVar4;
  param_5[5] = uVar6;
  *param_5 = uVar2;
  param_5[1] = uVar1;
  param_5[2] = uStack_48;
  param_5[3] = uStack_44;
  return;
}

