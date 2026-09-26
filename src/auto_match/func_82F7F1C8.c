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
extern int fn_82F6E1C8();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;


undefined8 fn_82F7F1C8(void)

{
  undefined4 *puVar1;
  uint uVar3;
  undefined8 uVar2;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  uVar3 = fn_82F6E1C8(0x20,0x48);
  if (uVar3 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    iVar5 = 0;
    lbl_8329F60C = 0x20;
    lbl_8329F620 = uVar3;
    if (uVar3 < uVar3 + 0x900) {
      puVar6 = (undefined1 *)(uVar3 + 5);
      do {
        puVar6[-1] = 0;
        *puVar6 = 10;
        *(undefined4 *)(puVar6 + -5) = 0xffffffff;
        *(undefined4 *)(puVar6 + 3) = 0;
        puVar6[0x23] = 0;
        puVar6[0x24] = 10;
        puVar6[0x25] = 10;
        *(undefined4 *)(puVar6 + 0x3b) = 0;
        puVar6[0x37] = 0;
        puVar4 = puVar6 + 0x43;
        puVar6 = puVar6 + 0x48;
      } while (puVar4 < (undefined1 *)(lbl_8329F620 + 0x900));
    }
    lVar7 = 3;
    do {
      puVar1 = (undefined4 *)(iVar5 + lbl_8329F620);
      iVar5 = iVar5 + 0x48;
      *(undefined1 *)(puVar1 + 1) = 0xc1;
      *puVar1 = 0xfffffffe;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar2 = 0;
  }
  return uVar2;
}

