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
extern int fn_82264400();
extern unsigned int lbl_82192734;
extern unsigned int lbl_831D1918;
extern unsigned int lbl_83276554;


void fn_823C51D0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((lbl_831D1918 != 0) && (*(int *)(param_1 + 0x1680) != 0)) {
    puVar3 = (undefined4 *)(param_1 + 0x1698);
    fn_82264400((double)*(float *)(param_1 + 0x1698),(double)*(float *)(param_1 + 0x169c),
                      (double)*(float *)(param_1 + 0x16a0),(double)*(float *)(param_1 + 0x16a4),
                      lbl_83276554,(int)*(float *)(param_1 + 0x1688),param_3,
                      (int)*(float *)(param_1 + 0x168c),param_5,(int)*(float *)(param_1 + 0x1690),
                      param_7,(int)*(float *)(param_1 + 0x1694));
    *(undefined4 *)(param_1 + 0x1684) = 0;
    uVar1 = lbl_82192734;
    for (puVar2 = (undefined4 *)(param_1 + 0x1688); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
    for (; puVar3 != (undefined4 *)(param_1 + 0x16a8); puVar3 = puVar3 + 1) {
      *puVar3 = uVar1;
    }
    *(undefined4 *)(param_1 + 0x1680) = 0;
  }
  return;
}

