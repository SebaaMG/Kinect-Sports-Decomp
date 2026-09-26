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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FA5060();
extern int fn_82FE7320();
extern int fn_82FE8948();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined8
fn_82FE9970(undefined8 param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4,
             longlong param_5)

{
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uStack_58;
  uint uStack_50;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0x1f;
  }
  else if ((param_3 & 0xffffffff) == 1) {
    uVar3 = fn_82FE8948(*param_2);
    uVar1 = fn_82FFA6E8(lbl_832642F0,
                              CONCAT44(((uint)LZCOUNT((int)param_1) >> 5 ^ 1) + 2,(int)param_4),
                              param_5 << 0x20,CONCAT44(1,uVar3),uStack_58,
                              (ulonglong)uStack_50 << 0x20);
  }
  else {
    puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC768,(param_3 & 0x3fffffff) << 2);
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0x34;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        uVar4 = param_3;
        puVar5 = puVar2;
        do {
          uVar3 = fn_82FE8948(*(undefined4 *)((int)param_2 + ((int)puVar5 - (int)puVar2)));
          *puVar5 = uVar3;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
      }
      uVar1 = fn_82FE7320(param_1,param_4,param_5,puVar2,param_3,0);
    }
  }
  return uVar1;
}

