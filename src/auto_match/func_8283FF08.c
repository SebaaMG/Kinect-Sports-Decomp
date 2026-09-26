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
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_8283FF08(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iStack00000014;
  int iStack0000001c;
  int *piStack00000024;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  piStack00000024 = param_3;
  for (uStack_20 = 0; uStack_20 < *(uint *)(iStack00000014 + 0x20); uStack_20 = uStack_20 + 1) {
    piVar1 = (int *)(*(int *)(iStack00000014 + 0x24) + uStack_20 * 0xc);
    if (piStack00000024 != (int *)0x0) {
      for (uStack_18 = 0; uStack_18 < (int)(uint)*(ushort *)(*(int *)(*piVar1 + 4) + 0x12);
          uStack_18 = uStack_18 + 1) {
        (**(code **)(*piStack00000024 + 8))
                  (piStack00000024,
                   iStack0000001c + *(int *)(*(int *)(*(int *)(*piVar1 + 4) + 4) + uStack_18 * 0x34)
                  );
      }
    }
  }
  return;
}

