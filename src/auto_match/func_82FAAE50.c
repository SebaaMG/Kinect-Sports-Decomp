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
extern int fn_82FABA50();
extern int fn_82FACC70();


void fn_82FAAE50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  puVar5 = (undefined4 *)0x0;
  do {
    while( true ) {
      puVar4 = puVar3;
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      iVar1 = puVar4[3];
      iVar2 = puVar4[5];
      puVar4[3] = iVar1 + -0x400;
      if (iVar2 == 0) break;
      if ((*(byte *)(iVar2 + 0x34) & 0x80) != 0) {
        fn_82FACC70(iVar2,0,0x400);
      }
LAB_82faaeb0:
      puVar3 = (undefined4 *)*puVar4;
      puVar5 = puVar4;
    }
    if (((puVar4[6] & 0x80000000) != 0) || (-1 < iVar1 + -0x400)) goto LAB_82faaeb0;
    puVar3 = (undefined4 *)*puVar4;
    fn_82FABA50(param_1 + 0x2c,puVar4,puVar5);
  } while( true );
}

