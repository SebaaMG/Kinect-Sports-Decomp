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


undefined8 fn_82B20920(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  
  uVar1 = *(uint *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return 0;
    }
    uVar3 = 0;
    if (*(uint *)(uVar1 + 8) != 0) {
      puVar4 = (uint *)(uVar1 + 0x18);
      do {
        uStack00000020 = (uint)((ulonglong)param_2 >> 0x20);
        if ((puVar4[-2] == uStack00000020) &&
           (uStack00000024 = (uint)param_2, puVar4[-1] == uStack00000024)) {
          uStack00000028 = (uint)((ulonglong)param_3 >> 0x20);
          bVar2 = true;
          if ((CONCAT44(*puVar4 ^ uStack00000028,*puVar4 ^ uStack00000028) & 0xfffffffffffffffb) !=
              0) goto code_r0x82b2098c;
        }
        else {
code_r0x82b2098c:
          bVar2 = false;
        }
        if (bVar2) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar3 < *(uint *)(uVar1 + 8));
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

