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
extern unsigned int *auStack_110;
extern unsigned int *auStack_50;
extern int fn_8294AC48();
extern unsigned int uStack_100;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


undefined8 fn_82997150(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 auStack_110 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_50 [64];
  
  auStack_110[0] = 0;
  uStack_100 = 0;
  uStack_fc = 1;
  uStack_f8 = 2;
  uStack_f4 = 3;
  if ((**(uint **)(param_1 + 0x104) & 0xfffff) == 3) {
    uVar2 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82050b90,auStack_50,
                              auStack_110,&uStack_f0,&uStack_100,3);
    if ((int)uVar2 == 0) {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x104) + 8);
      *puVar1 = uStack_f0;
      puVar1[1] = uStack_ec;
      puVar1[2] = uStack_e8;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

