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
extern int fn_83056560();
extern int fn_83056970();
extern int fn_830571B0();
extern int fn_830572B0();
extern int fn_830584F0();
extern int fn_830596F8();
extern int fn_8305ADB0();
extern int fn_8305B3F0();
extern int fn_8305B5E0();


undefined8
fn_83056728(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)param_5[1] >> 0xe;
  if (((uVar1 == 4) || (uVar1 == 3)) || (uVar1 == 0x3f)) {
    uVar2 = fn_83056560();
    fn_8305B3F0(uVar2,param_2);
    fn_830571B0(uVar2);
    *(undefined4 *)(param_1 + 4) = param_4;
    iVar3 = fn_830572B0(0x78);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8305B5E0();
    }
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == 0) {
      uVar2 = 0x34;
    }
    else {
      if (*param_5 != *(int *)(iVar3 + 4)) {
        *(int *)(iVar3 + 4) = *param_5;
      }
      uVar2 = fn_83056970(*(undefined4 *)(param_1 + 8),uVar1);
      iVar3 = *(int *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar4 = 0;
      if (*(int *)(iVar3 + 0x10) == 0) {
        if (*(int *)(iVar3 + 0xc) == 0) {
          if (*(int *)(iVar3 + 8) != 0) {
            uVar4 = fn_830596F8(*(int *)(iVar3 + 8),*param_5);
          }
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          uVar4 = fn_830584F0(*(int *)(iVar3 + 0xc));
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
      }
      else {
        uVar4 = fn_8305ADB0(*(int *)(iVar3 + 0x10));
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
    }
  }
  else {
    uVar2 = 0x4e;
  }
  return uVar2;
}

