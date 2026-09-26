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
extern unsigned int *auStack_28;
extern int fn_82A2B900();
extern int fn_82A2B9A0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A2BA48(int param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  iVar2 = fn_82A2B9A0();
  uVar1 = uStack_30;
  if (iVar2 != 0) {
    if (((*(byte *)(uStack_30 + 7) & 0x10) != 0) &&
       ((param_3 & 0xffffffff) != (ulonglong)*(byte *)(param_1 + 0xca) + 1)) {
      fn_82A2B9A0(param_1,param_2,param_3 + 1,&uStack_30,auStack_28);
      iVar2 = ((int)(uStack_30 << 0xc | uStack_30 >> 0x14) >> 0xc) * 8 + *(int *)(param_1 + 0x30);
      *(char *)(iVar2 + 4) = *(char *)(iVar2 + 4) + -1;
    }
    *(undefined1 *)(uVar1 + 7) = 0;
    fn_82A2B900(param_1,uStack_2c,0);
  }
  return;
}

