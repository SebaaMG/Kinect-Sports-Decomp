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
extern unsigned int *auStack_20;
extern int fn_82631400();
extern int fn_82636C98();
extern unsigned int uStack_18;


undefined4 fn_82903E30(int *param_1)

{
  uint *puVar2;
  ulonglong uVar1;
  uint uVar3;
  undefined1 auStack_20 [8];
  uint uStack_18;
  
  puVar2 = (uint *)(**(code **)(*param_1 + 0xc))();
  if ((*puVar2 & 1) == 0) {
    fn_82631400(puVar2,auStack_20);
    uVar1 = 0;
    uVar3 = 0;
    if ((puVar2[6] != 0) && (puVar2 = (uint *)(puVar2[6] + (int)puVar2), puVar2 != (uint *)0x0)) {
      uVar1 = (ulonglong)*puVar2;
      uVar3 = puVar2[1];
    }
    fn_82636C98(uVar1 + uStack_18,uVar3,0,0,0,0,4,0xffffffff82901ee0);
  }
  return 0;
}

