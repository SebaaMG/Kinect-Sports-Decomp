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
extern int fn_82635FE8();
extern int fn_82636118();


void fn_82AA1AD8(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar3;
  ulonglong uVar2;
  
  do {
    uVar2 = fn_82635FE8(*(undefined4 *)(param_1 + 8));
    if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) {
      return;
    }
    puVar3 = (uint *)fn_82636118(*(undefined4 *)(param_1 + 8),param_2);
    uVar1 = puVar3[1] >> 0xc & 0xf;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        return;
      }
      if (uVar1 < 7) {
code_r0x82aa1b4c:
        if ((*puVar3 & 0x7000) != 0) {
          *puVar3 = *puVar3 | 0x20000;
          return;
        }
        if ((1 << uVar1 & 0x4054U) != 0) {
          return;
        }
      }
      else if (uVar1 == 0xc) {
        if ((puVar3[1] & 0x100) == 0) {
          return;
        }
      }
      else {
        if (uVar1 < 0xd) {
          return;
        }
        if (uVar1 < 0xf) goto code_r0x82aa1b4c;
        if (uVar1 != 0xf) {
          return;
        }
      }
    }
    param_2 = param_2 + 1;
  } while( true );
}

