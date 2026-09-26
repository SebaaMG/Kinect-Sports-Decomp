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
extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82E1CB08();
extern int fn_82E1CCA8();
extern unsigned int uStack_3c;


void fn_8225F8C8(void)

{
  undefined4 **appuStack_50 [5];
  uint uStack_3c;
  undefined1 auStack_30 [32];
  
  fn_82230110(appuStack_50,0xffffffff821a6774);
  fn_82230110(auStack_30,0xffffffff821a6774);
  if (uStack_3c < 0x10) {
    appuStack_50[0] = appuStack_50;
  }
  fn_82E1CB08(0xffffffff821a677c,appuStack_50[0],0);
  fn_82E1CB08(0xffffffff821a678c,0xffffffff821a6784,0);
  fn_82E1CCA8();
  fn_82230300(auStack_30,1,0);
  fn_82230300(appuStack_50,1,0);
  return;
}

