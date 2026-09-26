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
extern unsigned int *auStack_144;
extern unsigned int *auStack_148;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_150;
extern unsigned int *auStack_15c;
extern unsigned int *auStack_160;
extern unsigned int *auStack_164;
extern unsigned int *auStack_168;
extern unsigned int *auStack_16c;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_c0;
extern int fn_8280CB70();
extern int fn_82859DE0();
extern int fn_8285FD78();
extern int fn_82861370();
extern int fn_82861380();
extern int fn_828616F0();
extern int fn_82861F18();
extern int fn_82861F50();
extern int fn_82861F88();
extern int fn_82861FB0();
extern int fn_82861FC0();
extern int fn_82862080();
extern int fn_828620B8();
extern int fn_82863790();


void fn_8285FDF0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 auStack_180 [4];
  undefined1 auStack_170 [4];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [4];
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [4];
  undefined1 auStack_15c [12];
  undefined1 auStack_150 [4];
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [4];
  undefined1 auStack_144 [4];
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [168];
  
  fn_82863790(auStack_180);
  fn_82862080(auStack_180[0],auStack_100);
  iVar1 = fn_82859DE0(param_1,param_2);
  if (*(int *)(iVar1 + 0x50) == 0) {
    fn_82861F50(auStack_180[0],auStack_c0);
    puVar2 = auStack_100;
  }
  else {
    fn_8280CB70(iVar1 + 0x10,auStack_100,auStack_140);
    iVar1 = fn_82861FB0(auStack_180[0]);
    if (iVar1 == 0) {
      iVar1 = fn_82861FC0(auStack_180[0]);
      if (iVar1 == 0) {
        fn_82861F88(auStack_180[0],auStack_150,auStack_14c,auStack_148,auStack_144);
        fn_828616F0(auStack_150,auStack_140,auStack_c0);
      }
      else {
        fn_828620B8(auStack_180[0],auStack_170,auStack_16c,auStack_168,auStack_164,auStack_160,
                     auStack_15c);
        fn_82861380(auStack_170,auStack_140,auStack_c0);
      }
    }
    else {
      fn_82861F18(auStack_180[0],auStack_170,auStack_16c,auStack_168,auStack_164,auStack_160,
                   auStack_15c);
      fn_82861370(auStack_170,auStack_140,auStack_c0);
    }
    puVar2 = auStack_140;
  }
  fn_8285FD78(param_1,param_2,puVar2,auStack_c0);
  return;
}

