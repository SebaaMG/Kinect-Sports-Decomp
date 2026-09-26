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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82AA64F8();
extern int fn_82AA66A8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AD14F0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  ulonglong uStack00000038;
  ulonglong uStack00000040;
  ulonglong uStack00000048;
  
  puVar1 = *(uint **)(param_2 + 4);
  do {
    uStack00000038 = ZEXT48(puVar1);
    if (uStack00000038 == 0) {
      return;
    }
    if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
      for (uVar2 = *(uint *)(puVar1[4] + 4); uStack00000040 = (ulonglong)uVar2, uStack00000040 != 0;
          uVar2 = *(uint *)(uVar2 + 8)) {
        uVar3 = *(uint *)(uVar2 + 0x10);
        if (uVar3 != 0) {
          uVar4 = *(uint *)(uVar3 + 8) >> 7 & 0x7f;
          if (uVar4 == 0x40) {
            uStack00000048 = (ulonglong)*(uint *)param_4;
            if (uStack00000048 != 0) {
fn_82AA66A8:
              uStack00000020 = param_3;
              uStack00000028 = param_4;
              uStack00000030 = param_5;
                    /* WARNING: Subroutine does not return */
              fn_82AA64F8(param_1,0x12c0,&stack0x00000020);
            }
            *(uint *)param_4 = uVar3;
          }
          else if (uVar4 == 0x3f) {
            uStack00000048 = (ulonglong)*(uint *)param_3;
            if (uStack00000048 != 0) goto fn_82AA66A8;
            *(uint *)param_3 = uVar3;
          }
        }
      }
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

