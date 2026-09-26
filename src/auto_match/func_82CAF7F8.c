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


short * fn_82CAF7F8(int param_1,int param_2,int param_3,int param_4,int param_5,
                     undefined4 *param_6)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  psVar2 = *(short **)(param_3 * 4 + param_2);
  psVar3 = *(short **)((param_4 + 2) * 4 + param_2);
  sVar1 = **(short **)((param_5 + 4) * 4 + param_2);
  uVar7 = (int)sVar1 - (int)*psVar2;
  uVar6 = (int)sVar1 - (int)*psVar3;
  uVar4 = (int)uVar7 >> 0x1f;
  uVar5 = (int)uVar6 >> 0x1f;
  if ((int)((uVar6 ^ uVar5) - uVar5) < (int)(((uVar7 ^ uVar4) - uVar4) + *(int *)(param_1 + 0x794)))
  {
    *param_6 = 0;
    return psVar2;
  }
  *param_6 = 1;
  return psVar3;
}

