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
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82270220();
extern int fn_822746B8();
extern int fn_82274A10();
extern int fn_8227E330();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8247FF88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_70;
  float fStack_6c;
  
  lVar3 = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    fn_822746B8(*(int *)(param_1 + 0xec),0);
  }
  uVar1 = fn_82274A10(1,0,0,0);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  iVar4 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x48) + iVar4 + 0x838) != 4) {
      iVar2 = fn_82270220(&fStack_90,&fStack_88,lVar3);
      if (iVar2 != 0) {
        uStack_80 = (undefined4)lVar3;
        fStack_70 = fStack_88 - fStack_90;
        fStack_6c = fStack_84 - fStack_8c;
        uStack_7c = uStack_80;
        fn_8227E330(*(undefined4 *)(param_1 + 0xec),&uStack_80,param_1 + 0xd8);
      }
      lVar3 = lVar3 + 1;
    }
    iVar4 = iVar4 + 0x420;
  } while (iVar4 < 0x1080);
  return;
}

