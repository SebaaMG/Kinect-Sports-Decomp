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
extern unsigned int *auStack_190;
extern int fn_82F664B0();
extern int fn_82F691F0();
extern int fn_82F69A80();
extern unsigned int lbl_83214FFC;
extern unsigned int uRam8315c424;


undefined8 fn_829CF1C0(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_190 [400];
  
  if ((param_1 & 0x33ffe704) == 0) {
    if (((param_1 & 9) != 0) || (bVar1 = false, (param_1 & 0x80000000) == 0)) {
      bVar1 = true;
    }
    if (((param_1 != 0) && ((param_2 == 0xffffffff || (param_2 < 6)))) &&
       ((!bVar1 ||
        ((iVar2 = fn_82F664B0(auStack_190,0x104,param_4), iVar2 == 0 &&
         (iVar2 = fn_82F69A80(auStack_190,0x104,uRam8315c424), iVar2 == 0)))))) {
      RtlEnterCriticalSection(0xffffffff8315c3ec);
      if (lbl_83214FFC != 0) {
        RtlLeaveCriticalSection(0xffffffff8315c3ec);
        return 0xffffffff800704df;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(0xffffffff83215000,0,0x28e0);
    }
  }
  return 0xffffffff80070057;
}

