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
extern int fn_82AC8B10();
extern int fn_82AC8CE8();
extern int fn_82AE9600();
extern int fn_82AE9DE0();
extern int fn_82F68CC0();


undefined8 fn_82AEA1A0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar5;
  undefined8 uVar4;
  undefined1 auStack_60 [96];
  
  uVar1 = *param_1;
  uVar2 = *(uint *)(uVar1 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0) || (bVar3 = true, 0x1f < uVar2)) {
    bVar3 = false;
  }
  if (bVar3) {
    if ((uVar2 == 0) || (bVar3 = true, 0x52 < uVar2)) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
      if ((((uVar2 & 1) == 0) && (uVar2 != 0)) &&
         (((*(uint *)(uVar2 + 0x14) ^ *(uint *)(uVar1 + 0x14)) & 0x1fff) == 0)) {
        uVar2 = *(uint *)(uVar2 + 8) >> 7 & 0x7f;
        if ((uVar2 < 0x20) || (bVar3 = true, 0x52 < uVar2)) {
          bVar3 = false;
        }
        if (bVar3) {
          return 0;
        }
      }
      fn_82F68CC0(auStack_60,param_1 + 1,0x34);
      fn_82AE9DE0(auStack_60,uVar1);
      cVar5 = fn_82AC8B10(auStack_60,param_2);
      if (cVar5 != '\0') {
        fn_82AC8CE8(auStack_60,param_2);
        cVar5 = fn_82AC8B10(auStack_60,uVar1);
        if (cVar5 != '\0') {
          uVar4 = fn_82AE9600(param_1[0xc],uVar1,param_2);
          return uVar4;
        }
      }
    }
  }
  return 0;
}

