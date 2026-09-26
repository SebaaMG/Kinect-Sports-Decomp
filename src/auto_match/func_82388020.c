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
extern int fn_822636E0();
extern unsigned int lbl_82192734;


void fn_82388020(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    fn_822636E0((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                      (double)*(float *)(param_1 + 0x28),(double)*(float *)(param_1 + 0x2c),
                      *(undefined4 *)(iVar1 + 0x5e0),(int)*(float *)(param_1 + 0x10),param_3,
                      (int)*(float *)(param_1 + 0x14),param_5,(int)*(float *)(param_1 + 0x18),
                      param_7,(int)*(float *)(param_1 + 0x1c));
    puVar3 = (undefined4 *)(param_1 + 0x1c);
    *(int *)(iVar1 + 0x5e0) = *(int *)(iVar1 + 0x5e0) + 1;
    lVar4 = 4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = lbl_82192734;
    do {
      puVar3[-3] = uVar2;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

