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
extern int fn_82930318();
extern int fn_829317C0();
extern int fn_829334D8();
extern int fn_82980C18();
extern int fn_82986DF0();


undefined8 fn_82986E98(undefined8 param_1,int param_2)

{
  int iVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar4;
  undefined4 auStack_20 [2];
  
  if (*(int *)(param_2 + 4) == 0xe) {
    iVar3 = *(int *)(param_2 + 0x10);
    auStack_20[0] = 0;
    if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 9)) || (*(int *)(iVar3 + 0x10) != 0)) {
      uVar4 = 0xffffffff8204e3e8;
    }
    else {
      iVar3 = fn_82986DF0(param_1,param_2,auStack_20);
      if (-1 < iVar3) {
        uVar1 = fn_82930318(0x40);
        if ((uVar1 & 0xffffffff) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = fn_829334D8(uVar1,2,auStack_20[0],param_2 + 0x30);
        }
        if ((uVar1 & 0xffffffff) == 0) {
          return 0;
        }
        uVar2 = fn_82930318(0x14);
        if ((uVar2 & 0xffffffff) == 0) {
          return 0;
        }
        uVar4 = fn_829317C0(uVar2,uVar1);
        return uVar4;
      }
      uVar4 = 0xffffffff8204e3cc;
    }
    fn_82980C18(param_1,param_2 + 0x30,0xbcc,uVar4);
  }
  return 0;
}

