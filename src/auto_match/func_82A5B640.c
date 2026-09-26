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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5C760();
extern int fn_82F68B74();


longlong fn_82A5B640(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  uVar3 = 0x10;
  uVar1 = fn_82F68B74();
  lVar5 = 0;
  if ((*(int *)(uVar1 + 0x14) == 0) && ((uVar4 & 0xffffffff) == 0)) {
    (**(code **)(**(int **)(uVar1 + 4) + 0x14))();
  }
  else {
    puVar2 = (uint *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
    if (puVar2 == (uint *)0x0) {
      lVar5 = -0x7ff8fff2;
    }
    else {
      puVar2[1] = (uint)uVar4;
      puVar2[3] = uVar1;
      puVar2[2] = 1;
      *puVar2 = (uint)(uVar4 != 0);
      puVar2[4] = uVar3;
      lVar5 = fn_82A5C760(*(undefined4 *)(uVar1 + 0x10),puVar2);
      if (lVar5 < 0) {
        fn_82A4F4E0(puVar2);
      }
    }
  }
  return lVar5;
}

