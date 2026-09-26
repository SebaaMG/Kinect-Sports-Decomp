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
extern unsigned int *auStack_30;


undefined8 fn_82E3B6F0(int param_1,int *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint auStack_30 [12];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x2cc) != 0) {
      lVar4 = 0;
      while( true ) {
        auStack_30[0] = 0;
        uVar1 = (**(code **)(*param_2 + 0xc))
                          (param_2,lVar4 + (ulonglong)*(uint *)(param_1 + 0x2c8),auStack_30);
        if ((int)uVar1 < 0) break;
        if (auStack_30[0] != 0) {
          do {
            uVar1 = (**(code **)(*param_2 + 0x18))
                              (param_2,lVar4 + (ulonglong)*(uint *)(param_1 + 0x2c8),0,0);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar2 = (ulonglong)auStack_30[0];
            auStack_30[0] = (uint)(uVar2 - 1);
          } while (uVar2 - 1 != 0);
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x10;
        if (*(uint *)(param_1 + 0x2cc) <= uVar3) {
          return uVar1;
        }
      }
    }
  }
  return uVar1;
}

