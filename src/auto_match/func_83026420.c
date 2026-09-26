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
extern unsigned int *auStack_50;
extern int fn_82FA5060();
extern int fn_830137C8();
extern int fn_8303B348();
extern unsigned int lbl_831BC770;


undefined8
fn_83026420(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined1 auStack_50 [5];
  char cStack_4b;
  
  *(int *)(param_1 + 8) = (int)param_4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_5 + 4) >> 0xe;
  *(int *)(param_1 + 0x1c) = (int)param_3;
  uVar1 = fn_830137C8(0xffffffff831bc7fc,*param_2,puVar3);
  if ((int)uVar1 == 1) {
    (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,auStack_50);
    if (cStack_4b == '\0') {
      uVar2 = fn_82FA5060(lbl_831BC770,0x10);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_8303B348(uVar2,param_4,param_3);
      }
      *(int *)(param_1 + 0x10) = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        uVar1 = (**(code **)(*(int *)*puVar3 + 0x14))
                          ((int *)*puVar3,0xffffffff831bc7fc,uVar2 + 4,param_2[1],param_5);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        uVar1 = (**(code **)(*(int *)*puVar3 + 8))();
        return uVar1;
      }
    }
    uVar1 = 2;
  }
  return uVar1;
}

