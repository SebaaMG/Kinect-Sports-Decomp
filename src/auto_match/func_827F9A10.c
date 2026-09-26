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
extern int fn_827F7210();
extern int fn_827F98C8();


longlong fn_827F9A10(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int aiStack_30 [12];
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -1;
  }
  else {
    uVar2 = fn_827F7210(param_1);
    uVar4 = 0;
    uVar3 = 0;
    if ((uVar2 & 0xffff) != 0) {
      do {
        fn_827F98C8(param_1,uVar4,aiStack_30);
        if (uVar3 < *(byte *)(aiStack_30[0] + 0x32)) {
          uVar3 = (ulonglong)*(byte *)(aiStack_30[0] + 0x32);
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (uVar2 & 0xffff));
    }
    lVar1 = uVar3 + 1;
  }
  return lVar1;
}

