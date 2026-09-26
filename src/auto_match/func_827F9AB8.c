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
extern int fn_82F691F0();


void fn_827F9AB8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int aiStack_30 [12];
  
  if ((*(int *)(param_1 + 0x8c) != 0) && (*(short *)(param_1 + 0x88) != *(short *)(param_1 + 0x2c)))
  {
    *(short *)(param_1 + 0x88) = *(short *)(param_1 + 0x2c);
    uVar1 = fn_827F7210();
    uVar1 = uVar1 & 0xffff;
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x8c),1,uVar1);
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        fn_827F98C8(param_1,uVar2,aiStack_30);
        *(bool *)(uVar2 + *(int *)(param_1 + 0x8c)) =
             (ushort)*(byte *)(aiStack_30[0] + 0x32) <= *(ushort *)(param_1 + 0x2c);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return;
}

