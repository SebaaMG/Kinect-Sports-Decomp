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
extern int fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();
extern int fn_82F6A524();
extern int fn_82F6A570();


void fn_82260950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined8 extraout_f1;
  undefined8 uVar5;
  float in_stack_00000084;
  float in_stack_0000008c;
  float in_stack_00000094;
  float in_stack_0000009c;
  float in_stack_000000a4;
  float in_stack_000000ac;
  float in_stack_000000b4;
  float in_stack_000000bc;
  
  uVar1 = fn_82F6A524();
  uVar5 = extraout_f1;
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x22,1);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x22), cVar4 != '\0')) {
      fn_82E1CD30();
      fn_82E1CB88(0xffffffff821a6ba4,uVar1);
      fn_82E1CC60(uVar5,0xffffffff821a6bb4);
      fn_82E1CC60(param_2,0xffffffff821a6bc8);
      fn_82E1CC60(param_3,0xffffffff821a6bdc);
      fn_82E1CC60(param_4,0xffffffff821a6bf0);
      fn_82E1CC60(param_5,0xffffffff821a6c04);
      fn_82E1CC60(param_6,0xffffffff821a6c18);
      fn_82E1CC60(param_7,0xffffffff821a6c2c);
      fn_82E1CC60(param_8,0xffffffff821a6c40);
      fn_82E1CC60(param_9,0xffffffff821a6c54);
      fn_82E1CC60(param_10,0xffffffff821a6c68);
      fn_82E1CC60(param_11,0xffffffff821a6c7c);
      fn_82E1CC60(param_12,0xffffffff821a6c90);
      fn_82E1CC60(param_13,0xffffffff821a6ca4);
      fn_82E1CC60((double)in_stack_00000084,0xffffffff821a6cb8);
      fn_82E1CC60((double)in_stack_0000008c,0xffffffff821a6ccc);
      fn_82E1CC60((double)in_stack_00000094,0xffffffff821a6ce0);
      fn_82E1CC60((double)in_stack_0000009c,0xffffffff821a6cf4);
      fn_82E1CC60((double)in_stack_000000a4,0xffffffff821a6d08);
      fn_82E1CC60((double)in_stack_000000ac,0xffffffff821a6d1c);
      fn_82E1CC60((double)in_stack_000000b4,0xffffffff821a6d30);
      fn_82E1CC60((double)in_stack_000000bc,0xffffffff821a6d44);
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
  fn_82F6A570();
  return;
}

