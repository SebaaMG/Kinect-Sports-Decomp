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
extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_8234D690();
extern int fn_82560010();


undefined8 fn_8234C398(int param_1,int param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined1 *puVar3;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)fn_8234D690(auStack_30,0xffffffff821b1ce8);
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar1 = fn_82560010(**(undefined4 **)(param_1 + 0x114),puVar2);
    puVar3 = auStack_30;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    puVar2 = (undefined4 *)fn_8234D690(auStack_50,0xffffffff821b1cf4);
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar1 = fn_82560010(**(undefined4 **)(param_1 + 0x114),puVar2);
    puVar3 = auStack_50;
  }
  fn_82230300(puVar3,1,0);
  return uVar1;
}

