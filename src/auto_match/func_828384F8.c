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
extern unsigned int *auStack_68;
extern int fn_82A99180();
extern int fn_82A99540();
extern int fn_82A999C8();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_828384F8(int param_1,int param_2,int param_3,int param_4,int param_5,undefined8 param_6,
                  undefined8 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  int iStack_70;
  int iStack_6c;
  undefined1 auStack_68 [8];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  fn_82A999C8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),&iStack_70,
                    &iStack_6c,auStack_68);
  if ((((param_2 == 0) && (param_3 == 0)) && (param_4 == iStack_70)) && (param_5 == iStack_6c)) {
    fn_82A99180(param_6,param_7,param_8,in_stack_00000054,*(undefined4 *)(param_1 + 0x18),0,
                    *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34));
  }
  else {
    iStack_58 = param_2 + param_4;
    iStack_54 = param_3 + param_5;
    iStack_60 = param_2;
    iStack_5c = param_3;
    fn_82A99540(param_6,param_7,param_8,in_stack_00000054,*(undefined4 *)(param_1 + 0x18),0,
                    *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34));
  }
  return;
}

