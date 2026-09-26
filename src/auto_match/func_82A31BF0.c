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
extern unsigned int *auStack_60;
extern int fn_82A2E9B0();
extern int fn_82A30780();
extern unsigned int uStack_68;
extern unsigned int uStack_70;


undefined8 fn_82A31BF0(undefined8 param_1,int param_2,char *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [72];
  
  if (*param_3 == '\0') {
    bVar2 = *(byte *)(param_2 + 0x35) & 0xf7;
  }
  else {
    if ((*(byte *)(param_2 + 0x35) & 2) != 0) {
      uStack_70 = 0;
      uStack_68 = 0;
      uVar1 = fn_82A2E9B0(param_1,param_2,0,&uStack_70,auStack_60);
      if (-1 < (int)uVar1) {
        return 0xffffffffc0000101;
      }
      if ((int)uVar1 != -0x3fffffcc) {
        return uVar1;
      }
    }
    uVar1 = fn_82A30780(param_1,param_2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    bVar2 = *(byte *)(param_2 + 0x35) | 8;
  }
  *(byte *)(param_2 + 0x35) = bVar2;
  return 0;
}

