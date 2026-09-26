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
extern int fn_82682298();
extern int fn_82F68B7C();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826F6450(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar2 = (uint *)fn_82F68B7C(param_1 + 0x18);
  uVar1 = *puVar2;
  uStack_2c = 0;
  uStack_30 = 0;
  fn_82682298(puVar2,&uStack_30);
  puVar2[7] = 0;
  uVar3 = puVar2[9];
  if (puVar2[9] <= uVar1) {
    uVar3 = uVar1;
  }
  puVar2[9] = uVar3;
  puVar2[10] = uVar1;
  return;
}

