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
extern unsigned int *auStack_40;
extern int fn_825B1180();
extern int fn_82850780();
extern int fn_82850870();
extern int fn_82850988();


void fn_8254A010(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 auStack_40 [16];
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    fn_825B1180(puVar1[3]);
    auStack_40[0] = 0;
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = fn_82850870(uVar2);
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        fn_82850988(uVar2,uVar5,auStack_40);
        fn_82850780(uVar2,uVar3,auStack_40[0],0);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar4 & 0xffffffff));
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}

