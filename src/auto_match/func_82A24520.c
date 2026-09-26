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
extern unsigned int *auStack_140;
extern int fn_82A23B20();
extern int fn_82A35BD8();
extern unsigned int iStack_120;


undefined8 fn_82A24520(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined1 auStack_140 [32];
  int iStack_120;
  undefined1 auStack_110 [256];
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  *(uint *)(param_2 + 0x1c) = uVar1 & 0xffffffdf;
  if (((uVar1 & 0x80) == 0) &&
     (fn_82A23B20(param_2,1,auStack_110,0x100), (*(uint *)(param_2 + 0x1c) & 0x40) != 0)) {
    iVar3 = fn_82A35BD8(auStack_110,0,auStack_140);
    if (iVar3 == 0) {
      uVar2 = thunk_FUN_82a2b798();
      return uVar2;
    }
    if (iStack_120 != *(int *)(param_2 + 8)) {
      return 0x18;
    }
  }
  return 0;
}

