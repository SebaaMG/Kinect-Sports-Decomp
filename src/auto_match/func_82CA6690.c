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
extern unsigned int uStack_10;
extern unsigned int uStack_f;


longlong fn_82CA6690(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 uStack_10;
  undefined1 uStack_f;
  
  if ((((*(int *)(param_1 + 0x1c0) != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (*(int *)(param_1 + 0x1c8) == 0)) {
    uStack_10 = (char)((ushort)*(undefined2 *)(param_4 + -2) >> 8);
    lVar2 = (longlong)uStack_10;
    uVar1 = *(undefined2 *)(param_4 + *(int *)(param_1 + 0x158) * -2);
    uStack_f = (char)*(undefined2 *)(param_4 + -2);
    lVar4 = (longlong)uStack_f;
    uStack_10 = (char)((ushort)uVar1 >> 8);
    uStack_f = (char)uVar1;
    uVar5 = (ulonglong)((int)(lVar4 - uStack_f) >> 0x1f);
    uVar3 = (ulonglong)((int)(lVar2 - uStack_10) >> 0x1f);
    uVar5 = (lVar4 - uStack_f ^ uVar5) - uVar5;
    uVar3 = (lVar2 - uStack_10 ^ uVar3) - uVar3;
    if ((int)uVar5 < (int)uVar3) {
      uVar5 = uVar3;
    }
    return (longlong)((int)uVar5 >> 0x1f) + (ulonglong)(7 < uVar5);
  }
  return 0;
}

