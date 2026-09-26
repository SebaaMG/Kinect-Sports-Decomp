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
extern int fn_82F68B78();


longlong fn_827FE648(int param_1)

{
  int iVar3;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  int aiStack_30 [12];
  
  iVar3 = fn_82F68B78(*(undefined4 *)(param_1 + 0x98));
  if (*(int *)(iVar3 + 8) == 0) {
    lVar1 = -1;
  }
  else {
    uVar2 = fn_827F7210(iVar3);
    uVar5 = 0;
    uVar4 = 0;
    if ((uVar2 & 0xffff) != 0) {
      do {
        fn_827F98C8(iVar3,uVar5,aiStack_30);
        if (uVar4 < *(byte *)(aiStack_30[0] + 0x32)) {
          uVar4 = (ulonglong)*(byte *)(aiStack_30[0] + 0x32);
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar2 & 0xffff));
    }
    lVar1 = uVar4 + 1;
  }
  return lVar1;
}

