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
extern int fn_82FA5190();
extern int fn_82FA7508();
extern int fn_82FA9208();
extern int fn_82FA92C0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264230;


void fn_82FB4A18(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = puVar2[0xb];
  puVar2[0xb] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    uVar5 = (ulonglong)(uint)puVar2[3];
    if (uVar5 == 0) {
      fn_82FA7508(lbl_83264230,puVar2);
    }
    else {
      iVar4 = fn_82FA92C0(uVar5 + 0x28,puVar2 + 1);
      if (iVar4 == 1) {
        fn_82FA9208(uVar5);
      }
    }
    uVar3 = lbl_831BC768;
    (**(code **)*puVar2)(puVar2,0);
    fn_82FA5190(uVar3,puVar2);
  }
  return;
}

