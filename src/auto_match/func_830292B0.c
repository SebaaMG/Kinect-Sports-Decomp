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
extern unsigned int lbl_8217C61C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int uStack00000040;


undefined8
fn_830292B0(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,ulonglong param_6,undefined8 param_7,undefined2 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulonglong uStack00000040;
  undefined2 in_stack_0000005e;
  
  for (puVar6 = *(uint **)(param_1 + 0x88);
      (puVar6 != *(uint **)(param_1 + 0x8c) && ((ulonglong)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 2) {
  }
  uVar1 = (uint)(*(uint **)(param_1 + 0x8c) != puVar6);
  if ((-(uint)(uVar1 != 0) & (uint)(puVar6 + 1)) == 0) {
    uStack00000040 = param_6;
    piVar4 = (int *)fn_83029968(param_1 + 0x88,param_2,param_3,-uVar1);
    if (piVar4 != (int *)0x0) {
      puVar5 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x30);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        fn_83008600();
        *puVar5 = &lbl_8217C61C;
      }
      *piVar4 = (int)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        fn_82FAF408(param_1 + 0x88,param_2);
      }
      else {
        fn_83008748(puVar5,param_3,param_4,param_5,uStack00000040 & 0xffffffff00000000,param_7
                         );
        *(undefined2 *)(*piVar4 + 0x28) = param_8;
        uVar2 = lbl_821AAD20;
        *(undefined2 *)(*piVar4 + 0x2a) = in_stack_0000005e;
        *(undefined4 *)(*piVar4 + 0x2c) = uVar2;
      }
      if (*piVar4 != 0) {
        return 1;
      }
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

