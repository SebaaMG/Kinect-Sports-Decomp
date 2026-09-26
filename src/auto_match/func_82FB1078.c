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
extern int fn_82FA5060();
extern int fn_82FAF408();
extern int fn_83008600();
extern int fn_83008748();
extern int fn_83029968();
extern unsigned int lbl_8216D2CC;
extern unsigned int lbl_831BC768;
extern unsigned int uStack00000040;


undefined8
fn_82FB1078(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,ulonglong param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uStack00000040;
  
  for (puVar5 = *(uint **)(param_1 + 0x88);
      (puVar5 != *(uint **)(param_1 + 0x8c) && ((ulonglong)*puVar5 != (param_2 & 0xffffffff)));
      puVar5 = puVar5 + 2) {
  }
  uVar1 = (uint)(*(uint **)(param_1 + 0x8c) != puVar5);
  if ((-(uint)(uVar1 != 0) & (uint)(puVar5 + 1)) == 0) {
    uStack00000040 = param_6;
    piVar3 = (int *)fn_83029968(param_1 + 0x88,param_2,param_3,-uVar1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x2c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        fn_83008600();
        puVar4[10] = 0;
        *puVar4 = &lbl_8216D2CC;
      }
      *piVar3 = (int)puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        fn_82FAF408(param_1 + 0x88,param_2);
      }
      else {
        fn_83008748(puVar4,param_3,param_4,param_5,uStack00000040 & 0xffffffff00000000,param_7
                         );
        *(undefined4 *)(*piVar3 + 0x28) = *(undefined4 *)(param_1 + 0xa4);
      }
      if (*piVar3 != 0) {
        return 1;
      }
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

