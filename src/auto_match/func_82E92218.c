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


undefined4 fn_82E92218(int *param_1,ulonglong param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)(uint)param_1[1];
  uVar4 = (ulonglong)(uint)param_1[7];
  if (uVar2 < (uint)param_1[7]) {
    uVar4 = uVar2;
  }
  if (uVar4 <= (param_2 & 0xffffffff)) {
    return 0;
  }
  uVar4 = (ulonglong)(uint)param_1[5];
  if ((ulonglong)(uint)param_1[5] == 0) {
    uVar4 = uVar2;
  }
  if ((uVar4 - 1 & 0xffffffff) < (param_2 & 0xffffffff)) {
    lVar3 = uVar2 - param_2;
  }
  else {
    lVar3 = -param_2;
  }
  uVar4 = lVar3 + (uVar4 - 1);
  if (param_3 != (undefined4 *)0x0) {
    *(undefined2 *)param_3 = 0;
    *(undefined1 *)((int)param_3 + 2) = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar1 = param_1[1];
      trapWord(6,(ulonglong)uVar1,0);
      uVar2 = (uVar4 + 1) -
              (longlong)(int)((uVar4 + 1 & 0xffffffff) / (ulonglong)uVar1) * (longlong)(int)uVar1;
      *param_3 = *(undefined4 *)
                  ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 8);
    }
    if (1 < (param_2 & 0xffffffff)) {
      uVar1 = param_1[1];
      trapWord(6,(ulonglong)uVar1,0);
      uVar2 = (uVar4 + 2) -
              (longlong)(int)((uVar4 + 2 & 0xffffffff) / (ulonglong)uVar1) * (longlong)(int)uVar1;
      param_3[1] = *(undefined4 *)
                    ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 0x10);
    }
    if (2 < (param_2 & 0xffffffff)) {
      uVar1 = param_1[1];
      trapWord(6,(ulonglong)uVar1,0);
      uVar2 = (uVar4 + 3) -
              (longlong)(int)((uVar4 + 3 & 0xffffffff) / (ulonglong)uVar1) * (longlong)(int)uVar1;
      param_3[2] = *(undefined4 *)
                    ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 0x18);
    }
  }
  return *(undefined4 *)
          ((int)((uVar4 + (uVar4 & 0x3fffffff) * 4 & 0xffffffff) << 3) + *param_1 + 0x20);
}

