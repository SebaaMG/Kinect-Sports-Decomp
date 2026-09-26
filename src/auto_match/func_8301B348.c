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
extern int fn_82F68B7C();
extern int fn_82FA5060();
extern int fn_83029CF0();
extern unsigned int lbl_831BC768;


undefined8
fn_8301B348(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,ulonglong param_5,
             undefined1 param_6,uint *param_7)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  if ((param_4 & 0xffffffff) != 0) {
    iVar2 = fn_82F68B7C(param_2);
    uVar1 = 2;
    if (*(int *)(iVar2 + 4) == 0) {
      *(int *)(iVar2 + 8) = param_3;
      *(int *)(iVar2 + 0x1c) = (int)param_5;
      *(undefined1 *)(iVar2 + 0x21) = param_6;
      *(short *)(iVar2 + 0x16) = (short)param_4;
      if (param_7[1] == 0) {
        *(int *)(iVar2 + 0x10) = param_3;
        *(undefined2 *)(iVar2 + 0x14) = 0;
        iVar3 = fn_82FA5060(lbl_831BC768,param_4);
        *(int *)(iVar2 + 0xc) = iVar3;
        if (iVar3 == 0) {
          uVar1 = 2;
        }
        else {
          uVar5 = 0;
          if (*(short *)(iVar2 + 0x16) != 0) {
            puVar4 = (undefined1 *)(iVar3 + -1);
            do {
              uVar5 = uVar5 + 1;
              puVar4 = puVar4 + 1;
              *puVar4 = 0;
            } while (uVar5 < *(ushort *)(iVar2 + 0x16));
          }
          if ((param_5 & 1) != 0) {
            fn_83029CF0(iVar2);
          }
          uVar1 = 1;
        }
      }
      else {
        *(uint *)(iVar2 + 0xc) = param_7[1];
        uVar1 = 1;
        uVar5 = *param_7;
        *(short *)(iVar2 + 0x14) = (short)uVar5;
        *(uint *)(iVar2 + 0x10) = (uVar5 & 0xffff) * 0x10 + param_3;
      }
    }
    return uVar1;
  }
  return 0x1f;
}

