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
extern unsigned int *auStack_40;
extern int fn_82A0F060();
extern unsigned int *lbl_83218C34;


void fn_82A0D628(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 auStack_40 [16];
  
  if (*param_1 != 0) {
    auStack_40[0] = 0;
    if (lbl_83218C34 != (int *)0x0) {
      (**(code **)(*lbl_83218C34 + 0x4c))(lbl_83218C34,0xa0,0x78,4,2,0x182a0186,auStack_40);
    }
    fn_82A0F060(*param_1,param_2,param_3,param_4,2,param_5,auStack_40[0]);
  }
  return;
}

