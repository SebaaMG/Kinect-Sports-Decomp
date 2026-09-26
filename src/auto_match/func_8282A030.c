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
extern int fn_82822F60();
extern int fn_828252E8();
extern int fn_828299A8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_8282A030(int param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char cStack_20;
  
  uStack_28 = param_2;
  fn_828299A8(&uStack_28,param_1,&iStack_2c);
  if (cStack_20 != '\0') {
    iStack_30 = fn_828252E8(param_1,0x1c);
    *(undefined4 *)(iStack_30 + 0x14) = *(undefined4 *)(iStack_2c + 0xc);
    *(undefined4 *)(iStack_30 + 0x18) = uStack_24;
    *(undefined4 *)(iStack_30 + 0x10) = param_2;
    iVar1 = fn_82822F60(param_1 + 0x36c,iStack_30,0xffffffff82829f30,&iStack_30);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    }
  }
  return;
}

