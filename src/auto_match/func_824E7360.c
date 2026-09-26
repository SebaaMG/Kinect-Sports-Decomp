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
extern int fn_82F68CC0();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C0;
extern unsigned int lbl_832967B8;


void fn_824E7360(double param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((-1 < param_4) && (param_4 < 2)) {
    iVar3 = param_4 * 0x170 + param_2;
    *(undefined4 *)(iVar3 + 0x160) = 0;
    if (-2 < param_4) {
      if (param_4 == -1) {
        puVar2 = &lbl_832967B8;
      }
      else {
        puVar2 = &lbl_832967B8 + param_4 * 0x1a;
      }
      fn_82F68CC0(iVar3 + 0x78,puVar2,0x68);
    }
    fn_82F68CC0(iVar3 + 0xe0,iVar3 + 0x10,0x68);
    if ((float)(param_1 - (double)lbl_8218EC10) < 0.0) {
      param_1 = lbl_821955C0;
    }
    *(float *)(iVar3 + 0x14c) = (float)param_1;
    uVar1 = *(undefined4 *)(param_2 + 0x300);
    *(undefined4 *)(iVar3 + 0x148) = 1;
    *(undefined4 *)(iVar3 + 0x15c) = uVar1;
  }
  return;
}

