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
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;


longlong fn_82B209D8(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  
  uVar1 = *(uint *)(param_1 + 4);
  lVar3 = 0;
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return -1;
    }
    uVar4 = (ulonglong)*(uint *)(uVar1 + 8);
    uVar5 = 0;
    if (uVar4 != 0) {
      puVar6 = (uint *)(uVar1 + 0x18);
      do {
        uStack00000020 = (uint)((ulonglong)param_2 >> 0x20);
        if ((puVar6[-2] == uStack00000020) &&
           (uStack00000024 = (uint)param_2, puVar6[-1] == uStack00000024)) {
          uStack00000028 = (uint)((ulonglong)param_3 >> 0x20);
          bVar2 = true;
          if ((CONCAT44(*puVar6 ^ uStack00000028,*puVar6 ^ uStack00000028) & 0xfffffffffffffffb) !=
              0) goto code_r0x82b20a48;
        }
        else {
code_r0x82b20a48:
          bVar2 = false;
        }
        if (bVar2) {
          return uVar5 + lVar3;
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 3;
      } while ((uVar5 & 0xffffffff) < uVar4);
    }
    lVar3 = uVar4 + lVar3;
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

