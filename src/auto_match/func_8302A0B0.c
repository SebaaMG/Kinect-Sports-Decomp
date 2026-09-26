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
extern int fn_82FA5060();
extern int fn_83029CF0();
extern unsigned int lbl_831BC768;


undefined8
fn_8302A0B0(int param_1,int param_2,undefined8 param_3,uint param_4,undefined1 param_5,
             uint *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  uVar1 = 2;
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x1c) = param_4;
    *(undefined1 *)(param_1 + 0x21) = param_5;
    *(short *)(param_1 + 0x16) = (short)param_3;
    if (param_6[1] == 0) {
      *(int *)(param_1 + 0x10) = param_2;
      *(undefined2 *)(param_1 + 0x14) = 0;
      iVar2 = fn_82FA5060(lbl_831BC768,param_3);
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        uVar4 = 0;
        if (*(short *)(param_1 + 0x16) != 0) {
          puVar3 = (undefined1 *)(iVar2 + -1);
          do {
            uVar4 = uVar4 + 1;
            puVar3 = puVar3 + 1;
            *puVar3 = 0;
          } while (uVar4 < *(ushort *)(param_1 + 0x16));
        }
        if ((param_4 & 1) != 0) {
          fn_83029CF0(param_1);
        }
        uVar1 = 1;
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = param_6[1];
      uVar1 = 1;
      uVar4 = *param_6;
      *(short *)(param_1 + 0x14) = (short)uVar4;
      *(uint *)(param_1 + 0x10) = (uVar4 & 0xffff) * 0x10 + param_2;
    }
  }
  return uVar1;
}

