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
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83276540;
extern unsigned int lbl_83276544;


uint fn_8233D068(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  fVar2 = lbl_821CA460;
  fVar1 = lbl_82192F70;
  uVar3 = lbl_83265A28;
  do {
    lVar4 = 10;
    do {
      uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
      uVar6 = (uint)(((float)(uVar3 & 0x7fffff | 0x3f800000) - fVar2) * fVar1);
      lbl_83265A28 = uVar3;
      if ((&lbl_83276544)[uVar6] == '\0') {
        (&lbl_83276544)[uVar6] = 1;
        if (uVar6 != 0xffffffff) {
          return uVar6;
        }
        break;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    uVar6 = 0;
    do {
      if ((&lbl_83276544)[uVar6] == '\0') {
        (&lbl_83276544)[uVar6] = 1;
        if (uVar6 != 0xffffffff) {
          return uVar6;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
    puVar5 = (undefined1 *)((int)&lbl_83276540 + 3);
    lVar4 = 8;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  } while( true );
}

