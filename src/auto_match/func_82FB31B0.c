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
extern int fn_82FB3100();
extern int fn_82FB6A10();
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8 fn_82FB31B0(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint *puStack0000001c;
  undefined4 uStack00000024;
  
  puStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar2 = fn_82FB6A10(param_1,&stack0x0000001c,&stack0x00000024,0);
  uVar1 = *puStack0000001c;
  uVar6 = (ulonglong)uVar1;
  if (uVar6 != 0) {
    puStack0000001c = puStack0000001c + 1;
    iVar3 = fn_82FA5060(lbl_831BC768,
                              (uVar6 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    else {
      if (uVar6 != 0) {
        pcVar5 = (char *)(iVar3 + -1);
        do {
          *(uint *)(pcVar5 + 1) = *puStack0000001c;
          *(uint *)(pcVar5 + 5) = puStack0000001c[1];
          *(uint *)(pcVar5 + 9) = puStack0000001c[2];
          *(uint *)(pcVar5 + 0xd) = puStack0000001c[3];
          *(undefined2 *)(pcVar5 + 0x11) = *(undefined2 *)(puStack0000001c + 4);
          *(undefined2 *)(pcVar5 + 0x13) = *(undefined2 *)((int)puStack0000001c + 0x12);
          *(undefined2 *)(pcVar5 + 0x15) = *(undefined2 *)(puStack0000001c + 5);
          pcVar4 = (char *)((int)puStack0000001c + 0x17);
          pcVar5[0x17] = '\x01' - (*(char *)((int)puStack0000001c + 0x16) == '\0');
          puStack0000001c = puStack0000001c + 6;
          pcVar5 = pcVar5 + 0x18;
          *pcVar5 = '\x01' - (*pcVar4 == '\0');
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      fn_82FB3100(param_1,iVar3);
      fn_82FA5190(lbl_831BC768,iVar3);
    }
  }
  return uVar2;
}

