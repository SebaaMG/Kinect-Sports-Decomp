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
extern unsigned int *auStack_50;
extern int fn_8265C940();
extern int fn_828F59D0();
extern int fn_828F6C70();
extern int fn_82930318();
extern int fn_82930940();
extern unsigned int uStack_48;


undefined8 fn_828F6DE8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar3;
  ulonglong uVar1;
  int iVar4;
  undefined8 uVar2;
  undefined4 auStack_50 [2];
  undefined4 uStack_48;
  
  puVar3 = (undefined4 *)fn_8265C940(0x14,0x24810000);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    auStack_50[0] = 2;
    uStack_48 = param_3;
    uVar1 = fn_82930318(0x30);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82930940(uVar1,auStack_50);
    }
    puVar3[2] = iVar4;
    if (iVar4 != 0) {
      uVar2 = fn_828F6C70(param_1,puVar3);
      return uVar2;
    }
    fn_828F59D0(puVar3,1);
  }
  return 0xffffffff8007000e;
}

