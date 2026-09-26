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
extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822E5340();
extern int fn_822E53F8();
extern int fn_822F24E8();
extern int fn_822F2870();


void fn_822F2778(int param_1)

{
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  fn_822F24E8();
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_822F2870(param_1);
    fn_82230110(auStack_50,0xffffffff821ae0ac);
    fn_822E5340(*(undefined4 *)(param_1 + 0xc),auStack_50);
    fn_82230300(auStack_50,1,0);
    fn_82230110(auStack_30,0xffffffff821adec4);
    fn_822E53F8(*(undefined4 *)(param_1 + 0xc),auStack_30);
    fn_82230300(auStack_30,1,0);
  }
  return;
}

