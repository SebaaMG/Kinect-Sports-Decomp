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
extern unsigned int *auStack_60;
extern int fn_8223C478();
extern int fn_828ABF58();
extern int fn_828E9DB8();
extern unsigned int lbl_821B8C0C;
extern unsigned int uStack_4c;


/* WARNING: Removing unreachable block (ram,0x82429e54) */

void fn_82429D88(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 auStack_60 [4];
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [18];
  
  uVar2 = 0;
  uStack_4c = 0;
  ppuStack_50 = &lbl_821B8C0C;
  fn_828ABF58(aiStack_48,0,0,3);
  auStack_60[0] = *(undefined4 *)(param_3 + 8);
  (**(code **)(aiStack_48[0] + 0x10))(aiStack_48,param_2,auStack_60);
  do {
    uVar1 = *(uint *)(((uVar2 >> 5) + 3) * 4 + param_3);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,(1 << (uVar2 & 0x1f) & uVar1) != 0,1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return;
}

