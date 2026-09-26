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
extern int fn_82BF7630();
extern unsigned int iStack_40;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82BECC20(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iStack_40;
  int aiStack_3c [15];
  
  if (*(int *)(param_1 + 0x50) == 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    lVar1 = -(ulonglong)(*(int *)(param_1 + 0x1c) != 0);
    aiStack_3c[0] = (int)lVar1;
    if (lVar1 != 0) {
      do {
        aiStack_3c[1] = 0;
        iStack_40 = 0;
        fn_82BF7630(param_1 + 0xc,aiStack_3c,aiStack_3c + 1,&iStack_40);
        if ((iStack_40 != 0) && ((ulonglong)*(uint *)(iStack_40 + 0x18) != 0)) {
          lVar2 = (ulonglong)*(uint *)(iStack_40 + 0x18) + lVar2;
        }
      } while (aiStack_3c[0] != 0);
    }
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x44) + lVar2;
  }
  return lVar2;
}

