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
extern int fn_824584B8();
extern int fn_8265C9E0();
extern unsigned int lbl_821BAA6C;
extern unsigned int lbl_821CC160;


void fn_82458748(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  puVar2 = (undefined4 *)fn_8265C9E0(0x11c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821BAA6C;
    puVar2[2] = 1;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = param_2;
      puVar2[4] = lbl_821CC160;
      fn_824584B8(puVar2 + 5);
      puVar2[0x3b] = 0;
      puVar2[0x3c] = 0;
      puVar2[0x3d] = 0;
      puVar2[0x3f] = 0;
      puVar2[0x40] = 0;
      puVar2[0x41] = 0;
      puVar2[0x43] = 0;
      puVar2[0x44] = 0;
      puVar2[0x45] = 0;
    }
  }
  puVar3 = (undefined4 *)(iVar1 * 8 + param_1);
  iVar1 = puVar3[1];
  puVar3[1] = puVar2;
  *puVar3 = puVar2 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

