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
extern unsigned int *auStack_24;
extern int fn_8265CA20();
extern int fn_8288F4A8();
extern int fn_82890328();
extern int fn_828958A0();
extern int fn_8289F2E0();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_40;


undefined8 fn_82896020(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 uStack_40;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  
  iStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uVar2 = fn_8289F2E0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x18));
  if ((uVar2 & 0xffffffff) != 0) {
    fn_828958A0(param_1,&iStack_30);
    fn_8288F4A8(&iStack_30,uVar2);
    iVar1 = iStack_30;
    if (iStack_30 != 0) {
      fn_82890328(iStack_30,uStack_2c,auStack_24,uStack_40);
      fn_8265CA20(iVar1);
    }
  }
  return 1;
}

