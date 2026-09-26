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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FB2380();
extern int fn_82FB6A10();
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8 fn_82FB26C8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puStack0000001c;
  undefined4 uStack00000024;
  
  puStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar5 = fn_82FB6A10(param_1,&stack0x0000001c,&stack0x00000024,0);
  uVar3 = puStack0000001c[1];
  uVar4 = puStack0000001c[2];
  cVar2 = *(char *)(puStack0000001c + 3);
  *(undefined4 *)(param_1 + 0xcc) = *puStack0000001c;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(char *)(param_1 + 0xd0) = '\x01' - (cVar2 == '\0');
  puVar1 = (uint *)((int)puStack0000001c + 0xd);
  uVar9 = (ulonglong)*puVar1;
  puStack0000001c = (undefined4 *)((int)puStack0000001c + 0x11);
  if (uVar9 != 0) {
    iVar6 = fn_82FA5060(lbl_831BC768,*puVar1 << 3);
    if (iVar6 == 0) {
      uVar5 = 2;
    }
    else {
      if (uVar9 != 0) {
        puVar8 = (undefined4 *)(iVar6 + -4);
        uVar10 = uVar9;
        do {
          puVar7 = puStack0000001c + 1;
          puVar8[1] = *puStack0000001c;
          puStack0000001c = puStack0000001c + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = *puVar7;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      fn_82FB2380(param_1,uVar9,iVar6);
      fn_82FA5190(lbl_831BC768,iVar6);
    }
  }
  return uVar5;
}

