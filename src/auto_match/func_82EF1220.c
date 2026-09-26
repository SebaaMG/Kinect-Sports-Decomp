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
extern int fn_82EF10C8();


undefined8 fn_82EF1220(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  uint *apuStack_30 [12];
  
  iVar3 = fn_82EF10C8(param_1 + 4,apuStack_30);
  if (iVar3 < 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    uVar2 = 0;
    *apuStack_30[0] = *param_2;
    apuStack_30[0][1] = *param_3;
    uVar1 = (uint)param_1[1] >> 1;
    trapWord(6,(ulonglong)uVar1,0);
    iVar3 = (*param_2 - (*param_2 / uVar1) * uVar1) * 4;
    apuStack_30[0][2] = *(uint *)(iVar3 + *param_1);
    *(uint **)(iVar3 + *param_1) = apuStack_30[0];
    param_1[2] = param_1[2] + 1;
  }
  return uVar2;
}

