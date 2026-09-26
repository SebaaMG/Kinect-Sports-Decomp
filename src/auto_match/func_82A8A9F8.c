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
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f8;
extern int fn_82A86F50();
extern int fn_82A8C620();
extern int fn_82F691F0();
extern unsigned int iStack_100;
extern unsigned int iStack_fc;


undefined8 fn_82A8A9F8(int param_1,int *param_2)

{
  char cVar1;
  int iStack_100;
  int iStack_fc;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [144];
  
  cVar1 = (**(code **)(*param_2 + 4))(param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_90,0x21,auStack_f8), cVar1 != '\0')) {
    fn_82A86F50(auStack_c0,auStack_90,0x21);
    fn_82A8C620(auStack_c0,0,0x20,param_1);
    fn_82A8C620(auStack_c0,0x20,5,auStack_f8);
    fn_82A8C620(auStack_c0,0x25,0x20,param_1 + 0x1e4);
    fn_82A8C620(auStack_c0,0x45,0x20,param_1 + 0x1e8);
    fn_82A8C620(auStack_c0,0x65,0x20,param_1 + 0x1ec);
    fn_82A8C620(auStack_c0,0x85,0x20,param_1 + 0x1f0);
    fn_82A8C620(auStack_c0,0xa5,0x20,param_1 + 500);
    fn_82A8C620(auStack_c0,0xc5,0x20,&iStack_100);
    fn_82A8C620(auStack_c0,0xe5,0x20,&iStack_fc);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x200) + iStack_100;
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x200) + iStack_fc;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 4,0,0x1e0);
  }
  return 0;
}

