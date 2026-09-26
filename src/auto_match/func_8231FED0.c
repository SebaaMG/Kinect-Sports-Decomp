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
extern int fn_822C72E0();
extern int fn_827F6318();
extern int fn_827F6328();
extern unsigned int lbl_821CA460;


void fn_8231FED0(double param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x20) + 0xc) + 0x110);
  dVar3 = (double)fn_827F6328(uVar1);
  dVar5 = (double)lbl_821CA460;
  dVar4 = (double)(float)((double)(float)(dVar5 / dVar3) * param_1);
  dVar3 = (double)fn_827F6318(uVar1);
  if (dVar5 <= (double)(float)(dVar3 + dVar4)) {
    puVar2 = (undefined4 *)(param_2 + 4);
    if (0xf < *(uint *)(param_2 + 0x18)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    fn_822C72E0(param_3,puVar2);
  }
  return;
}

