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
extern int fn_829B5A80();
extern int fn_829B5C58();
extern int fn_829B5D78();
extern int fn_829B5E58();
extern int fn_829B5F40();
extern int fn_829B5FD8();
extern int fn_829B6070();
extern int fn_829B6468();
extern int fn_829B6658();
extern int fn_829B6850();
extern int fn_829B69D8();
extern int fn_829BAA90();
extern int fn_829BACF0();
extern int fn_82BA02A8();


void fn_829B6B80(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0;
  uVar1 = fn_829BACF0();
  puVar2 = (undefined4 *)fn_829BAA90(param_1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    fn_82BA02A8(param_1);
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  puVar2[0xb] = uVar1;
  *puVar2 = fn_829B5A80;
  puVar2[1] = fn_829B5C58;
  puVar2[2] = &fn_829B5D78;
  puVar2[3] = &fn_829B5E58;
  puVar2[4] = fn_829B5F40;
  puVar2[5] = fn_829B5FD8;
  puVar2[6] = fn_829B6070;
  puVar2[7] = fn_829B6468;
  puVar2[8] = fn_829B6658;
  puVar2[9] = fn_829B6850;
  puVar2[10] = fn_829B69D8;
  puVar2[0xc] = 1000000000;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  param_1[1] = (int)puVar2;
  return;
}

