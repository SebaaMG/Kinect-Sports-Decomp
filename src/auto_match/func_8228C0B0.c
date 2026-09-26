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
extern int fn_822315A0();
extern int fn_82267750();
extern int fn_82517978();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_8228C0B0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar5 = 0;
  do {
    puVar1 = (undefined4 *)**(int **)(param_1 + 0x80);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      iVar4 = puVar2[2];
      if (*(int *)(iVar4 + 0x40) == iVar5) goto LAB_8228c100;
    }
    iVar4 = 0;
LAB_8228c100:
    if (iVar4 != 0) {
      puVar1 = (undefined4 *)**(int **)(param_1 + 0x80);
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        iVar4 = puVar2[2];
        if (*(int *)(iVar4 + 0x40) == iVar5) goto LAB_8228c134;
      }
      iVar4 = 0;
LAB_8228c134:
      uStack_30 = 0;
      iStack_2c = 0;
      fn_82517978(&uStack_30,*(undefined4 *)(iVar4 + 0x524),*(undefined4 *)(iVar4 + 0x528),0);
      uVar3 = fn_8266F6B8();
      fn_826728E8(uStack_30,0xffffffff821a96f8,uVar3);
      if (iStack_2c != 0) {
        fn_822315A0();
      }
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      fn_82267750(*(undefined4 *)(param_1 + 0x80),0);
      fn_82267750(*(undefined4 *)(param_1 + 0x80),2);
      fn_82267750(*(undefined4 *)(param_1 + 0x80),1);
      return;
    }
  } while( true );
}

