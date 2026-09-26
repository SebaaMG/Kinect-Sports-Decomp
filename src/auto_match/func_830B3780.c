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
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0908();


undefined8 fn_830B3780(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 auStack_30 [12];
  
  uVar1 = fn_82CE08B8(2,1,6);
  *param_2 = (int)uVar1;
  if ((int)uVar1 != -1) {
    iVar2 = fn_82CE0908(uVar1,0xffff,0x1006,param_1 + 8,4);
    if ((iVar2 == 0) && (iVar2 = fn_82CE0908(*param_2,0xffff,0x1005,param_1 + 8,4), iVar2 == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        auStack_30[0] = 1;
        iVar2 = fn_82CE08F0(*param_2,0xffffffff8004667e,auStack_30);
        if (iVar2 != 0) {
          return 0xffffffff8004000b;
        }
      }
      return 0;
    }
  }
  return 0xffffffff8004000b;
}

