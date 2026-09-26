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
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B10048();
extern int fn_82B84290();


/* WARNING: Removing unreachable block (ram,0x82b10144) */
/* WARNING: Removing unreachable block (ram,0x82b10154) */
/* WARNING: Removing unreachable block (ram,0x82b10170) */
/* WARNING: Removing unreachable block (ram,0x82b10180) */
/* WARNING: Removing unreachable block (ram,0x82b10188) */
/* WARNING: Removing unreachable block (ram,0x82b10190) */
/* WARNING: Removing unreachable block (ram,0x82b10198) */
/* WARNING: Removing unreachable block (ram,0x82b101a4) */
/* WARNING: Removing unreachable block (ram,0x82b10178) */
/* WARNING: Removing unreachable block (ram,0x82b101a8) */
/* WARNING: Removing unreachable block (ram,0x82b101b0) */
/* WARNING: Removing unreachable block (ram,0x82b101bc) */
/* WARNING: Removing unreachable block (ram,0x82b101c4) */
/* WARNING: Removing unreachable block (ram,0x82b101c8) */
/* WARNING: Removing unreachable block (ram,0x82b101d4) */
/* WARNING: Removing unreachable block (ram,0x82b101dc) */
/* WARNING: Removing unreachable block (ram,0x82b101e4) */
/* WARNING: Removing unreachable block (ram,0x82b101ec) */
/* WARNING: Removing unreachable block (ram,0x82b101f0) */
/* WARNING: Removing unreachable block (ram,0x82b101fc) */
/* WARNING: Removing unreachable block (ram,0x82b10210) */
/* WARNING: Removing unreachable block (ram,0x82b1021c) */
/* WARNING: Removing unreachable block (ram,0x82b10220) */
/* WARNING: Removing unreachable block (ram,0x82b10228) */
/* WARNING: Removing unreachable block (ram,0x82b10264) */

ulonglong fn_82B102D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  uVar1 = fn_82B10048(param_1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = fn_82B84290(param_1);
    uVar2 = fn_82AD17B0(param_1,param_3);
    puVar3 = (uint *)fn_82AD1978(uVar1,uVar2);
    *puVar3 = (uint)((param_4 & 0xffffffff) << 5) & 0x360 | 0x2001c80 | *puVar3 & 0xf3fffc80 |
              (uint)param_5 & 0x1f;
  }
  return uVar1;
}

