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
extern unsigned int *auStack_710;
extern int fn_82517978();
extern unsigned int lbl_832960A4;


/* WARNING: Removing unreachable block (ram,0x824c50e8) */
/* WARNING: Removing unreachable block (ram,0x824c50f8) */
/* WARNING: Removing unreachable block (ram,0x824c5100) */
/* WARNING: Removing unreachable block (ram,0x824c511c) */
/* WARNING: Removing unreachable block (ram,0x824c5108) */
/* WARNING: Removing unreachable block (ram,0x824c5120) */
/* WARNING: Removing unreachable block (ram,0x824c5128) */
/* WARNING: Removing unreachable block (ram,0x824c5468) */
/* WARNING: Removing unreachable block (ram,0x824c5478) */
/* WARNING: Removing unreachable block (ram,0x824c547c) */
/* WARNING: Removing unreachable block (ram,0x824c5134) */
/* WARNING: Removing unreachable block (ram,0x824c5368) */
/* WARNING: Removing unreachable block (ram,0x824c5384) */
/* WARNING: Removing unreachable block (ram,0x824c5378) */
/* WARNING: Removing unreachable block (ram,0x824c51cc) */
/* WARNING: Removing unreachable block (ram,0x824c532c) */
/* WARNING: Removing unreachable block (ram,0x824c51d0) */
/* WARNING: Removing unreachable block (ram,0x824c52f0) */
/* WARNING: Removing unreachable block (ram,0x824c51d8) */
/* WARNING: Removing unreachable block (ram,0x824c52b4) */
/* WARNING: Removing unreachable block (ram,0x824c51dc) */
/* WARNING: Removing unreachable block (ram,0x824c5278) */
/* WARNING: Removing unreachable block (ram,0x824c51e4) */
/* WARNING: Removing unreachable block (ram,0x824c523c) */
/* WARNING: Removing unreachable block (ram,0x824c53bc) */
/* WARNING: Removing unreachable block (ram,0x824c51e8) */
/* WARNING: Removing unreachable block (ram,0x824c51f0) */
/* WARNING: Removing unreachable block (ram,0x824c53cc) */
/* WARNING: Removing unreachable block (ram,0x824c53e4) */
/* WARNING: Removing unreachable block (ram,0x824c53f4) */
/* WARNING: Removing unreachable block (ram,0x824c5444) */
/* WARNING: Removing unreachable block (ram,0x824c5498) */

void fn_824C5080(int param_1)

{
  undefined1 auStack_710 [1808];
  
  if ((lbl_832960A4 == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    fn_82517978(auStack_710,*(undefined4 *)(*(int *)(param_1 + 4) + 0x44),
                      *(undefined4 *)(*(int *)(param_1 + 4) + 0x48),0);
  }
  return;
}

