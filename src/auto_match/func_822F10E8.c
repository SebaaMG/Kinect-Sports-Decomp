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
extern int fn_822B7068();
extern int fn_822B7340();
extern int fn_822E52D8();
extern int fn_822E54B0();


void fn_822F10E8(int param_1)

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  fn_822E54B0(*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_82230110(auStack_30,0xffffffff82196582);
    fn_822E52D8(*(undefined4 *)(param_1 + 0xc),auStack_30);
    fn_82230300(auStack_30,1,0);
  }
  if ((*(int *)(*(int *)(param_1 + 0x10) + 0x178) != 2) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x78) != 0)) {
    fn_822B7340();
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x1e4);
    fn_822B7068(*(int *)(param_1 + 0xc),*(undefined4 *)(iVar1 + 0xa8));
    *(undefined4 *)(iVar1 + 0xb4) = 0;
  }
  return;
}

