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
extern int fn_82A43318();
extern int fn_82A45958();
extern int fn_82A45CD8();
extern int fn_82A474B0();
extern int fn_82A47FC0();
extern int fn_82A48100();
extern unsigned int uStack_40;


void fn_82A48728(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uStack_40;
  
  if (*(undefined4 **)(param_1 + 0x20c) == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x20c);
  }
  if (puVar5 != (undefined4 *)0x0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1c0) != 0) {
      uVar3 = (ulonglong)uStack_40;
      do {
        fn_82A45CD8(*(undefined4 *)(param_1 + 0x1d8),uVar4,puVar5[2],puVar5[1]);
        uVar1 = puVar5[3];
        uVar2 = fn_82A474B0(puVar5[2],puVar5[1],uVar4,uVar1 >> 9);
        if ((uVar2 & 0xffffffff) != 0) {
          uStack_40 = uVar1 >> 7 & 3;
          uVar3 = uVar2;
        }
        fn_82A45958(*(undefined4 *)(param_1 + 0x1d8),uVar4,uVar3,uStack_40);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c0));
    }
    fn_82A47FC0(param_1);
    if ((puVar5[4] != 0) && (puVar5[7] == 0)) {
      fn_82A48100(param_1);
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
    fn_82A43318(param_1 + 0x8c,puVar5[8],*puVar5);
    *(undefined4 *)(param_1 + 0x1dc) = 1;
  }
  return;
}

