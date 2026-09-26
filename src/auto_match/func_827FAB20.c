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
extern unsigned int *auStack_60;
extern int fn_8280D8E0();
extern int fn_8280DD50();
extern int fn_8280E180();
extern int fn_8280E418();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_827FAB20(double param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  fn_8280DD50(auStack_50);
  fn_8280DD50(auStack_60);
  if (param_2 != 0) {
    uStack_4c = *(undefined4 *)(param_2 + 4);
    uStack_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)(param_2 + 0xc);
  }
  if (param_3 != 0) {
    uStack_5c = *(undefined4 *)(param_3 + 4);
    uStack_58 = *(undefined4 *)(param_3 + 8);
    uStack_54 = *(undefined4 *)(param_3 + 0xc);
  }
  fn_8280E418(auStack_50,auStack_50);
  fn_8280E418(auStack_60,auStack_60);
  fn_8280D8E0(auStack_50,auStack_60,auStack_60);
  fn_8280E180(param_1,auStack_50,auStack_60,&uStack_40);
  *param_4 = uStack_40;
  param_4[1] = uStack_3c;
  param_4[2] = uStack_38;
  param_4[3] = uStack_34;
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    param_4[4] = (float)((double)*(float *)(param_3 + 0x10) * param_1);
    param_4[5] = (float)((double)*(float *)(param_3 + 0x14) * param_1);
    param_4[6] = (float)((double)*(float *)(param_3 + 0x18) * param_1);
    bVar1 = *(byte *)(param_3 + 0x1c);
  }
  else if (param_3 == 0) {
    param_4[4] = *(undefined4 *)(param_2 + 0x10);
    param_4[5] = *(undefined4 *)(param_2 + 0x14);
    param_4[6] = *(undefined4 *)(param_2 + 0x18);
    bVar1 = *(byte *)(param_2 + 0x1c);
  }
  else {
    param_4[4] = (float)((double)*(float *)(param_3 + 0x10) * param_1 +
                        (double)*(float *)(param_2 + 0x10));
    param_4[5] = (float)((double)*(float *)(param_3 + 0x14) * param_1 +
                        (double)*(float *)(param_2 + 0x14));
    param_4[6] = (float)((double)*(float *)(param_3 + 0x18) * param_1 +
                        (double)*(float *)(param_2 + 0x18));
    bVar1 = *(byte *)(param_2 + 0x1c) | *(byte *)(param_3 + 0x1c);
  }
  *(byte *)(param_4 + 7) = bVar1;
  return;
}

