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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


ulonglong fn_82A6A498(int param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  
  uVar1 = 1 << (param_3 - 1U & 0x3f);
  fVar2 = *(float *)(param_4 * 4 + param_1) * (float)(longlong)(int)uVar1;
  if (lbl_821AAD20 <= fVar2) {
    uVar3 = (ulonglong)uVar1 - 1;
    if ((int)(fVar2 + lbl_82002C5C) <= (int)uVar3) {
      return (ulonglong)(uint)(int)(fVar2 + lbl_82002C5C);
    }
    return uVar3;
  }
  uVar3 = ~((ulonglong)uVar1 - 1);
  if ((int)uVar3 <= (int)(fVar2 - lbl_82002C5C)) {
    return (ulonglong)(uint)(int)(fVar2 - lbl_82002C5C);
  }
  return uVar3;
}

