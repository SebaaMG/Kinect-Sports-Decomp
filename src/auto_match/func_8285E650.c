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
extern unsigned int *auStack_100;
extern unsigned int *auStack_140;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1ac;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1b4;
extern unsigned int *auStack_1b8;
extern unsigned int *auStack_1bc;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_c0;
extern int fn_8285AAC8();
extern int fn_8285CEB8();
extern int fn_8285E398();
extern int fn_82861E68();
extern int fn_82861F50();
extern int fn_82862050();
extern int fn_82862068();
extern int fn_82862080();
extern int fn_82863790();
extern unsigned int lbl_832115A4;
extern unsigned int lbl_832115A5;
extern unsigned int lbl_832115A6;
extern unsigned int uStack_1d0;


void fn_8285E650(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_1d0;
  int aiStack_1cc [3];
  undefined1 auStack_1c0 [4];
  undefined1 auStack_1bc [4];
  undefined1 auStack_1b8 [4];
  undefined1 auStack_1b4 [4];
  undefined1 auStack_1b0 [4];
  undefined1 auStack_1ac [12];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [168];
  
  lbl_832115A4 = 0;
  lbl_832115A6 = 0;
  lbl_832115A5 = 1;
  fn_8285AAC8(param_1,param_2,aiStack_1cc);
  if (aiStack_1cc[0] != 0) {
    fn_82863790(&uStack_1d0);
    fn_82861E68(uStack_1d0,auStack_1c0,auStack_1bc,auStack_1b8,auStack_1b4,auStack_1b0,auStack_1ac)
    ;
    fn_8285CEB8(uStack_1d0,auStack_1a0);
    fn_82862080(uStack_1d0,auStack_180);
    fn_82862050(uStack_1d0,auStack_140);
    fn_82862068(uStack_1d0,auStack_100);
    fn_82861F50(uStack_1d0,auStack_c0);
    fn_8285E398(param_1,param_2,aiStack_1cc[0],auStack_140,auStack_180,auStack_100,auStack_1c0,
                  auStack_1a0);
  }
  return;
}

