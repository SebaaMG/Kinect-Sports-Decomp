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
extern unsigned int *auStack_50;
extern int fn_826F2ED8();
extern int fn_82F65B18();
extern int fn_82F66A80();
extern unsigned int uStack_3c;
extern unsigned int uStack_48;


void fn_826F2F38(int param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined1 *puStack_40;
  uint uStack_3c;
  
  uVar5 = param_2[1];
  bVar2 = false;
  auStack_50[0] = 0;
  puVar4 = (undefined1 *)*param_2;
  do {
    uStack_3c = 0;
    if (uVar5 != 0) {
      do {
        if ((puVar4[uStack_3c] == '\0') || (puVar4[uStack_3c] == ':')) break;
        uStack_3c = uStack_3c + 1;
      } while (uStack_3c < uVar5);
    }
    uStack_48 = CONCAT44(puVar4,uStack_3c);
    uVar3 = uStack_3c + 1;
    if (uVar5 < uStack_3c + 1) {
      uVar3 = uVar5;
    }
    uVar5 = uVar5 - uVar3;
    puStack_40 = puVar4;
    if (bVar2) {
      fn_826F2ED8(param_1 + 0x10,auStack_50,&uStack_48);
      bVar2 = false;
    }
    else {
      if (((uStack_3c == 0) || (puVar4 == (undefined1 *)0x0)) ||
         (iVar1 = fn_82F66A80(*puVar4), iVar1 == 0)) {
        *(undefined8 *)(param_1 + 0x1c) = uStack_48;
        return;
      }
      auStack_50[0] = fn_82F65B18(puVar4);
      bVar2 = true;
    }
    puVar4 = puVar4 + uVar3;
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}

