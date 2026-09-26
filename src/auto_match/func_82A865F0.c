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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_82A93C18();
extern int fn_82A94368();
extern int fn_82A98F20();
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int uStack_b0;
extern unsigned int uStack_f0;


bool fn_82A865F0(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  uint uStack_f0;
  undefined1 auStack_e0 [48];
  uint uStack_b0;
  undefined1 auStack_a0 [20];
  int iStack_8c;
  int iStack_7c;
  
  fn_82A93C18(param_2,param_3,0,0,param_1 << 0x20 | param_1 & 0xfffffeff,0,0,0);
  if ((param_4 & 0xffffffff) != 0) {
    fn_82A94368(auStack_e0,param_4,auStack_a0);
    uStack_f0 = iStack_7c * iStack_8c;
  }
  if (uStack_f0 <= param_6) {
    fn_82A98F20(param_2,param_3,param_4,param_1 & 0x3f,
                    (~(ulonglong)uStack_b0 & 0xffffffff) >> 0xb & 1,param_8,param_5,0);
  }
  return uStack_f0 <= param_6;
}

