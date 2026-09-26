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
extern int fn_82260560();
extern unsigned int lbl_82192734;
extern unsigned int uRam831c996c;


void fn_82399AD0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    fn_82260560((double)*(float *)(param_1 + 0xbec),(double)*(float *)(param_1 + 0xbf0),
                      (double)*(float *)(param_1 + 0xbf4),(double)*(float *)(param_1 + 0xbf8),
                      uRam831c996c,(int)*(float *)(param_1 + 0xbdc),param_3,
                      (int)*(float *)(param_1 + 0xbe0),param_5,(int)*(float *)(param_1 + 0xbe4),
                      param_7,(int)*(float *)(param_1 + 0xbe8));
    *(undefined4 *)(param_1 + 0xbd8) = 0;
    uVar1 = lbl_82192734;
    lVar3 = 4;
    puVar2 = (undefined4 *)(param_1 + 0xbe8);
    do {
      puVar2[-3] = uVar1;
      puVar2 = puVar2 + 1;
      *puVar2 = uVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
  return;
}

