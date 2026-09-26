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
extern int fn_824BC7E8();
extern int fn_8257D088();
extern unsigned int lbl_8320A898;


void fn_82463A20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1d4) == 0) {
    piVar3 = (int *)fn_824BC7E8();
    uVar2 = *(undefined4 *)(*(int *)(*piVar3 + 0xa0) + 0x4c);
  }
  else {
    piVar3 = (int *)fn_824BC7E8();
    iVar1 = *(int *)(*piVar3 + 0xa4);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(*(int *)(*piVar3 + 0xa0) + 0x4c);
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x4c);
    }
  }
  fn_8257D088(800,0x32,0x140,0xf0,0xff,uVar2,lbl_8320A898);
  return;
}

