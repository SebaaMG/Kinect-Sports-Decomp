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
extern int fn_829DB740();
extern int fn_829E3820();
extern int fn_829E53C0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8315C704;


undefined8 fn_829E3148(int param_1)

{
  float fVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    fn_829E53C0((double)lbl_82005748,(double)*(float *)(param_1 + 0x54),(double)lbl_8315C704,
                 param_1 + 0x40);
    fn_829DB740();
    uVar2 = fn_829E3820((double)lbl_82005748,param_1 + 0x40);
    fVar1 = lbl_82005748;
    if (-1 < (int)uVar2) {
      *(float *)(param_1 + 0x60) = lbl_82005748;
      uVar2 = 0;
      *(float *)(param_1 + 0x10) = fVar1;
      *(undefined1 *)(param_1 + 0x6d) = 1;
    }
  }
  return uVar2;
}

