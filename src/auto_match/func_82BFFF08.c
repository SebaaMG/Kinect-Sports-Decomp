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
extern int fn_8262FEC8();
extern int fn_82630108();
extern int fn_82630158();
extern int fn_82639F78();
extern int fn_8263A098();
extern int fn_82F68CC0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_82BFFF08(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = fn_8263A098(*(int *)(param_1 + 0x38),0,&uStack_1c,&uStack_20);
    fn_82639F78(*(undefined4 *)(param_1 + 0x38),0,0,0,0,1);
    uVar2 = fn_82630108(*(undefined4 *)(param_1 + 0x40),0,0x78,0);
    fn_82F68CC0(uVar2,param_1 + 0x90,0x78);
    fn_82630158(*(undefined4 *)(param_1 + 0x40));
    fn_82639F78(*(undefined4 *)(param_1 + 0x38),0,uVar1,uStack_1c,uStack_20,1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8262FEC8(uVar1);
    }
  }
  return 0;
}

