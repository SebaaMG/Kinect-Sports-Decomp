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
extern unsigned int *auStack_40;
extern int fn_82CE3440();
extern int fn_82CE35B0();
extern int fn_82CE3628();
extern int fn_82CE36A8();
extern int fn_82CE3730();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack_3e;


undefined8 fn_82CE3B38(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uStack00000020;
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  int aiStack_3c [3];
  undefined1 auStack_30 [24];
  
  puVar3 = (uint *)(param_2 * 0x10 + param_1);
  uVar2 = 0;
  aiStack_3c[0] = 1 << (*puVar3 & 3);
  uStack00000020 = param_3;
  fn_82CE3440(auStack_30,puVar3[1],aiStack_3c[0],aiStack_3c[0],param_4);
  uVar1 = *puVar3 & 3;
  if ((*puVar3 & 3) == 0) {
    auStack_40[0] = (undefined1)uStack00000020;
    uVar2 = fn_82CE35B0(auStack_30,auStack_40,1);
  }
  else if (uVar1 == 1) {
    uStack_3e = (undefined2)uStack00000020;
    uVar2 = fn_82CE3628(auStack_30,&uStack_3e,1);
  }
  else if (uVar1 < 3) {
    aiStack_3c[0] = (int)uStack00000020;
    uVar2 = fn_82CE36A8(auStack_30,aiStack_3c,1);
  }
  else if (uVar1 == 3) {
    uVar2 = fn_82CE3730(auStack_30,&stack0x00000020,1);
  }
  return uVar2;
}

